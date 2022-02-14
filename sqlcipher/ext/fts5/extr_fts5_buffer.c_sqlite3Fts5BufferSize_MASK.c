
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int nSpace; int * p; } ;
typedef TYPE_1__ Fts5Buffer ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;

int FUNC_1(int *VAR_1, Fts5Buffer *VAR_2, u32 VAR_3){
  if( (u32)VAR_2->nSpace<VAR_3 ){
    u64 VAR_4 = VAR_2->nSpace ? VAR_2->nSpace : 64;
    u8 *VAR_5;
    while( VAR_4<VAR_3 ){
      VAR_4 = VAR_4 * 2;
    }
    VAR_5 = FUNC_0(VAR_2->p, VAR_4);
    if( VAR_5==0 ){
      *VAR_1 = VAR_0;
      return 1;
    }else{
      VAR_2->nSpace = (int)VAR_4;
      VAR_2->p = VAR_5;
    }
  }
  return 0;
}
