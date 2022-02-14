
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
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static u16 FUNC_1(Mem *VAR_4){
  if( VAR_4->flags & (VAR_1|VAR_2) ){
    return VAR_4->flags & (VAR_1|VAR_2);
  }
  if( VAR_4->flags & (VAR_3|VAR_0) ){
    return FUNC_0(VAR_4);
  }
  return 0;
}
