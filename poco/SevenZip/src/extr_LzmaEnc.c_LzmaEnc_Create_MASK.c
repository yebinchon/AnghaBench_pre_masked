
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* Alloc ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef void* CLzmaEncHandle ;
typedef int CLzmaEnc ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (TYPE_1__*,int) ;

CLzmaEncHandle FUNC_2(ISzAlloc *VAR_0)
{
  void *VAR_1;
  VAR_1 = VAR_0->Alloc(VAR_0, sizeof(CLzmaEnc));
  if (VAR_1 != 0)
    FUNC_0((CLzmaEnc *)VAR_1);
  return VAR_1;
}
