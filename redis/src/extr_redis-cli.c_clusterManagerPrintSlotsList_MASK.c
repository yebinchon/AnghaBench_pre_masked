
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_3__ {char* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(list *VAR_0) {
    listIter VAR_1;
    listNode *VAR_2;
    FUNC_1(VAR_0, &VAR_1);
    sds VAR_3 = ((void*)0);
    while ((VAR_2 = FUNC_0(&VAR_1)) != ((void*)0)) {
        sds VAR_4 = VAR_2->value;
        if (!VAR_3) VAR_3 = VAR_4;
        else FUNC_2(", ");
        FUNC_2("%s", VAR_4);
    }
    FUNC_2("\n");
}
