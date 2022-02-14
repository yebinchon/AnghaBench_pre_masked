
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sig_list {int sig; void* arg; int func; struct sig_list* next; } ;
typedef int strm_sighandler_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sig_list* FUNC_0 (int) ;
 struct sig_list* VAR_2 ;

__attribute__((used)) static int
FUNC_1(int VAR_3, strm_sighandler_t VAR_4, void* VAR_5)
{
  struct sig_list* VAR_6 = FUNC_0(sizeof(struct sig_list));

  if (VAR_6 == ((void*)0)) return VAR_0;
  VAR_6->next = VAR_2;
  VAR_6->sig = VAR_3;
  VAR_6->func = VAR_4;
  VAR_6->arg = VAR_5;
  VAR_2 = VAR_6;
  return VAR_1;
}
