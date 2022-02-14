
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {scalar_t__ dwImageRunCount; } ;
struct TYPE_6__ {struct TYPE_6__* lpServiceName; int ServiceListEntry; struct TYPE_6__* pSecurityDescriptor; TYPE_3__* lpImage; struct TYPE_6__* lpDisplayName; } ;
typedef TYPE_1__* PSERVICE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

VOID
FUNC_6(PSERVICE VAR_0)
{
    FUNC_0("Deleting Service %S\n", VAR_0->lpServiceName);


    if (VAR_0->lpDisplayName != ((void*)0) &&
        VAR_0->lpDisplayName != VAR_0->lpServiceName)
        FUNC_2(FUNC_1(), 0, VAR_0->lpDisplayName);


    if (VAR_0->lpImage)
    {
        VAR_0->lpImage->dwImageRunCount--;

        if (VAR_0->lpImage->dwImageRunCount == 0)
        {
            FUNC_4(VAR_0->lpImage);
            VAR_0->lpImage = ((void*)0);
        }
    }


    FUNC_5(VAR_0, ((void*)0));


    if (VAR_0->pSecurityDescriptor != ((void*)0))
        FUNC_2(FUNC_1(), 0, VAR_0->pSecurityDescriptor);


    FUNC_3(&VAR_0->ServiceListEntry);

    FUNC_0("Deleted Service %S\n", VAR_0->lpServiceName);


    FUNC_2(FUNC_1(), 0, VAR_0);

    FUNC_0("Done\n");
}
