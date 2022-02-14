
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int max_l_index; int l_index; struct TYPE_7__* l; void* keydec; void* keyenc; } ;
typedef TYPE_1__ OCB128_CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_3(OCB128_CONTEXT *VAR_2, OCB128_CONTEXT *VAR_3,
                           void *VAR_4, void *VAR_5)
{
    FUNC_2(VAR_2, VAR_3, sizeof(OCB128_CONTEXT));
    if (VAR_4)
        VAR_2->keyenc = VAR_4;
    if (VAR_5)
        VAR_2->keydec = VAR_5;
    if (VAR_3->l) {
        if ((VAR_2->l = FUNC_1(VAR_3->max_l_index * 16)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        FUNC_2(VAR_2->l, VAR_3->l, (VAR_3->l_index + 1) * 16);
    }
    return 1;
}
