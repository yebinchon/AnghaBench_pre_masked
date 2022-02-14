
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* baseVtbl; } ;
struct TYPE_5__ {int (* UnlockTransaction ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ StorageBaseImpl ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static inline HRESULT FUNC_1(StorageBaseImpl *VAR_0, BOOL VAR_1)
{
  return VAR_0->baseVtbl->UnlockTransaction(VAR_0, VAR_1);
}
