
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ db; int flags; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*,int) ;

void FUNC_5(Mem *VAR_4, const Mem *VAR_5, int VAR_6){
  FUNC_1( !FUNC_3(VAR_5) );
  FUNC_1( VAR_4->db==VAR_5->db );
  if( FUNC_0(VAR_4) ){ FUNC_4(VAR_4,VAR_5,VAR_6); return; }
  FUNC_2(VAR_4, VAR_5, VAR_0);
  if( (VAR_5->flags&VAR_3)==0 ){
    VAR_4->flags &= ~(VAR_1|VAR_3|VAR_2);
    FUNC_1( VAR_6==VAR_2 || VAR_6==VAR_3 );
    VAR_4->flags |= VAR_6;
  }
}
