
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * fn_extra; int fn_mcxt; } ;
typedef int MemoryContext ;
typedef TYPE_1__ FmgrInfo ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

void
FUNC_1(FmgrInfo *VAR_0, FmgrInfo *VAR_1,
      MemoryContext VAR_2)
{
 FUNC_0(VAR_0, VAR_1, sizeof(FmgrInfo));
 VAR_0->fn_mcxt = VAR_2;
 VAR_0->fn_extra = ((void*)0);
}
