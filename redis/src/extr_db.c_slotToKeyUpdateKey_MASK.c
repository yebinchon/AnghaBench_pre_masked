
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_7__ {TYPE_1__* cluster; } ;
struct TYPE_5__ {int* slots_keys_count; int slots_to_keys; } ;


 unsigned int FUNC_0 (int ,size_t) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;
 int FUNC_2 (int ,unsigned char*,size_t,int *,int *) ;
 int FUNC_3 (int ,unsigned char*,size_t,int *) ;
 size_t FUNC_4 (int ) ;
 TYPE_4__ VAR_0 ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (size_t) ;

void FUNC_7(robj *VAR_1, int VAR_2) {
    unsigned int VAR_3 = FUNC_0(VAR_1->ptr,FUNC_4(VAR_1->ptr));
    unsigned char VAR_4[64];
    unsigned char *VAR_5 = VAR_4;
    size_t VAR_6 = FUNC_4(VAR_1->ptr);

    VAR_0.cluster->slots_keys_count[VAR_3] += VAR_2 ? 1 : -1;
    if (VAR_6+2 > 64) VAR_5 = FUNC_6(VAR_6+2);
    VAR_5[0] = (VAR_3 >> 8) & 0xff;
    VAR_5[1] = VAR_3 & 0xff;
    FUNC_1(VAR_5+2,VAR_1->ptr,VAR_6);
    if (VAR_2) {
        FUNC_2(VAR_0.cluster->slots_to_keys,VAR_5,VAR_6+2,((void*)0),((void*)0));
    } else {
        FUNC_3(VAR_0.cluster->slots_to_keys,VAR_5,VAR_6+2,((void*)0));
    }
    if (VAR_5 != VAR_4) FUNC_5(VAR_5);
}
