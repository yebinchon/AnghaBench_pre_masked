
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int length_flags; } ;
struct TYPE_8__ {TYPE_3__ str; TYPE_3__* right; TYPE_3__* left; } ;
typedef TYPE_1__ jsstr_rope_t ;
typedef scalar_t__ WCHAR ;
struct TYPE_10__ {scalar_t__ const* buf; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__*) ;
 size_t FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

const WCHAR *FUNC_5(jsstr_rope_t *VAR_1)
{
    WCHAR *VAR_2;

    VAR_2 = FUNC_0((FUNC_3(&VAR_1->str)+1) * sizeof(WCHAR));
    if(!VAR_2)
        return ((void*)0);

    FUNC_2(VAR_1->left, VAR_2);
    FUNC_2(VAR_1->right, VAR_2+FUNC_3(VAR_1->left));
    VAR_2[FUNC_3(&VAR_1->str)] = 0;


    FUNC_4(VAR_1->left);
    FUNC_4(VAR_1->right);
    VAR_1->str.length_flags |= VAR_0;
    return FUNC_1(&VAR_1->str)->buf = VAR_2;
}
