
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rel_pages; scalar_t__ nonempty_pages; int lock_waiter_detected; int pages_removed; } ;
typedef int Relation ;
typedef int PGRUsage ;
typedef TYPE_1__ LVRelStats ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(Relation VAR_6, LVRelStats *VAR_7)
{
 BlockNumber VAR_8 = VAR_7->rel_pages;
 BlockNumber VAR_9;
 PGRUsage VAR_10;
 int VAR_11;

 FUNC_10(&VAR_10);


 FUNC_13(VAR_1,
         VAR_2);




 do
 {







  VAR_7->lock_waiter_detected = 0;
  VAR_11 = 0;
  while (1)
  {
   if (FUNC_1(VAR_6, VAR_0))
    break;





   FUNC_0();

   if (++VAR_11 > (VAR_3 /
        VAR_4))
   {




    VAR_7->lock_waiter_detected = 1;
    FUNC_7(VAR_5,
      (FUNC_9("\"%s\": stopping truncate due to conflicting lock request",
        FUNC_3(VAR_6))));
    return;
   }

   FUNC_12(VAR_4 * 1000L);
  }






  VAR_9 = FUNC_2(VAR_6);
  if (VAR_9 != VAR_8)
  {







   FUNC_5(VAR_6, VAR_0);
   return;
  }







  VAR_9 = FUNC_6(VAR_6, VAR_7);

  if (VAR_9 >= VAR_8)
  {

   FUNC_5(VAR_6, VAR_0);
   return;
  }




  FUNC_4(VAR_6, VAR_9);
  FUNC_5(VAR_6, VAR_0);






  VAR_7->pages_removed += VAR_8 - VAR_9;
  VAR_7->rel_pages = VAR_9;

  FUNC_7(VAR_5,
    (FUNC_9("\"%s\": truncated %u to %u pages",
      FUNC_3(VAR_6),
      VAR_8, VAR_9),
     FUNC_8("%s",
         FUNC_11(&VAR_10))));
  VAR_8 = VAR_9;
 } while (VAR_9 > VAR_7->nonempty_pages &&
    VAR_7->lock_waiter_detected);
}
