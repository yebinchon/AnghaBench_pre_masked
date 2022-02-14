
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {double r; int i; } ;
struct TYPE_7__ {int flags; TYPE_1__ u; int n; int z; int enc; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,double,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,double*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(Mem *VAR_4, int VAR_5){
  double VAR_6;
  u8 VAR_7 = VAR_4->enc;
  int VAR_8;
  FUNC_1( (VAR_4->flags & (VAR_3|VAR_0|VAR_2|VAR_1))==VAR_3 );
  VAR_8 = FUNC_2(VAR_4->z, &VAR_6, VAR_4->n, VAR_7);
  if( VAR_8<=0 ) return;
  if( VAR_8==1 && FUNC_0(VAR_4, VAR_6, &VAR_4->u.i) ){
    VAR_4->flags |= VAR_0;
  }else{
    VAR_4->u.r = VAR_6;
    VAR_4->flags |= VAR_2;
    if( VAR_5 ) FUNC_3(VAR_4);
  }




  VAR_4->flags &= ~VAR_3;
}
