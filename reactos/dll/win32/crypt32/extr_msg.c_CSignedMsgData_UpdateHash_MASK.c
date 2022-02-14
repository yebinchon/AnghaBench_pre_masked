
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cSignerHandle; TYPE_1__* signerHandles; } ;
struct TYPE_4__ {int contentHash; } ;
typedef size_t DWORD ;
typedef TYPE_2__ CSignedMsgData ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int const*,size_t,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static BOOL FUNC_1(CSignedMsgData *VAR_1,
 const BYTE *VAR_2, DWORD VAR_3)
{
    DWORD VAR_4;
    BOOL VAR_5 = VAR_0;

    for (VAR_4 = 0; VAR_5 && VAR_4 < VAR_1->cSignerHandle; VAR_4++)
        VAR_5 = FUNC_0(VAR_1->signerHandles[VAR_4].contentHash, VAR_2,
         VAR_3, 0);
    return VAR_5;
}
