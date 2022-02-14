
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; int * name; } ;
typedef TYPE_1__ configEnum ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

int FUNC_1(configEnum *VAR_1, char *VAR_2) {
    while(VAR_1->name != ((void*)0)) {
        if (!FUNC_0(VAR_1->name,VAR_2)) return VAR_1->val;
        VAR_1++;
    }
    return VAR_0;
}
