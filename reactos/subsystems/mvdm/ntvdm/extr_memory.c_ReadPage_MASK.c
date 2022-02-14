
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {int (* FastReadHandler ) (int ,int ,int ) ;int hVdd; } ;
typedef int PVOID ;
typedef TYPE_1__* PMEM_HOOK ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline VOID
FUNC_3(PMEM_HOOK VAR_0, ULONG VAR_1, PVOID VAR_2, ULONG VAR_3)
{
    if (VAR_0 && !VAR_0->hVdd && VAR_0->FastReadHandler)
    {
        VAR_0->FastReadHandler(VAR_1, FUNC_1(VAR_1), VAR_3);
    }

    FUNC_0(VAR_2, FUNC_1(VAR_1), VAR_3);
}
