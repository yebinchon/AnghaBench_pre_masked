
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ val; struct TYPE_9__* next; } ;
typedef TYPE_1__ dim_list_t ;
struct TYPE_10__ {TYPE_1__* dims; } ;
typedef TYPE_2__ dim_decl_t ;
struct TYPE_11__ {int code; } ;
typedef TYPE_3__ compile_ctx_t ;
struct TYPE_12__ {unsigned int dim_cnt; TYPE_8__* bounds; } ;
typedef TYPE_4__ array_desc_t ;
struct TYPE_13__ {scalar_t__ lLbound; scalar_t__ cElements; } ;
typedef int SAFEARRAYBOUND ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_1(compile_ctx_t *VAR_2, dim_decl_t *VAR_3, array_desc_t *VAR_4)
{
    unsigned VAR_5 = 0, VAR_6;
    dim_list_t *VAR_7;

    for(VAR_7 = VAR_3->dims; VAR_7; VAR_7 = VAR_7->next)
        VAR_5++;

    VAR_4->bounds = FUNC_0(VAR_2->code, VAR_5 * sizeof(SAFEARRAYBOUND));
    if(!VAR_4->bounds)
        return VAR_0;

    VAR_4->dim_cnt = VAR_5;

    for(VAR_7 = VAR_3->dims, VAR_6=0; VAR_7; VAR_7 = VAR_7->next, VAR_6++) {
        VAR_4->bounds[VAR_6].cElements = VAR_7->val+1;
        VAR_4->bounds[VAR_6].lLbound = 0;
    }

    return VAR_1;
}
