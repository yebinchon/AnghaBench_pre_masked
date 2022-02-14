
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_11__ {scalar_t__ Flush; scalar_t__ Write; } ;
typedef TYPE_2__ XLogwrtRqst ;
typedef scalar_t__ XLogRecPtr ;
typedef TYPE_3__* XLogPageHeader ;
typedef TYPE_4__* XLogLongPageHeader ;
struct TYPE_14__ {int forcePageWrites; } ;
typedef TYPE_5__ XLogCtlInsert ;
struct TYPE_17__ {int system_identifier; } ;
struct TYPE_16__ {scalar_t__ Write; } ;
struct TYPE_10__ {scalar_t__ Write; } ;
struct TYPE_15__ {scalar_t__ InitializedUpTo; scalar_t__* xlblocks; scalar_t__ pages; TYPE_8__ LogwrtResult; int info_lck; TYPE_1__ LogwrtRqst; TYPE_5__ Insert; } ;
struct TYPE_13__ {scalar_t__ xlp_xlog_blcksz; int xlp_seg_size; int xlp_sysid; } ;
struct TYPE_12__ {int xlp_info; scalar_t__ xlp_pageaddr; int xlp_tli; int xlp_magic; } ;
typedef int Size ;


 int FUNC_0 (int) ;
 TYPE_9__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_8__ VAR_4 ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_7__* VAR_13 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (TYPE_2__,int) ;
 int FUNC_12 (int ,char*,int,int ,int ) ;
 int FUNC_13 () ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_14(XLogRecPtr VAR_15, bool VAR_16)
{
 XLogCtlInsert *VAR_17 = &VAR_13->Insert;
 int VAR_18;
 XLogRecPtr VAR_19;
 XLogwrtRqst VAR_20;
 XLogRecPtr VAR_21 = VAR_2;
 XLogRecPtr VAR_22;
 XLogPageHeader VAR_23;
 int VAR_24 = 0;

 FUNC_1(VAR_6, VAR_3);





 while (VAR_15 >= VAR_13->InitializedUpTo || VAR_16)
 {
  VAR_18 = FUNC_9(VAR_13->InitializedUpTo);






  VAR_19 = VAR_13->xlblocks[VAR_18];
  if (VAR_4.Write < VAR_19)
  {




   if (VAR_16)
    break;


   FUNC_4(&VAR_13->info_lck);
   if (VAR_13->LogwrtRqst.Write < VAR_19)
    VAR_13->LogwrtRqst.Write = VAR_19;
   VAR_4 = VAR_13->LogwrtResult;
   FUNC_5(&VAR_13->info_lck);





   if (VAR_4.Write < VAR_19)
   {






    FUNC_2(VAR_6);

    FUNC_8(VAR_19);

    FUNC_1(VAR_7, VAR_3);

    VAR_4 = VAR_13->LogwrtResult;
    if (VAR_4.Write >= VAR_19)
    {

     FUNC_2(VAR_7);
    }
    else
    {

     FUNC_7();
     VAR_20.Write = VAR_19;
     VAR_20.Flush = 0;
     FUNC_11(VAR_20, 0);
     FUNC_2(VAR_7);
     FUNC_6();
    }

    FUNC_1(VAR_6, VAR_3);
    continue;
   }
  }





  VAR_22 = VAR_13->InitializedUpTo;
  VAR_21 = VAR_22 + VAR_8;

  FUNC_0(FUNC_9(VAR_22) == VAR_18);

  VAR_23 = (XLogPageHeader) (VAR_13->pages + VAR_18 * (Size) VAR_8);





  FUNC_3((char *) VAR_23, 0, VAR_8);




  VAR_23->xlp_magic = VAR_10;


  VAR_23->xlp_tli = VAR_5;
  VAR_23->xlp_pageaddr = VAR_22;
  if (!VAR_17->forcePageWrites)
   VAR_23->xlp_info |= VAR_11;




  if ((FUNC_10(VAR_23->xlp_pageaddr, VAR_14)) == 0)
  {
   XLogLongPageHeader VAR_25 = (XLogLongPageHeader) VAR_23;

   VAR_25->xlp_sysid = VAR_0->system_identifier;
   VAR_25->xlp_seg_size = VAR_14;
   VAR_25->xlp_xlog_blcksz = VAR_8;
   VAR_23->xlp_info |= VAR_12;
  }






  FUNC_13();

  *((volatile XLogRecPtr *) &VAR_13->xlblocks[VAR_18]) = VAR_21;

  VAR_13->InitializedUpTo = VAR_21;

  VAR_24++;
 }
 FUNC_2(VAR_6);
}
