
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int objectSubId; int objectId; int classId; } ;
struct TYPE_5__ {int numrefs; int maxrefs; TYPE_2__* refs; int extras; } ;
typedef int Oid ;
typedef size_t ObjectClass ;
typedef TYPE_1__ ObjectAddresses ;
typedef TYPE_2__ ObjectAddress ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(ObjectClass VAR_2, Oid VAR_3, int32 VAR_4,
       ObjectAddresses *VAR_5)
{
 ObjectAddress *VAR_6;




 FUNC_1(FUNC_2(VAR_1) == VAR_0 + 1,
      "object_classes[] must cover all ObjectClasses");


 if (VAR_5->numrefs >= VAR_5->maxrefs)
 {
  VAR_5->maxrefs *= 2;
  VAR_5->refs = (ObjectAddress *)
   FUNC_3(VAR_5->refs, VAR_5->maxrefs * sizeof(ObjectAddress));
  FUNC_0(!VAR_5->extras);
 }

 VAR_6 = VAR_5->refs + VAR_5->numrefs;
 VAR_6->classId = VAR_1[VAR_2];
 VAR_6->objectId = VAR_3;
 VAR_6->objectSubId = VAR_4;
 VAR_5->numrefs++;
}
