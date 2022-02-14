
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* mapped_check; int * first; } ;
typedef int ITEM ;
typedef TYPE_1__ GinChkVal ;



__attribute__((used)) static bool
FUNC_0(void *VAR_0, ITEM *VAR_1)
{
 GinChkVal *VAR_2 = (GinChkVal *) VAR_0;

 return VAR_2->mapped_check[VAR_1 - VAR_2->first];
}
