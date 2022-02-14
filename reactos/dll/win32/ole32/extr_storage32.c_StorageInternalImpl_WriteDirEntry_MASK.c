
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parentStorage; } ;
typedef TYPE_1__ StorageInternalImpl ;
typedef int StorageBaseImpl ;
typedef int HRESULT ;
typedef int DirRef ;
typedef int DirEntry ;


 int FUNC_0 (int ,int ,int const*) ;

__attribute__((used)) static HRESULT FUNC_1(StorageBaseImpl *VAR_0,
  DirRef VAR_1, const DirEntry *VAR_2)
{
  StorageInternalImpl* VAR_3 = (StorageInternalImpl*) VAR_0;

  return FUNC_0(VAR_3->parentStorage,
    VAR_1, VAR_2);
}
