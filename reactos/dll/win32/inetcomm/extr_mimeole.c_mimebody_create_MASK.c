
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cbBodyEnd; scalar_t__ cbBodyStart; scalar_t__ cbHeaderStart; scalar_t__ cbBoundaryStart; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; int data_iid; int * data; int encoding; int * content_sub_type; int * content_pri_type; int next_prop_id; int new_props; int headers; int * handle; TYPE_1__ IMimeBody_iface; } ;
typedef TYPE_2__ MimeBody ;
typedef TYPE_3__ BODYOFFSETS ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static MimeBody *FUNC_4(void)
{
    MimeBody *VAR_4;
    BODYOFFSETS VAR_5;

    VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_4));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->IMimeBody_iface.lpVtbl = &VAR_3;
    VAR_4->ref = 1;
    VAR_4->handle = ((void*)0);
    FUNC_3(&VAR_4->headers);
    FUNC_3(&VAR_4->new_props);
    VAR_4->next_prop_id = VAR_0;
    VAR_4->content_pri_type = ((void*)0);
    VAR_4->content_sub_type = ((void*)0);
    VAR_4->encoding = VAR_1;
    VAR_4->data = ((void*)0);
    VAR_4->data_iid = VAR_2;

    VAR_5.cbBoundaryStart = VAR_5.cbHeaderStart = 0;
    VAR_5.cbBodyStart = VAR_5.cbBodyEnd = 0;
    FUNC_2(VAR_4, &VAR_5);

    return VAR_4;
}
