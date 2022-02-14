
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int Write; int Flush; } ;
typedef TYPE_2__ XLogwrtRqst ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int Flush; int Write; } ;
struct TYPE_6__ {int Write; } ;
struct TYPE_8__ {TYPE_5__ LogwrtResult; int info_lck; TYPE_1__ LogwrtRqst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 scalar_t__ VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__,int) ;
 int FUNC_12 (int ,char*,int ,int ,int ,int ,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (scalar_t__) ;

void
FUNC_14(XLogRecPtr VAR_10)
{
 XLogRecPtr VAR_11;
 XLogwrtRqst VAR_12;
 if (!FUNC_10())
 {
  FUNC_7(VAR_10, 0);
  return;
 }


 if (VAR_10 <= VAR_5.Flush)
  return;
 FUNC_4();
 VAR_11 = VAR_10;





 for (;;)
 {
  XLogRecPtr VAR_13;


  FUNC_5(&VAR_8->info_lck);
  if (VAR_11 < VAR_8->LogwrtRqst.Write)
   VAR_11 = VAR_8->LogwrtRqst.Write;
  VAR_5 = VAR_8->LogwrtResult;
  FUNC_6(&VAR_8->info_lck);


  if (VAR_10 <= VAR_5.Flush)
   break;





  VAR_13 = FUNC_8(VAR_11);
  if (!FUNC_1(VAR_6, VAR_4))
  {





   continue;
  }


  VAR_5 = VAR_8->LogwrtResult;
  if (VAR_10 <= VAR_5.Flush)
  {
   FUNC_2(VAR_6);
   break;
  }
  if (VAR_0 > 0 && VAR_9 &&
   FUNC_3(VAR_1))
  {
   FUNC_13(VAR_0);
   VAR_13 = FUNC_8(VAR_13);
  }


  VAR_12.Write = VAR_13;
  VAR_12.Flush = VAR_13;

  FUNC_11(VAR_12, 0);

  FUNC_2(VAR_6);

  break;
 }

 FUNC_0();


 FUNC_9();
 if (VAR_5.Flush < VAR_10)
  FUNC_12(VAR_2,
    "xlog flush request %X/%X is not satisfied --- flushed only to %X/%X",
    (uint32) (VAR_10 >> 32), (uint32) VAR_10,
    (uint32) (VAR_5.Flush >> 32), (uint32) VAR_5.Flush);
}
