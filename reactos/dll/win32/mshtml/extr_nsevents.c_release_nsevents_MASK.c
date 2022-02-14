
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * doc; int load_listener; int keypress_listener; int focus_listener; int blur_listener; } ;
typedef TYPE_1__ nsDocumentEventListener ;
struct TYPE_9__ {TYPE_1__* nsevent_listener; } ;
typedef TYPE_2__ HTMLDocumentNode ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(HTMLDocumentNode *VAR_6)
{
    nsDocumentEventListener *VAR_7 = VAR_6->nsevent_listener;

    FUNC_0("%p %p\n", VAR_6, VAR_6->nsevent_listener);

    if(!VAR_7)
        return;

    FUNC_1(VAR_6, VAR_2, &VAR_7->blur_listener, VAR_1);
    FUNC_1(VAR_6, VAR_3, &VAR_7->focus_listener, VAR_1);
    FUNC_1(VAR_6, VAR_4, &VAR_7->keypress_listener, VAR_0);
    FUNC_1(VAR_6, VAR_5, &VAR_7->load_listener, VAR_1);

    VAR_7->doc = ((void*)0);
    FUNC_2(VAR_7);
    VAR_6->nsevent_listener = ((void*)0);
}
