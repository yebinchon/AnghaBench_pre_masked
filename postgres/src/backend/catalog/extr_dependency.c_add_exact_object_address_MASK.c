
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numrefs; int maxrefs; int * refs; int extras; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef int ObjectAddress ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;

void
FUNC_2(const ObjectAddress *VAR_0,
       ObjectAddresses *VAR_1)
{
 ObjectAddress *VAR_2;


 if (VAR_1->numrefs >= VAR_1->maxrefs)
 {
  VAR_1->maxrefs *= 2;
  VAR_1->refs = (ObjectAddress *)
   FUNC_1(VAR_1->refs, VAR_1->maxrefs * sizeof(ObjectAddress));
  FUNC_0(!VAR_1->extras);
 }

 VAR_2 = VAR_1->refs + VAR_1->numrefs;
 *VAR_2 = *VAR_0;
 VAR_1->numrefs++;
}
