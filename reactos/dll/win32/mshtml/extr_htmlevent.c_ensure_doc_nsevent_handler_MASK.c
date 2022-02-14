
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsIDOMNode ;
typedef size_t eventid_t ;
struct TYPE_8__ {int flags; int name; } ;
struct TYPE_6__ {int * nsnode; } ;
struct TYPE_7__ {scalar_t__* event_vector; TYPE_1__ node; int nsdoc; } ;
typedef TYPE_2__ HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

HRESULT FUNC_5(HTMLDocumentNode *VAR_5, eventid_t VAR_6)
{
    nsIDOMNode *VAR_7 = ((void*)0);

    FUNC_0("%s\n", FUNC_2(VAR_4[VAR_6].name));

    if(!VAR_5->nsdoc || VAR_5->event_vector[VAR_6] || !(VAR_4[VAR_6].flags & (VAR_1|VAR_0)))
        return VAR_2;

    if(VAR_4[VAR_6].flags & VAR_0) {
        VAR_7 = VAR_5->node.nsnode;
        FUNC_3(VAR_7);
    }

    VAR_5->event_vector[VAR_6] = VAR_3;
    FUNC_1(VAR_5, VAR_7, VAR_4[VAR_6].name);

    if(VAR_7)
        FUNC_4(VAR_7);
    return VAR_2;
}
