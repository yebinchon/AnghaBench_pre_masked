
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* desc; } ;
typedef TYPE_4__ vbdisp_t ;
typedef size_t vbdisp_invoke_type_t ;
typedef int WCHAR ;
struct TYPE_8__ {unsigned int func_cnt; TYPE_2__* funcs; } ;
struct TYPE_7__ {int name; TYPE_1__** entries; int is_public; } ;
struct TYPE_6__ {int is_public; } ;
typedef unsigned int DISPID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1(vbdisp_t *VAR_3, const WCHAR *VAR_4, vbdisp_invoke_type_t VAR_5, BOOL VAR_6, DISPID *VAR_7)
{
    unsigned VAR_8;

    for(VAR_8 = VAR_5 == VAR_2 ? 0 : 1; VAR_8 < VAR_3->desc->func_cnt; VAR_8++) {
        if(VAR_5 == VAR_2) {
            if(!VAR_6 && !VAR_3->desc->funcs[VAR_8].is_public)
                continue;
            if(!VAR_8 && !VAR_3->desc->funcs[0].name)
                continue;
        }else {
            if(!VAR_3->desc->funcs[VAR_8].entries[VAR_5]
                || (!VAR_6 && !VAR_3->desc->funcs[VAR_8].entries[VAR_5]->is_public))
                continue;
        }

        if(!FUNC_0(VAR_3->desc->funcs[VAR_8].name, VAR_4)) {
            *VAR_7 = VAR_8;
            return VAR_1;
        }
    }

    return VAR_0;
}
