
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {int QuadPart; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_8__ {TYPE_1__* parentStorage; } ;
struct TYPE_6__ {int smallBlockDepotChain; } ;
typedef TYPE_3__ SmallBlockChainStream ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ,TYPE_2__,int,int *,scalar_t__*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(
  SmallBlockChainStream* VAR_0,
  ULONG VAR_1,
  ULONG VAR_2)
{
  ULARGE_INTEGER VAR_3;
  DWORD VAR_4;
  ULONG VAR_5;

  VAR_3.QuadPart = (ULONGLONG)VAR_1 * sizeof(ULONG);

  FUNC_1((BYTE *)&VAR_4, 0, VAR_2);




  FUNC_0(
    VAR_0->parentStorage->smallBlockDepotChain,
    VAR_3,
    sizeof(DWORD),
    &VAR_4,
    &VAR_5);
}
