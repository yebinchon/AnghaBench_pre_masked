
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * totaltime; TYPE_1__* estate; int instrument_options; } ;
struct TYPE_6__ {int es_query_cxt; } ;
typedef TYPE_2__ QueryDesc ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 double VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (TYPE_2__*,int) ;
 double FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_7(QueryDesc *VAR_13, int VAR_14)
{
 if (VAR_12 == 0)
 {
  if (VAR_8 >= 0 && !FUNC_1())
   VAR_11 = (FUNC_5() < VAR_10 *
          ((double) VAR_5 + 1));
  else
   VAR_11 = 0;
 }

 if (FUNC_3())
 {

  if (VAR_6 && (VAR_14 & VAR_0) == 0)
  {
   if (VAR_9)
    VAR_13->instrument_options |= VAR_4;
   else
    VAR_13->instrument_options |= VAR_3;
   if (VAR_7)
    VAR_13->instrument_options |= VAR_2;
  }
 }

 if (&FUNC_4)
  FUNC_4(VAR_13, VAR_14);
 else
  FUNC_6(VAR_13, VAR_14);

 if (FUNC_3())
 {





  if (VAR_13->totaltime == ((void*)0))
  {
   MemoryContext VAR_15;

   VAR_15 = FUNC_2(VAR_13->estate->es_query_cxt);
   VAR_13->totaltime = FUNC_0(1, VAR_1);
   FUNC_2(VAR_15);
  }
 }
}
