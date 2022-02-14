
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ authAttrHash; scalar_t__ contentHash; } ;
struct TYPE_4__ {size_t cSignerHandle; TYPE_2__* signerHandles; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CSignedMsgData ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(CSignedMsgData *VAR_0)
{
    DWORD VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->cSignerHandle; VAR_1++)
    {
        if (VAR_0->signerHandles[VAR_1].contentHash)
            FUNC_0(VAR_0->signerHandles[VAR_1].contentHash);
        if (VAR_0->signerHandles[VAR_1].authAttrHash)
            FUNC_0(VAR_0->signerHandles[VAR_1].authAttrHash);
    }
    FUNC_1(VAR_0->signerHandles);
    VAR_0->signerHandles = ((void*)0);
    VAR_0->cSignerHandle = 0;
}
