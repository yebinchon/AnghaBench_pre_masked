
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {scalar_t__ fplp; scalar_t__ bplp; scalar_t__ fws; struct config* next; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct config*) ;

void FUNC_3(struct config *VAR_0)
{
  struct config *VAR_1;
  for(; VAR_0; VAR_0=VAR_1){
    VAR_1 = VAR_0->next;
    FUNC_1( VAR_0->fplp==0 );
    FUNC_1( VAR_0->bplp==0 );
    if( VAR_0->fws ) FUNC_0(VAR_0->fws);
    FUNC_2(VAR_0);
  }
  return;
}
