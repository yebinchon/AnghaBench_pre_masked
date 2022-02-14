
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_7__ {int QuadPart; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_8__ {TYPE_1__* parentStorage; } ;
struct TYPE_6__ {int smallBlockDepotChain; } ;
typedef TYPE_3__ SmallBlockChainStream ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__,int,int *,int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int*) ;

__attribute__((used)) static HRESULT FUNC_3(
  SmallBlockChainStream* VAR_3,
  ULONG VAR_4,
  ULONG* VAR_5)
{
  ULARGE_INTEGER VAR_6;
  DWORD VAR_7;
  ULONG VAR_8;
  HRESULT VAR_9;

  *VAR_5 = VAR_0;

  VAR_6.QuadPart = (ULONGLONG)VAR_4 * sizeof(ULONG);




  VAR_9 = FUNC_0(
              VAR_3->parentStorage->smallBlockDepotChain,
              VAR_6,
              sizeof(DWORD),
              &VAR_7,
              &VAR_8);

  if (FUNC_1(VAR_9) && VAR_8 != sizeof(DWORD))
    VAR_9 = VAR_1;

  if (FUNC_1(VAR_9))
  {
    FUNC_2((BYTE *)&VAR_7, 0, VAR_5);
    return VAR_2;
  }

  return VAR_9;
}
