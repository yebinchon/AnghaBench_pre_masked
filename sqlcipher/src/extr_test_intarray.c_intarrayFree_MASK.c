
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int (* xFree ) (int ) ;} ;
typedef TYPE_1__ sqlite3_intarray ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(sqlite3_intarray *VAR_0){
  if( VAR_0->xFree ){
    VAR_0->xFree(VAR_0->a);
  }
  FUNC_0(VAR_0);
}
