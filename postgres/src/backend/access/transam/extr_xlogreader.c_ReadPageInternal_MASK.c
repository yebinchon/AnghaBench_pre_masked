
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ XLogSegNo ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_11__ {scalar_t__ ws_segno; scalar_t__ ws_off; } ;
struct TYPE_10__ {int ws_segsize; } ;
struct TYPE_12__ {int readLen; int (* read_page ) (TYPE_3__*,scalar_t__,scalar_t__,int ,char*) ;char* readBuf; TYPE_2__ seg; int currRecPtr; TYPE_1__ segcxt; } ;
typedef TYPE_3__ XLogReaderState ;
typedef scalar_t__ XLogPageHeader ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,scalar_t__,int ,char*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,scalar_t__,int ,char*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,int,int ,char*) ;

__attribute__((used)) static int
FUNC_10(XLogReaderState *VAR_2, XLogRecPtr VAR_3, int VAR_4)
{
 int VAR_5;
 uint32 VAR_6;
 XLogSegNo VAR_7;
 XLogPageHeader VAR_8;

 FUNC_0((VAR_3 % VAR_1) == 0);

 FUNC_2(VAR_3, VAR_7, VAR_2->segcxt.ws_segsize);
 VAR_6 = FUNC_6(VAR_3, VAR_2->segcxt.ws_segsize);


 if (VAR_7 == VAR_2->seg.ws_segno &&
  VAR_6 == VAR_2->seg.ws_off && VAR_4 <= VAR_2->readLen)
  return VAR_2->readLen;
 if (VAR_7 != VAR_2->seg.ws_segno && VAR_6 != 0)
 {
  XLogRecPtr VAR_9 = VAR_3 - VAR_6;

  VAR_5 = VAR_2->read_page(VAR_2, VAR_9, VAR_1,
           VAR_2->currRecPtr,
           VAR_2->readBuf);
  if (VAR_5 < 0)
   goto err;


  FUNC_0(VAR_5 == VAR_1);

  if (!FUNC_5(VAR_2, VAR_9,
            VAR_2->readBuf))
   goto err;
 }





 VAR_5 = VAR_2->read_page(VAR_2, VAR_3, FUNC_1(VAR_4, VAR_0),
          VAR_2->currRecPtr,
          VAR_2->readBuf);
 if (VAR_5 < 0)
  goto err;

 FUNC_0(VAR_5 <= VAR_1);


 if (VAR_5 <= VAR_0)
  goto err;

 FUNC_0(VAR_5 >= VAR_4);

 VAR_8 = (XLogPageHeader) VAR_2->readBuf;


 if (VAR_5 < FUNC_3(VAR_8))
 {
  VAR_5 = VAR_2->read_page(VAR_2, VAR_3, FUNC_3(VAR_8),
           VAR_2->currRecPtr,
           VAR_2->readBuf);
  if (VAR_5 < 0)
   goto err;
 }




 if (!FUNC_5(VAR_2, VAR_3, (char *) VAR_8))
  goto err;


 VAR_2->seg.ws_segno = VAR_7;
 VAR_2->seg.ws_off = VAR_6;
 VAR_2->readLen = VAR_5;

 return VAR_5;

err:
 FUNC_4(VAR_2);
 return -1;
}
