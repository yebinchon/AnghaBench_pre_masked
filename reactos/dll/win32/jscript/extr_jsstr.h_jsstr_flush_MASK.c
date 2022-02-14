
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jsstr_t ;
struct TYPE_5__ {int * left; int * right; } ;
typedef TYPE_1__ jsstr_rope_t ;
typedef int WCHAR ;
struct TYPE_7__ {int buf; } ;
struct TYPE_6__ {int buf; } ;


 TYPE_4__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned int) ;

__attribute__((used)) static inline unsigned FUNC_7(jsstr_t *VAR_0, WCHAR *VAR_1)
{
    unsigned VAR_2 = FUNC_5(VAR_0);
    if(FUNC_4(VAR_0)) {
        FUNC_6(VAR_1, FUNC_1(VAR_0)->buf, VAR_2*sizeof(WCHAR));
    }else if(FUNC_3(VAR_0)) {
        FUNC_6(VAR_1, FUNC_0(VAR_0)->buf, VAR_2*sizeof(WCHAR));
    }else {
        jsstr_rope_t *VAR_3 = FUNC_2(VAR_0);
        FUNC_7(VAR_3->left, VAR_1);
        FUNC_7(VAR_3->right, VAR_1+FUNC_5(VAR_3->left));
    }
    return VAR_2;
}
