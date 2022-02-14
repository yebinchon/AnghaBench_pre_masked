
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_20__ {int xl_tot_len; scalar_t__ xl_rmid; int xl_info; } ;
typedef TYPE_2__ XLogRecord ;
typedef int XLogRecPtr ;
struct TYPE_19__ {int ws_segsize; } ;
struct TYPE_21__ {char* errormsg_buf; int EndRecPtr; int ReadRecPtr; int currRecPtr; char* readBuf; int readRecordBufSize; char* readRecordBuf; TYPE_1__ segcxt; } ;
typedef TYPE_3__ XLogReaderState ;
typedef TYPE_4__* XLogPageHeader ;
struct TYPE_22__ {int xlp_info; int xlp_rem_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*,char**) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_3__*,int,int,TYPE_2__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (TYPE_3__*,char*,int,int,...) ;

XLogRecord *
FUNC_15(XLogReaderState *VAR_8, XLogRecPtr VAR_9, char **VAR_10)
{
 XLogRecord *VAR_11;
 XLogRecPtr VAR_12;
 bool VAR_13;
 uint32 VAR_14,
    VAR_15;
 uint32 VAR_16;
 uint32 VAR_17;
 bool VAR_18;
 int VAR_19;






 VAR_13 = 0;


 *VAR_10 = ((void*)0);
 VAR_8->errormsg_buf[0] = '\0';

 FUNC_5(VAR_8);

 if (VAR_9 == VAR_0)
 {

  VAR_9 = VAR_8->EndRecPtr;

  if (VAR_8->ReadRecPtr == VAR_0)
   VAR_13 = 1;







 }
 else
 {






  FUNC_0(FUNC_11(VAR_9));
  VAR_13 = 1;
 }

 VAR_8->currRecPtr = VAR_9;

 VAR_12 = VAR_9 - (VAR_9 % VAR_4);
 VAR_16 = VAR_9 % VAR_4;






 VAR_19 = FUNC_4(VAR_8,
          VAR_12,
          FUNC_3(VAR_16 + VAR_2, VAR_4));
 if (VAR_19 < 0)
  goto err;





 VAR_17 = FUNC_8((XLogPageHeader) VAR_8->readBuf);
 if (VAR_16 == 0)
 {



  VAR_9 += VAR_17;
  VAR_16 = VAR_17;
 }
 else if (VAR_16 < VAR_17)
 {
  FUNC_14(VAR_8, "invalid record offset at %X/%X",
         (uint32) (VAR_9 >> 32), (uint32) VAR_9);
  goto err;
 }

 if ((((XLogPageHeader) VAR_8->readBuf)->xlp_info & VAR_6) &&
  VAR_16 == VAR_17)
 {
  FUNC_14(VAR_8, "contrecord is requested by %X/%X",
         (uint32) (VAR_9 >> 32), (uint32) VAR_9);
  goto err;
 }


 FUNC_0(VAR_17 <= VAR_19);
 VAR_11 = (XLogRecord *) (VAR_8->readBuf + VAR_9 % VAR_4);
 VAR_15 = VAR_11->xl_tot_len;
 if (VAR_16 <= VAR_4 - VAR_2)
 {
  if (!FUNC_7(VAR_8, VAR_9, VAR_8->ReadRecPtr, VAR_11,
           VAR_13))
   goto err;
  VAR_18 = 1;
 }
 else
 {

  if (VAR_15 < VAR_2)
  {
   FUNC_14(VAR_8,
          "invalid record length at %X/%X: wanted %u, got %u",
          (uint32) (VAR_9 >> 32), (uint32) VAR_9,
          (uint32) VAR_2, VAR_15);
   goto err;
  }
  VAR_18 = 0;
 }

 VAR_14 = VAR_4 - VAR_9 % VAR_4;
 if (VAR_15 > VAR_14)
 {

  char *VAR_20;
  XLogPageHeader VAR_21;
  char *VAR_22;
  uint32 VAR_23;




  if (VAR_15 > VAR_8->readRecordBufSize &&
   !FUNC_12(VAR_8, VAR_15))
  {

   FUNC_14(VAR_8, "record length %u at %X/%X too long",
          VAR_15,
          (uint32) (VAR_9 >> 32), (uint32) VAR_9);
   goto err;
  }


  FUNC_13(VAR_8->readRecordBuf,
      VAR_8->readBuf + VAR_9 % VAR_4, VAR_14);
  VAR_22 = VAR_8->readRecordBuf + VAR_14;
  VAR_23 = VAR_14;

  do
  {

   VAR_12 += VAR_4;


   VAR_19 = FUNC_4(VAR_8, VAR_12,
            FUNC_3(VAR_15 - VAR_23 + VAR_3,
             VAR_4));

   if (VAR_19 < 0)
    goto err;

   FUNC_0(VAR_3 <= VAR_19);


   VAR_21 = (XLogPageHeader) VAR_8->readBuf;
   if (!(VAR_21->xlp_info & VAR_6))
   {
    FUNC_14(VAR_8,
           "there is no contrecord flag at %X/%X",
           (uint32) (VAR_9 >> 32), (uint32) VAR_9);
    goto err;
   }





   if (VAR_21->xlp_rem_len == 0 ||
    VAR_15 != (VAR_21->xlp_rem_len + VAR_23))
   {
    FUNC_14(VAR_8,
           "invalid contrecord length %u at %X/%X",
           VAR_21->xlp_rem_len,
           (uint32) (VAR_9 >> 32), (uint32) VAR_9);
    goto err;
   }


   VAR_17 = FUNC_8(VAR_21);

   if (VAR_19 < VAR_17)
    VAR_19 = FUNC_4(VAR_8, VAR_12,
             VAR_17);

   FUNC_0(VAR_17 <= VAR_19);

   VAR_20 = (char *) VAR_8->readBuf + VAR_17;
   VAR_14 = VAR_4 - VAR_17;
   if (VAR_21->xlp_rem_len < VAR_14)
    VAR_14 = VAR_21->xlp_rem_len;

   if (VAR_19 < VAR_17 + VAR_14)
    VAR_19 = FUNC_4(VAR_8, VAR_12,
             VAR_17 + VAR_14);

   FUNC_13(VAR_22, (char *) VAR_20, VAR_14);
   VAR_22 += VAR_14;
   VAR_23 += VAR_14;


   if (!VAR_18)
   {
    VAR_11 = (XLogRecord *) VAR_8->readRecordBuf;
    if (!FUNC_7(VAR_8, VAR_9, VAR_8->ReadRecPtr,
             VAR_11, VAR_13))
     goto err;
    VAR_18 = 1;
   }
  } while (VAR_23 < VAR_15);

  FUNC_0(VAR_18);

  VAR_11 = (XLogRecord *) VAR_8->readRecordBuf;
  if (!FUNC_6(VAR_8, VAR_11, VAR_9))
   goto err;

  VAR_17 = FUNC_8((XLogPageHeader) VAR_8->readBuf);
  VAR_8->ReadRecPtr = VAR_9;
  VAR_8->EndRecPtr = VAR_12 + VAR_17
   + FUNC_2(VAR_21->xlp_rem_len);
 }
 else
 {

  VAR_19 = FUNC_4(VAR_8, VAR_12,
           FUNC_3(VAR_16 + VAR_15, VAR_4));
  if (VAR_19 < 0)
   goto err;


  if (!FUNC_6(VAR_8, VAR_11, VAR_9))
   goto err;

  VAR_8->EndRecPtr = VAR_9 + FUNC_2(VAR_15);

  VAR_8->ReadRecPtr = VAR_9;
 }




 if (VAR_11->xl_rmid == VAR_1 &&
  (VAR_11->xl_info & ~VAR_7) == VAR_5)
 {

  VAR_8->EndRecPtr += VAR_8->segcxt.ws_segsize - 1;
  VAR_8->EndRecPtr -= FUNC_10(VAR_8->EndRecPtr, VAR_8->segcxt.ws_segsize);
 }

 if (FUNC_1(VAR_8, VAR_11, VAR_10))
  return VAR_11;
 else
  return ((void*)0);

err:





 FUNC_9(VAR_8);

 if (VAR_8->errormsg_buf[0] != '\0')
  *VAR_10 = VAR_8->errormsg_buf;

 return ((void*)0);
}
