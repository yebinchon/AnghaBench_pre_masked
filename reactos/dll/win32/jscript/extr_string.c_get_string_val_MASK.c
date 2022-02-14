
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int disp; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsstr_t ;
struct TYPE_9__ {int str; } ;
typedef TYPE_3__ StringInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_1, vdisp_t *VAR_2, jsstr_t **VAR_3)
{
    StringInstance *VAR_4;

    if((VAR_4 = FUNC_2(VAR_2))) {
        *VAR_3 = FUNC_0(VAR_4->str);
        return VAR_0;
    }

    return FUNC_3(VAR_1, FUNC_1(VAR_2->u.disp), VAR_3);
}
