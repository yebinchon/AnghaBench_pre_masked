
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stub_manager {TYPE_1__* apt; } ;
typedef void* USHORT ;
struct TYPE_7__ {void* Data3; void* Data2; int Data1; } ;
struct TYPE_6__ {scalar_t__ tid; int ipidc; } ;
typedef TYPE_2__ IPID ;
typedef int HRESULT ;


 int FUNC_0 (char*,struct stub_manager*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static inline HRESULT FUNC_6(struct stub_manager *VAR_1, IPID *VAR_2)
{
    HRESULT VAR_3;
    VAR_3 = FUNC_4(VAR_2);
    if (FUNC_1(VAR_3))
    {
        FUNC_0("couldn't create IPID for stub manager %p\n", VAR_1);
        FUNC_5(VAR_2);
        return VAR_3;
    }

    VAR_2->Data1 = FUNC_3(&VAR_1->apt->ipidc);
    VAR_2->Data2 = (USHORT)VAR_1->apt->tid;
    VAR_2->Data3 = (USHORT)FUNC_2();
    return VAR_0;
}
