
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_5__ {double r; int i; } ;
struct TYPE_6__ {int flags; TYPE_1__ u; int n; int z; int enc; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,double*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(Mem *VAR_3, int VAR_4){
  double VAR_5;
  i64 VAR_6;
  u8 VAR_7 = VAR_3->enc;
  FUNC_0( (VAR_3->flags & (VAR_2|VAR_0|VAR_1))==VAR_2 );
  if( FUNC_1(VAR_3->z, &VAR_5, VAR_3->n, VAR_7)==0 ) return;
  if( 0==FUNC_2(VAR_3->z, &VAR_6, VAR_3->n, VAR_7) ){
    VAR_3->u.i = VAR_6;
    VAR_3->flags |= VAR_0;
  }else{
    VAR_3->u.r = VAR_5;
    VAR_3->flags |= VAR_1;
    if( VAR_4 ) FUNC_3(VAR_3);
  }
}
