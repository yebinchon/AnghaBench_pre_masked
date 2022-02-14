
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t handles_size; scalar_t__* handles; } ;
typedef int PHYSDEV ;
typedef scalar_t__ HGDIOBJ ;
typedef TYPE_1__ EMFDRV_PDEVICE ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static UINT FUNC_1( PHYSDEV VAR_0, HGDIOBJ VAR_1 )
{
    EMFDRV_PDEVICE *VAR_2 = FUNC_0( VAR_0 );
    UINT VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_2->handles_size; VAR_3++)
        if(VAR_2->handles[VAR_3] == VAR_1) break;

    if(VAR_3 == VAR_2->handles_size) return 0;

    return VAR_3 + 1;
}
