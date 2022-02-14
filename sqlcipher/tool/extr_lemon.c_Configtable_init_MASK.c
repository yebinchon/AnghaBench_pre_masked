
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x4node ;
struct s_x4 {int size; int ** ht; int * tbl; scalar_t__ count; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct s_x4*) ;
 scalar_t__ FUNC_2 (int) ;
 struct s_x4* VAR_0 ;

void FUNC_3(void){
  if( VAR_0 ) return;
  VAR_0 = (struct s_x4*)FUNC_2( sizeof(struct s_x4) );
  if( VAR_0 ){
    VAR_0->size = 64;
    VAR_0->count = 0;
    VAR_0->tbl = (x4node*)FUNC_0(64, sizeof(x4node) + sizeof(x4node*));
    if( VAR_0->tbl==0 ){
      FUNC_1(VAR_0);
      VAR_0 = 0;
    }else{
      int VAR_1;
      VAR_0->ht = (x4node**)&(VAR_0->tbl[64]);
      for(VAR_1=0; VAR_1<64; VAR_1++) VAR_0->ht[VAR_1] = 0;
    }
  }
}
