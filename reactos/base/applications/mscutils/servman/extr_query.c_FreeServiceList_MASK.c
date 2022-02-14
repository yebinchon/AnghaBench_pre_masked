
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {struct TYPE_5__* lpDisplayName; struct TYPE_5__* lpServiceName; } ;
struct TYPE_4__ {size_t NumServices; TYPE_2__* pAllServices; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef size_t DWORD ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;

VOID
FUNC_1(PMAIN_WND_INFO VAR_1)
{
    DWORD VAR_2;

    if (VAR_1->pAllServices != ((void*)0))
    {
        for (VAR_2 = 0; VAR_2 < VAR_1->NumServices; VAR_2++)
        {
            if (VAR_1->pAllServices[VAR_2].lpServiceName)
                FUNC_0(VAR_0, 0, VAR_1->pAllServices[VAR_2].lpServiceName);

            if (VAR_1->pAllServices[VAR_2].lpDisplayName)
                FUNC_0(VAR_0, 0, VAR_1->pAllServices[VAR_2].lpDisplayName);
        }

        FUNC_0(VAR_0, 0, VAR_1->pAllServices);
        VAR_1->pAllServices = ((void*)0);
        VAR_1->NumServices = 0;
    }
}
