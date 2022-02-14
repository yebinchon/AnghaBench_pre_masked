
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int entry; } ;
typedef TYPE_2__ body_t ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; int next_index; TYPE_1__ IMimeMessage_iface; int body_tree; int * stream; } ;
typedef TYPE_3__ MimeMessage ;
typedef int MimeBody ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int *,void**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 TYPE_2__* FUNC_7 (int *,int ,int *) ;

HRESULT FUNC_8(IUnknown *VAR_4, void **VAR_5)
{
    MimeMessage *VAR_6;
    MimeBody *VAR_7;
    body_t *VAR_8;

    FUNC_3("(%p, %p)\n", VAR_4, VAR_5);

    if (VAR_4)
    {
        FUNC_0("outer unknown not supported yet\n");
        return VAR_0;
    }

    *VAR_5 = ((void*)0);

    VAR_6 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_6));
    if (!VAR_6) return VAR_1;

    VAR_6->IMimeMessage_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;
    VAR_6->stream = ((void*)0);
    FUNC_5(&VAR_6->body_tree);
    VAR_6->next_index = 1;

    VAR_7 = FUNC_6();
    VAR_8 = FUNC_7(VAR_7, VAR_6->next_index++, ((void*)0));
    FUNC_4(&VAR_6->body_tree, &VAR_8->entry);

    *VAR_5 = &VAR_6->IMimeMessage_iface;
    return VAR_3;
}
