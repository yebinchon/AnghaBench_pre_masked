
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* zParentColumn; struct TYPE_5__* zIdColumn; struct TYPE_5__* zTableName; struct TYPE_5__* zSelf; struct TYPE_5__* zDb; } ;
typedef TYPE_1__ closure_vtab ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(closure_vtab *VAR_0){
  if( VAR_0 ){
    FUNC_1(VAR_0->zDb);
    FUNC_1(VAR_0->zSelf);
    FUNC_1(VAR_0->zTableName);
    FUNC_1(VAR_0->zIdColumn);
    FUNC_1(VAR_0->zParentColumn);
    FUNC_0(VAR_0, 0, sizeof(*VAR_0));
    FUNC_1(VAR_0);
  }
}
