
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ FullVersion; } ;
typedef TYPE_1__ VersionLieInfo ;
struct TYPE_6__ {scalar_t__ ReplacementFunction; } ;
typedef TYPE_2__* PHOOKAPI ;
typedef int PCSTR ;
typedef scalar_t__ (* GETVERSIONPROC ) () ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(PHOOKAPI VAR_0, const VersionLieInfo* VAR_1, PCSTR VAR_2, int VAR_3)
{
    DWORD VAR_4;
    if (!VAR_3)
    {
        FUNC_0("Skipping implementation tests for %s\n", VAR_2);
        return;
    }
    VAR_4 = ((GETVERSIONPROC)VAR_0->ReplacementFunction)();
    FUNC_2(VAR_1->FullVersion == VAR_4, "Expected GetVersion to return 0x%x, was: 0x%x for %s\n", VAR_1->FullVersion, VAR_4, VAR_2);
}
