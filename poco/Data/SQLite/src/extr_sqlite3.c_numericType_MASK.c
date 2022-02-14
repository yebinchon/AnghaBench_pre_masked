
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(Mem *VAR_5){
  if( VAR_5->flags & (VAR_1|VAR_3|VAR_2) ){
    FUNC_1( VAR_5->flags & VAR_1 );
    FUNC_1( VAR_5->flags & VAR_3 );
    FUNC_1( VAR_5->flags & VAR_2 );
    return VAR_5->flags & (VAR_1|VAR_3|VAR_2);
  }
  if( VAR_5->flags & (VAR_4|VAR_0) ){
    FUNC_1( VAR_5->flags & VAR_4 );
    FUNC_1( VAR_5->flags & VAR_0 );
    return FUNC_0(VAR_5);
  }
  return 0;
}
