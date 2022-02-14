
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* scratch; } ;
typedef TYPE_2__ TransactedSharedImpl ;
struct TYPE_3__ {int base; } ;
typedef int StorageBaseImpl ;
typedef int HRESULT ;
typedef int DirRef ;
typedef int DirEntry ;


 int FUNC_0 (int *,int ,int const*) ;

__attribute__((used)) static HRESULT FUNC_1(StorageBaseImpl *VAR_0,
  DirRef VAR_1, const DirEntry *VAR_2)
{
  TransactedSharedImpl* VAR_3 = (TransactedSharedImpl*) VAR_0;

  return FUNC_0(&VAR_3->scratch->base,
    VAR_1, VAR_2);
}
