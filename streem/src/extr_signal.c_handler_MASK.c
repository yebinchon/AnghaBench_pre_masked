
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sig_list {int sig; int arg; int (* func ) (int,int ) ;struct sig_list* next; } ;


 struct sig_list* VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_1)
{
  struct sig_list* VAR_2;

  for (VAR_2=VAR_0; VAR_2; VAR_2=VAR_2->next) {
    if (VAR_2->sig == VAR_1) {
      (*VAR_2->func)(VAR_1, VAR_2->arg);
    }
  }
}
