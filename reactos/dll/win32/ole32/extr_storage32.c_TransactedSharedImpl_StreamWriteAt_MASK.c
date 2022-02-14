
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
typedef int ULARGE_INTEGER ;
struct TYPE_4__ {TYPE_1__* scratch; } ;
typedef TYPE_2__ TransactedSharedImpl ;
struct TYPE_3__ {int base; } ;
typedef int StorageBaseImpl ;
typedef int HRESULT ;
typedef int DirRef ;


 int FUNC_0 (int *,int ,int ,int ,void const*,int *) ;

__attribute__((used)) static HRESULT FUNC_1(StorageBaseImpl *VAR_0,
  DirRef VAR_1, ULARGE_INTEGER VAR_2, ULONG VAR_3, const void *VAR_4, ULONG *VAR_5)
{
  TransactedSharedImpl* VAR_6 = (TransactedSharedImpl*) VAR_0;

  return FUNC_0(&VAR_6->scratch->base,
    VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
