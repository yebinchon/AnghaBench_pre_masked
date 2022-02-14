
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* ptr; TYPE_1__* script; } ;
typedef TYPE_2__ parser_ctx_t ;
typedef int ccval_t ;
struct TYPE_12__ {int val; } ;
typedef TYPE_3__ cc_var_t ;
typedef int WCHAR ;
struct TYPE_10__ {int cc; } ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (double) ;
 int FUNC_2 (TYPE_2__*,char*,int *) ;
 TYPE_3__* FUNC_3 (int ,int const*,unsigned int) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (TYPE_2__*,int const**,unsigned int*) ;
 int FUNC_6 (TYPE_2__*,double*) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(parser_ctx_t *VAR_3, ccval_t *VAR_4)
{
    if(!FUNC_7(VAR_3))
        return -1;

    if(FUNC_4(*VAR_3->ptr)) {
        double VAR_5;

        if(!FUNC_6(VAR_3, &VAR_5))
            return -1;

        *VAR_4 = FUNC_1(VAR_5);
        return 1;
    }

    if(*VAR_3->ptr == '@') {
        const WCHAR *VAR_6;
        unsigned VAR_7;
        cc_var_t *VAR_8;

        if(!FUNC_5(VAR_3, &VAR_6, &VAR_7))
            return -1;

        VAR_8 = FUNC_3(VAR_3->script->cc, VAR_6, VAR_7);
        *VAR_4 = VAR_8 ? VAR_8->val : FUNC_1(VAR_1);
        return 1;
    }

    if(!FUNC_2(VAR_3, L"true", ((void*)0))) {
        *VAR_4 = FUNC_0(VAR_2);
        return 1;
    }

    if(!FUNC_2(VAR_3, L"false", ((void*)0))) {
        *VAR_4 = FUNC_0(VAR_0);
        return 1;
    }

    return 0;
}
