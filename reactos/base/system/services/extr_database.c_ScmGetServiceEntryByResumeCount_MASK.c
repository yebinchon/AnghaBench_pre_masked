
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {scalar_t__ dwResumeCount; int lpDisplayName; } ;
typedef TYPE_1__* PSERVICE ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef scalar_t__ DWORD ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

PSERVICE
FUNC_2(DWORD VAR_3)
{
    PLIST_ENTRY VAR_4;
    PSERVICE VAR_5;

    FUNC_1("ScmGetServiceEntryByResumeCount() called\n");

    VAR_4 = VAR_2.Flink;
    while (VAR_4 != &VAR_2)
    {
        VAR_5 = FUNC_0(VAR_4,
                                           VAR_0,
                                           VAR_1);
        if (VAR_5->dwResumeCount > VAR_3)
        {
            FUNC_1("Found service: '%S'\n", VAR_5->lpDisplayName);
            return VAR_5;
        }

        VAR_4 = VAR_4->Flink;
    }

    FUNC_1("Couldn't find a matching service\n");

    return ((void*)0);
}
