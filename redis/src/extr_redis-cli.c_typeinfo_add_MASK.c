
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
typedef TYPE_1__ typeinfo ;
typedef int dict ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static typeinfo* FUNC_3(dict *VAR_0, char* VAR_1, typeinfo* VAR_2) {
    typeinfo *VAR_3 = FUNC_2(sizeof(typeinfo));
    *VAR_3 = *VAR_2;
    VAR_3->name = FUNC_1(VAR_1);
    FUNC_0(VAR_0, VAR_3->name, VAR_3);
    return VAR_3;
}
