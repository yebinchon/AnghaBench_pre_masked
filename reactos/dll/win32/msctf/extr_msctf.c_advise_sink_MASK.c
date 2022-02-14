
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_6__ {int pIUnknown; } ;
struct TYPE_7__ {int entry; TYPE_1__ interfaces; } ;
typedef TYPE_2__ Sink ;
typedef int REFIID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int ,void**) ;
 int VAR_2 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (struct list*,int *) ;

HRESULT FUNC_8(struct list *VAR_3, REFIID VAR_4, DWORD VAR_5, IUnknown *VAR_6, DWORD *VAR_7)
{
    Sink *VAR_8;

    VAR_8 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_1;

    if (FUNC_0(FUNC_4(VAR_6, VAR_4, (void**)&VAR_8->interfaces.pIUnknown)))
    {
        FUNC_3(FUNC_1(), 0, VAR_8);
        return VAR_0;
    }

    FUNC_7(VAR_3, &VAR_8->entry);
    *VAR_7 = FUNC_6(VAR_5, VAR_8);
    FUNC_5("cookie %x\n", *VAR_7);
    return VAR_2;
}
