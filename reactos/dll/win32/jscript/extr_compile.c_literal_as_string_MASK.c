
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dval; int * str; } ;
struct TYPE_5__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ literal_t ;
typedef int jsstr_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,int **) ;

__attribute__((used)) static HRESULT FUNC_1(compiler_ctx_t *VAR_3, literal_t *VAR_4, jsstr_t **VAR_5)
{
    switch(VAR_4->type) {
    case 128:
        *VAR_5 = VAR_4->u.str;
        break;
    case 129:
        return FUNC_0(VAR_4->u.dval, VAR_5);
    VAR_0;
    }

    return *VAR_5 ? VAR_2 : VAR_1;
}
