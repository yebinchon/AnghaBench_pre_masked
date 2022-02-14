
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int refCount; TYPE_1__ IEnumTfDocumentMgrs_iface; struct list* head; int index; } ;
typedef TYPE_1__ IEnumTfDocumentMgrs ;
typedef int HRESULT ;
typedef TYPE_2__ EnumTfDocumentMgr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (struct list*) ;

__attribute__((used)) static HRESULT FUNC_4(struct list* VAR_4, IEnumTfDocumentMgrs **VAR_5)
{
    EnumTfDocumentMgr *VAR_6;

    VAR_6 = FUNC_1(FUNC_0(),VAR_2,sizeof(EnumTfDocumentMgr));
    if (VAR_6 == ((void*)0))
        return VAR_0;

    VAR_6->IEnumTfDocumentMgrs_iface.lpVtbl= &VAR_1;
    VAR_6->refCount = 1;
    VAR_6->head = VAR_4;
    VAR_6->index = FUNC_3(VAR_6->head);

    FUNC_2("returning %p\n", &VAR_6->IEnumTfDocumentMgrs_iface);
    *VAR_5 = &VAR_6->IEnumTfDocumentMgrs_iface;
    return VAR_3;
}
