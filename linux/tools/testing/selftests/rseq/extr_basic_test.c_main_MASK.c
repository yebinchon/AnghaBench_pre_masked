
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 char* FUNC_4 (int) ;
 int FUNC_5 () ;

int FUNC_6(int VAR_2, char **VAR_3)
{
 if (FUNC_2()) {
  FUNC_0(VAR_1, "Error: rseq_register_current_thread(...) failed(%d): %s\n",
   VAR_0, FUNC_4(VAR_0));
  goto init_thread_error;
 }
 FUNC_1("testing current cpu\n");
 FUNC_5();
 if (FUNC_3()) {
  FUNC_0(VAR_1, "Error: rseq_unregister_current_thread(...) failed(%d): %s\n",
   VAR_0, FUNC_4(VAR_0));
  goto init_thread_error;
 }
 return 0;

init_thread_error:
 return -1;
}
