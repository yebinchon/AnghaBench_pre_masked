
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {int dummy; } ;
struct config {int dot; struct config* bp; struct config* next; scalar_t__ bplp; scalar_t__ fplp; scalar_t__ stp; int fws; struct rule* rp; } ;


 struct config* FUNC_0 (struct config*) ;
 int FUNC_1 (struct config*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 struct config** VAR_0 ;
 struct config** VAR_1 ;
 struct config* FUNC_4 () ;

struct config *FUNC_5(struct rule *VAR_2, int VAR_3)
{
  struct config *VAR_4, VAR_5;

  FUNC_3( VAR_0!=0 );
  FUNC_3( VAR_1!=0 );
  VAR_5.rp = VAR_2;
  VAR_5.dot = VAR_3;
  VAR_4 = FUNC_0(&VAR_5);
  if( VAR_4==0 ){
    VAR_4 = FUNC_4();
    VAR_4->rp = VAR_2;
    VAR_4->dot = VAR_3;
    VAR_4->fws = FUNC_2();
    VAR_4->stp = 0;
    VAR_4->fplp = VAR_4->bplp = 0;
    VAR_4->next = 0;
    VAR_4->bp = 0;
    *VAR_1 = VAR_4;
    VAR_1 = &VAR_4->next;
    *VAR_0 = VAR_4;
    VAR_0 = &VAR_4->bp;
    FUNC_1(VAR_4);
  }
  return VAR_4;
}
