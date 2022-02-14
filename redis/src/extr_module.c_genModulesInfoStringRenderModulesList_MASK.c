
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sds ;
struct TYPE_4__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_5__ {char* name; } ;
typedef TYPE_2__ RedisModule ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;

sds FUNC_5(list *VAR_0) {
    listIter VAR_1;
    listNode *VAR_2;
    FUNC_1(VAR_0,&VAR_1);
    sds VAR_3 = FUNC_3("[");
    while((VAR_2 = FUNC_0(&VAR_1))) {
        RedisModule *VAR_4 = VAR_2->value;
        VAR_3 = FUNC_2(VAR_3,VAR_4->name);
    }
    VAR_3 = FUNC_4(VAR_3,"|");
    VAR_3 = FUNC_2(VAR_3,"]");
    return VAR_3;
}
