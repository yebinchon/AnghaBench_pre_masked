
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int count; int len; TYPE_5__* tail; } ;
typedef TYPE_1__ quicklist ;
typedef int longstr ;
struct TYPE_7__ {int zl; } ;


 unsigned int FUNC_0 (char*,int,long long) ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*,unsigned char**) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,unsigned int) ;
 int FUNC_3 (unsigned char*,unsigned char**,unsigned int*,long long*) ;
 unsigned char* FUNC_4 (int ,int) ;

void FUNC_5(quicklist *VAR_0) {
    if (VAR_0->count <= 1)
        return;


    unsigned char *VAR_1 = FUNC_4(VAR_0->tail->zl, -1);
    unsigned char *VAR_2;
    long long VAR_3;
    unsigned int VAR_4;
    char VAR_5[32] = {0};
    FUNC_3(VAR_1, &VAR_2, &VAR_4, &VAR_3);


    if (!VAR_2) {

        VAR_4 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_3);
        VAR_2 = (unsigned char *)VAR_5;
    }


    FUNC_2(VAR_0, VAR_2, VAR_4);




    if (VAR_0->len == 1) {
        VAR_1 = FUNC_4(VAR_0->tail->zl, -1);
    }


    FUNC_1(VAR_0, VAR_0->tail, &VAR_1);
}
