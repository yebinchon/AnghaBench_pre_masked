
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int,char*,int,...) ;
 int FUNC_10 () ;
 int VAR_2 ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(bool VAR_3)
{
 int VAR_4;

 FUNC_9(1, "starting single_thread_tests: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 FUNC_8();
 FUNC_10();
 FUNC_9(2, "after multiorder_check: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 FUNC_11();
 FUNC_10();
 FUNC_9(2, "after tag_check: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 FUNC_5();
 FUNC_10();
 FUNC_9(2, "after gang_check: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 FUNC_0();
 FUNC_10();
 FUNC_9(2, "after add_and_check: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 FUNC_3();
 FUNC_10();
 FUNC_9(2, "after dynamic_height_check: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 FUNC_7();
 FUNC_6();
 FUNC_10();
 FUNC_9(2, "after idr_checks: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 FUNC_1(VAR_3);
 FUNC_10();
 FUNC_9(2, "after big_gang_check: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
 for (VAR_4 = 0; VAR_4 < (VAR_3 ? 2000 : 3); VAR_4++) {
  FUNC_2();
  FUNC_9(2, "%d ", VAR_4);
  FUNC_4(VAR_2);
 }
 FUNC_10();
 FUNC_9(2, "after copy_tag_check: %d allocated, preempt %d\n",
  VAR_0, VAR_1);
}
