
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
typedef int ULARGE_INTEGER ;
struct TYPE_2__ {int parentStorage; } ;
typedef TYPE_1__ StorageInternalImpl ;
typedef int StorageBaseImpl ;
typedef int HRESULT ;
typedef int DirRef ;


 int FUNC_0 (int ,int ,int ,int ,void*,int *) ;

__attribute__((used)) static HRESULT FUNC_1(StorageBaseImpl *VAR_0,
  DirRef VAR_1, ULARGE_INTEGER VAR_2, ULONG VAR_3, void *VAR_4, ULONG *VAR_5)
{
  StorageInternalImpl* VAR_6 = (StorageInternalImpl*) VAR_0;

  return FUNC_0(VAR_6->parentStorage,
    VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
