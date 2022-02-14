
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int path; int enabled; } ;
typedef TYPE_1__ VOID ;
typedef TYPE_1__ PnP_AudioDevice ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int) ;

VOID*
FUNC_4(WCHAR* VAR_0, BOOL VAR_1)
{
    PnP_AudioDevice* VAR_2;

    int VAR_3 = FUNC_0(VAR_0);
    int VAR_4 = sizeof(PnP_AudioDevice) + VAR_3;



    VAR_2 = FUNC_2(VAR_4);
    if (! VAR_2)
    {
        FUNC_1("Failed to create a device descriptor (malloc fail)\n");
        return ((void*)0);
    }

    VAR_2->enabled = VAR_1;
    FUNC_3(VAR_2->path, VAR_0, VAR_3);

    return VAR_2;
}
