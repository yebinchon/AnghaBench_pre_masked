
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(Mem *VAR_7, const Mem *VAR_8){
  int VAR_9 = VAR_6;

  FUNC_1( !FUNC_3(VAR_8) );
  if( FUNC_0(VAR_7) ) FUNC_5(VAR_7);
  FUNC_2(VAR_7, VAR_8, VAR_0);
  VAR_7->flags &= ~VAR_2;
  if( VAR_7->flags&(VAR_5|VAR_1) ){
    if( 0==(VAR_8->flags&VAR_4) ){
      VAR_7->flags |= VAR_3;
      VAR_9 = FUNC_4(VAR_7);
    }
  }

  return VAR_9;
}
