
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ActionRequest; int Installed; } ;
struct TYPE_5__ {scalar_t__ need_rollback; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFEATURE ;
typedef int INSTALLSTATE ;



INSTALLSTATE FUNC_0( MSIPACKAGE *VAR_0, MSIFEATURE *VAR_1 )
{
    if (VAR_0->need_rollback) return VAR_1->Installed;
    return VAR_1->ActionRequest;
}
