
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int softirqs_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7(void (*VAR_8)(void), int VAR_9, int VAR_10)
{
 unsigned long VAR_11 = FUNC_3();

 FUNC_0(FUNC_1());

 VAR_8();




 if (VAR_9 == VAR_0 && VAR_2) {
  VAR_4++;
  FUNC_2("failed|");
 }
 else

 if (VAR_2 != VAR_9) {
  VAR_7++;
  FUNC_2("FAILED|");
 } else {
  VAR_5++;
  FUNC_2("  ok  |");
 }
 VAR_6++;

 if (VAR_3)
  FUNC_2(" lockclass mask: %x, debug_locks: %d, expected: %d\n",
   VAR_10, VAR_2, VAR_9);




 FUNC_4(VAR_11);







 FUNC_5();
}
