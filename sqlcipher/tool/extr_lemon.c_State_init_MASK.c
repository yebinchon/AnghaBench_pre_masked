
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x3node ;
struct s_x3 {int size; int ** ht; int * tbl; scalar_t__ count; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct s_x3*) ;
 scalar_t__ FUNC_2 (int) ;
 struct s_x3* VAR_0 ;

void FUNC_3(void){
  if( VAR_0 ) return;
  VAR_0 = (struct s_x3*)FUNC_2( sizeof(struct s_x3) );
  if( VAR_0 ){
    VAR_0->size = 128;
    VAR_0->count = 0;
    VAR_0->tbl = (x3node*)FUNC_0(128, sizeof(x3node) + sizeof(x3node*));
    if( VAR_0->tbl==0 ){
      FUNC_1(VAR_0);
      VAR_0 = 0;
    }else{
      int VAR_1;
      VAR_0->ht = (x3node**)&(VAR_0->tbl[128]);
      for(VAR_1=0; VAR_1<128; VAR_1++) VAR_0->ht[VAR_1] = 0;
    }
  }
}
