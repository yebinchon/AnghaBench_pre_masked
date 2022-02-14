
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int eventid_t ;
struct TYPE_6__ {int nsnode; int doc; TYPE_1__* vtbl; } ;
struct TYPE_5__ {int (* fire_event ) (TYPE_2__*,int ,scalar_t__*) ;} ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__*) ;

HRESULT FUNC_2(HTMLDOMNode *VAR_3, eventid_t VAR_4)
{
    HRESULT VAR_5;

    if(VAR_3->vtbl->fire_event) {
        BOOL VAR_6 = VAR_0;

        VAR_5 = VAR_3->vtbl->fire_event(VAR_3, VAR_4, &VAR_6);
        if(VAR_6)
            return VAR_5;
    }

    FUNC_0(VAR_3->doc, VAR_4, VAR_2, VAR_3->nsnode, ((void*)0), ((void*)0));
    return VAR_1;
}
