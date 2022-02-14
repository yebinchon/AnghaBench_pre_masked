
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* baseVtbl; } ;
struct TYPE_5__ {int (* CreateDirEntry ) (TYPE_2__*,int const*,int *) ;} ;
typedef TYPE_2__ StorageBaseImpl ;
typedef int HRESULT ;
typedef int DirRef ;
typedef int DirEntry ;


 int FUNC_0 (TYPE_2__*,int const*,int *) ;

__attribute__((used)) static inline HRESULT FUNC_1(StorageBaseImpl *VAR_0,
  const DirEntry *VAR_1, DirRef *VAR_2)
{
  return VAR_0->baseVtbl->CreateDirEntry(VAR_0, VAR_1, VAR_2);
}
