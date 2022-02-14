
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* typeinfos; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_7__ {int* func_data; int* var_data; int* func_indices; int* var_indices; int* func_names; int* var_names; int* func_offsets; int* var_offsets; TYPE_1__* typeinfo; struct TYPE_7__* next_typeinfo; } ;
typedef TYPE_3__ msft_typeinfo_t ;
struct TYPE_5__ {int cElement; } ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static void FUNC_1(msft_typelib_t *VAR_0)
{
    msft_typeinfo_t *VAR_1;
    int VAR_2;

    for (VAR_1 = VAR_0->typeinfos; VAR_1; VAR_1 = VAR_1->next_typeinfo) {
        if (!VAR_1->func_data && !VAR_1->var_data) continue;
        VAR_2 = 0;
 if (VAR_1->func_data)
            VAR_2 = VAR_1->func_data[0];
 if (VAR_1->var_data)
            VAR_2 += VAR_1->var_data[0];
 FUNC_0(&VAR_2, sizeof(int));
        if (VAR_1->func_data)
            FUNC_0(VAR_1->func_data + 1, VAR_1->func_data[0]);
        if (VAR_1->var_data)
            FUNC_0(VAR_1->var_data + 1, VAR_1->var_data[0]);
        if (VAR_1->func_indices)
            FUNC_0(VAR_1->func_indices, (VAR_1->typeinfo->cElement & 0xffff) * 4);
        if (VAR_1->var_indices)
            FUNC_0(VAR_1->var_indices, (VAR_1->typeinfo->cElement >> 16) * 4);
        if (VAR_1->func_names)
            FUNC_0(VAR_1->func_names, (VAR_1->typeinfo->cElement & 0xffff) * 4);
        if (VAR_1->var_names)
            FUNC_0(VAR_1->var_names, (VAR_1->typeinfo->cElement >> 16) * 4);
        if (VAR_1->func_offsets)
            FUNC_0(VAR_1->func_offsets, (VAR_1->typeinfo->cElement & 0xffff) * 4);
        if (VAR_1->var_offsets) {
            int VAR_3 = 0, VAR_4, VAR_5;
            if(VAR_1->func_data)
                VAR_3 = VAR_1->func_data[0];
            for(VAR_4 = 0; VAR_4 < (VAR_1->typeinfo->cElement >> 16); VAR_4++) {
                VAR_5 = VAR_1->var_offsets[VAR_4];
                VAR_5 += VAR_3;
                FUNC_0(&VAR_5, 4);
            }
        }
    }
}
