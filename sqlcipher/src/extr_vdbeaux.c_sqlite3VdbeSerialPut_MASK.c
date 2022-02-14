
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int i; int nZero; int r; } ;
struct TYPE_5__ {int n; int flags; int * z; TYPE_1__ u; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *,int) ;
 int* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

u32 FUNC_4(u8 *VAR_2, Mem *VAR_3, u32 VAR_4){
  u32 VAR_5;


  if( VAR_4<=7 && VAR_4>0 ){
    u64 VAR_6;
    u32 VAR_7;
    if( VAR_4==7 ){
      FUNC_0( sizeof(VAR_6)==sizeof(VAR_3->u.r) );
      FUNC_1(&VAR_6, &VAR_3->u.r, sizeof(VAR_6));
      FUNC_3(VAR_6);
    }else{
      VAR_6 = VAR_3->u.i;
    }
    VAR_5 = VAR_7 = VAR_1[VAR_4];
    FUNC_0( VAR_7>0 );
    do{
      VAR_2[--VAR_7] = (u8)(VAR_6&0xFF);
      VAR_6 >>= 8;
    }while( VAR_7 );
    return VAR_5;
  }


  if( VAR_4>=12 ){
    FUNC_0( VAR_3->n + ((VAR_3->flags & VAR_0)?VAR_3->u.nZero:0)
             == (int)FUNC_2(VAR_4) );
    VAR_5 = VAR_3->n;
    if( VAR_5>0 ) FUNC_1(VAR_2, VAR_3->z, VAR_5);
    return VAR_5;
  }


  return 0;
}
