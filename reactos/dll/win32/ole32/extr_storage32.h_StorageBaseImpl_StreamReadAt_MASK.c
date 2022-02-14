
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
typedef int ULARGE_INTEGER ;
struct TYPE_6__ {TYPE_1__* baseVtbl; } ;
struct TYPE_5__ {int (* StreamReadAt ) (TYPE_2__*,int ,int ,int ,void*,int *) ;} ;
typedef TYPE_2__ StorageBaseImpl ;
typedef int HRESULT ;
typedef int DirRef ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ,void*,int *) ;

__attribute__((used)) static inline HRESULT FUNC_1(StorageBaseImpl *VAR_0,
  DirRef VAR_1, ULARGE_INTEGER VAR_2, ULONG VAR_3, void *VAR_4, ULONG *VAR_5)
{
  return VAR_0->baseVtbl->StreamReadAt(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
