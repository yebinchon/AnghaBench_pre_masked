
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxrefs; int * extras; int * refs; scalar_t__ numrefs; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef int ObjectAddress ;


 TYPE_1__* FUNC_0 (int) ;

ObjectAddresses *
FUNC_1(void)
{
 ObjectAddresses *VAR_0;

 VAR_0 = FUNC_0(sizeof(ObjectAddresses));

 VAR_0->numrefs = 0;
 VAR_0->maxrefs = 32;
 VAR_0->refs = (ObjectAddress *)
  FUNC_0(VAR_0->maxrefs * sizeof(ObjectAddress));
 VAR_0->extras = ((void*)0);

 return VAR_0;
}
