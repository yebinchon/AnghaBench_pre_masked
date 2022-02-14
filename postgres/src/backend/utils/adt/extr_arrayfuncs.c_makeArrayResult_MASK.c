
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nelems; int private_cxt; } ;
typedef int MemoryContext ;
typedef int Datum ;
typedef TYPE_1__ ArrayBuildState ;


 int FUNC_0 (TYPE_1__*,int,int*,int*,int ,int ) ;

Datum
FUNC_1(ArrayBuildState *VAR_0,
    MemoryContext VAR_1)
{
 int VAR_2;
 int VAR_3[1];
 int VAR_4[1];


 VAR_2 = (VAR_0->nelems > 0) ? 1 : 0;
 VAR_3[0] = VAR_0->nelems;
 VAR_4[0] = 1;

 return FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_1,
        VAR_0->private_cxt);
}
