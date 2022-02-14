
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; } ;
typedef int Size ;
typedef TYPE_1__ ReorderBuffer ;
typedef int Oid ;


 scalar_t__ FUNC_0 (int ,int) ;

Oid *
FUNC_1(ReorderBuffer *VAR_0, int VAR_1)
{
 Oid *VAR_2;
 Size VAR_3;

 VAR_3 = sizeof(Oid) * VAR_1;

 VAR_2 = (Oid *) FUNC_0(VAR_0->context, VAR_3);

 return VAR_2;
}
