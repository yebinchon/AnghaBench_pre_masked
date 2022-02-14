
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_3__ {int QuadPart; } ;
struct TYPE_4__ {TYPE_1__ FileOffset; } ;
typedef int PVOID ;
typedef TYPE_2__* PROSSYM_KM_OWN_CONTEXT ;
typedef int BOOLEAN ;


 int VAR_0 ;

__attribute__((used)) static BOOLEAN
FUNC_0(PVOID VAR_1, ULONG_PTR VAR_2)
{
    PROSSYM_KM_OWN_CONTEXT VAR_3 = (PROSSYM_KM_OWN_CONTEXT)VAR_1;
    VAR_3->FileOffset.QuadPart = VAR_2;
    return VAR_0;
}
