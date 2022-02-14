
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {int dummy; } ;
struct config {int dot; struct config* next; scalar_t__ bp; scalar_t__ bplp; scalar_t__ fplp; scalar_t__ stp; int fws; struct rule* rp; } ;


 struct config* FUNC_0 (struct config*) ;
 int FUNC_1 (struct config*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 struct config** VAR_0 ;
 struct config* FUNC_4 () ;

struct config *FUNC_5(
  struct rule *VAR_1,
  int VAR_2
){
  struct config *VAR_3, VAR_4;

  FUNC_3( VAR_0!=0 );
  VAR_4.rp = VAR_1;
  VAR_4.dot = VAR_2;
  VAR_3 = FUNC_0(&VAR_4);
  if( VAR_3==0 ){
    VAR_3 = FUNC_4();
    VAR_3->rp = VAR_1;
    VAR_3->dot = VAR_2;
    VAR_3->fws = FUNC_2();
    VAR_3->stp = 0;
    VAR_3->fplp = VAR_3->bplp = 0;
    VAR_3->next = 0;
    VAR_3->bp = 0;
    *VAR_0 = VAR_3;
    VAR_0 = &VAR_3->next;
    FUNC_1(VAR_3);
  }
  return VAR_3;
}
