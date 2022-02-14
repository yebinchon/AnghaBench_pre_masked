
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {void* lpRemoteName; int * lpProvider; int lpComment; int lpLocalName; } ;
typedef int NETRESOURCEW ;
typedef TYPE_1__* LPNETRESOURCEW ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static LPNETRESOURCEW FUNC_4(LPNETRESOURCEW VAR_0)
{
    LPNETRESOURCEW VAR_1;

    if (VAR_0)
    {
        VAR_1 = FUNC_1(FUNC_0(), 0, sizeof(NETRESOURCEW));
        if (VAR_1)
        {
            size_t VAR_2;

            *VAR_1 = *VAR_0;
            VAR_1->lpLocalName = VAR_1->lpComment = *(VAR_1->lpProvider = ((void*)0));
            if (VAR_0->lpRemoteName)
            {
                VAR_2 = FUNC_3(VAR_0->lpRemoteName) + 1;
                VAR_1->lpRemoteName = FUNC_1(FUNC_0(), 0, VAR_2 * sizeof(WCHAR));
                if (VAR_1->lpRemoteName)
                    FUNC_2(VAR_1->lpRemoteName, VAR_0->lpRemoteName);
            }
        }
    }
    else
        VAR_1 = ((void*)0);
    return VAR_1;
}
