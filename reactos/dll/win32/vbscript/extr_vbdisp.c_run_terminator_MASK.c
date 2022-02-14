
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int terminator_ran; int ref; TYPE_2__* desc; } ;
typedef TYPE_3__ vbdisp_t ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_9__ {size_t class_terminate_id; TYPE_1__* funcs; int ctx; } ;
struct TYPE_8__ {int * entries; } ;
typedef TYPE_4__ DISPPARAMS ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_3__*,TYPE_4__*,int *) ;

__attribute__((used)) static BOOL FUNC_1(vbdisp_t *VAR_2)
{
    DISPPARAMS VAR_3 = {0};

    if(VAR_2->terminator_ran)
        return VAR_0;
    VAR_2->terminator_ran = VAR_0;

    if(!VAR_2->desc->class_terminate_id)
        return VAR_0;

    VAR_2->ref++;
    FUNC_0(VAR_2->desc->ctx, VAR_2->desc->funcs[VAR_2->desc->class_terminate_id].entries[VAR_1],
            VAR_2, &VAR_3, ((void*)0));
    return !--VAR_2->ref;
}
