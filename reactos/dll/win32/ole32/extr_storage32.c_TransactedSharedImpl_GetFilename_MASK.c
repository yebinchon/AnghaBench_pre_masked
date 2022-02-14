
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transactedParent; } ;
typedef TYPE_1__ TransactedSharedImpl ;
typedef int StorageBaseImpl ;
typedef int LPWSTR ;
typedef int HRESULT ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static HRESULT FUNC_1(StorageBaseImpl* VAR_0, LPWSTR *VAR_1)
{
  TransactedSharedImpl* VAR_2 = (TransactedSharedImpl*) VAR_0;

  return FUNC_0(VAR_2->transactedParent, VAR_1);
}
