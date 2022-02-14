
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int RequestContext; scalar_t__ RequestNotifyObject; } ;
struct TYPE_5__ {int AssociatedEndpoint; int Information; int Status; TYPE_1__ Request; } ;
typedef int PVOID ;
typedef TYPE_2__* PTDI_BUCKET ;
typedef int (* PTCP_COMPLETION_ROUTINE ) (int ,int ,int ) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static
VOID
FUNC_2(PVOID VAR_1)
{
    PTDI_BUCKET VAR_2 = (PTDI_BUCKET)VAR_1;
    PTCP_COMPLETION_ROUTINE VAR_3;

    VAR_3 = (PTCP_COMPLETION_ROUTINE)VAR_2->Request.RequestNotifyObject;

    VAR_3(VAR_2->Request.RequestContext, VAR_2->Status, VAR_2->Information);

    FUNC_0(VAR_2->AssociatedEndpoint);

    FUNC_1(&VAR_0, VAR_2);
}
