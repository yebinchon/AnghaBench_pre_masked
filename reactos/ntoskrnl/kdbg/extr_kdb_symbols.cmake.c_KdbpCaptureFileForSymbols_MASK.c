
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {int FileObject; TYPE_1__ FileOffset; } ;
typedef TYPE_2__* PROSSYM_KM_OWN_CONTEXT ;
typedef int PFILE_OBJECT ;


 TYPE_2__* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static PROSSYM_KM_OWN_CONTEXT
FUNC_2(PFILE_OBJECT VAR_1)
{
    PROSSYM_KM_OWN_CONTEXT VAR_2 = FUNC_0(VAR_0, sizeof(*VAR_2));
    if (!VAR_2) return ((void*)0);
    FUNC_1(VAR_1);
    VAR_2->FileOffset.QuadPart = 0;
    VAR_2->FileObject = VAR_1;
    return VAR_2;
}
