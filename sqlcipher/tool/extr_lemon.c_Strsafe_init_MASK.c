
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x1node ;
struct s_x1 {int size; int ** ht; int * tbl; scalar_t__ count; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct s_x1*) ;
 scalar_t__ FUNC_2 (int) ;
 struct s_x1* VAR_0 ;

void FUNC_3(void){
  if( VAR_0 ) return;
  VAR_0 = (struct s_x1*)FUNC_2( sizeof(struct s_x1) );
  if( VAR_0 ){
    VAR_0->size = 1024;
    VAR_0->count = 0;
    VAR_0->tbl = (x1node*)FUNC_0(1024, sizeof(x1node) + sizeof(x1node*));
    if( VAR_0->tbl==0 ){
      FUNC_1(VAR_0);
      VAR_0 = 0;
    }else{
      int VAR_1;
      VAR_0->ht = (x1node**)&(VAR_0->tbl[1024]);
      for(VAR_1=0; VAR_1<1024; VAR_1++) VAR_0->ht[VAR_1] = 0;
    }
  }
}
