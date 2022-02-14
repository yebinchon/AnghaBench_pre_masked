
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(list *VAR_0) {
    listIter VAR_1;
    listNode *VAR_2;
    FUNC_2(VAR_0, &VAR_1);
    while ((VAR_2 = FUNC_0(&VAR_1)) != ((void*)0)) {
        sds VAR_3 = VAR_2->value;
        FUNC_3(VAR_3);
    }
    FUNC_1(VAR_0);
}
