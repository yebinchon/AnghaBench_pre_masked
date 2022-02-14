
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxrefs; int numrefs; int * extras; int * refs; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef int ObjectAddressExtra ;
typedef int ObjectAddress ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(const ObjectAddress *VAR_0,
          const ObjectAddressExtra *VAR_1,
          ObjectAddresses *VAR_2)
{
 ObjectAddress *VAR_3;
 ObjectAddressExtra *VAR_4;


 if (!VAR_2->extras)
  VAR_2->extras = (ObjectAddressExtra *)
   FUNC_0(VAR_2->maxrefs * sizeof(ObjectAddressExtra));


 if (VAR_2->numrefs >= VAR_2->maxrefs)
 {
  VAR_2->maxrefs *= 2;
  VAR_2->refs = (ObjectAddress *)
   FUNC_1(VAR_2->refs, VAR_2->maxrefs * sizeof(ObjectAddress));
  VAR_2->extras = (ObjectAddressExtra *)
   FUNC_1(VAR_2->extras, VAR_2->maxrefs * sizeof(ObjectAddressExtra));
 }

 VAR_3 = VAR_2->refs + VAR_2->numrefs;
 *VAR_3 = *VAR_0;
 VAR_4 = VAR_2->extras + VAR_2->numrefs;
 *VAR_4 = *VAR_1;
 VAR_2->numrefs++;
}
