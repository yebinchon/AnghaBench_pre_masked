
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* Free ) (TYPE_1__*,void*) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef int CLzma2Dec ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, ISzAlloc *VAR_1)
{
  FUNC_0((CLzma2Dec *)VAR_0, VAR_1);
  VAR_1->Free(VAR_1, VAR_0);
}
