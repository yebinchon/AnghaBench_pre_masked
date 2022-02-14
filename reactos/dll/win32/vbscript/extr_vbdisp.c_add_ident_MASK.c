
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int const* name; } ;
typedef TYPE_1__ ident_map_t ;
typedef int WCHAR ;
struct TYPE_9__ {int ident_map_size; int ident_map_cnt; TYPE_1__* ident_map; } ;
typedef TYPE_2__ ScriptDisp ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static ident_map_t *FUNC_2(ScriptDisp *VAR_0, const WCHAR *VAR_1)
{
    ident_map_t *VAR_2;

    if(!VAR_0->ident_map_size) {
        VAR_0->ident_map = FUNC_0(4 * sizeof(*VAR_0->ident_map));
        if(!VAR_0->ident_map)
            return ((void*)0);
        VAR_0->ident_map_size = 4;
    }else if(VAR_0->ident_map_cnt == VAR_0->ident_map_size) {
        ident_map_t *VAR_3;

        VAR_3 = FUNC_1(VAR_0->ident_map, 2*VAR_0->ident_map_size*sizeof(*VAR_3));
        if(!VAR_3)
            return ((void*)0);
        VAR_0->ident_map = VAR_3;
        VAR_0->ident_map_size *= 2;
    }

    VAR_2 = VAR_0->ident_map + VAR_0->ident_map_cnt++;
    VAR_2->name = VAR_1;
    return VAR_2;
}
