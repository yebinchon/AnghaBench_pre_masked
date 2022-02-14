
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sig_list {int sig; struct sig_list* next; } ;
typedef int strm_sighandler_t ;
typedef scalar_t__ sighandler_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sig_list* VAR_5 ;
 scalar_t__ FUNC_0 (int,int ) ;

int
FUNC_1(int VAR_6, strm_sighandler_t VAR_7)
{
  sighandler_t VAR_8 = FUNC_0(VAR_6, VAR_1);
  struct sig_list* VAR_9;
  struct sig_list* VAR_10 = ((void*)0);

  if (VAR_8 == VAR_0) return VAR_2;
  for (VAR_9=VAR_5; VAR_9; VAR_9=VAR_9->next) {
    if (VAR_9->sig == VAR_6) {
      if (VAR_10 == ((void*)0)) {
        VAR_5 = VAR_9->next;
      }
      else {
        VAR_10->next = VAR_9->next;
        VAR_10 = VAR_9;
      }
    }
  }
  FUNC_0(VAR_6, VAR_4);
  return VAR_3;
}
