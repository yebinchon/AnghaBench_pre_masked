
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Installed; scalar_t__ num_clients; scalar_t__ ActionRequest; int Component; int Enabled; } ;
struct TYPE_5__ {scalar_t__ need_rollback; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSICOMPONENT ;
typedef scalar_t__ INSTALLSTATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;

INSTALLSTATE FUNC_2( MSIPACKAGE *VAR_2, MSICOMPONENT *VAR_3 )
{
    if (!VAR_3->Enabled)
    {
        FUNC_0("component is disabled: %s\n", FUNC_1(VAR_3->Component));
        return VAR_1;
    }
    if (VAR_2->need_rollback) return VAR_3->Installed;
    if (VAR_3->num_clients > 0 && VAR_3->ActionRequest == VAR_0)
    {
        FUNC_0("%s has %u clients left\n", FUNC_1(VAR_3->Component), VAR_3->num_clients);
        return VAR_1;
    }
    return VAR_3->ActionRequest;
}
