
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int objectId; int classId; } ;
struct TYPE_5__ {scalar_t__ attnum_namespace; int oid_catcache_id; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectPropertyType ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,scalar_t__,int*) ;
 int FUNC_7 (int ,char*,int,int ) ;
 TYPE_1__* FUNC_8 (int ) ;

Oid
FUNC_9(const ObjectAddress *VAR_3)
{
 int VAR_4;
 HeapTuple VAR_5;
 bool VAR_6;
 Oid VAR_7;
 const ObjectPropertyType *VAR_8;


 VAR_8 = FUNC_8(VAR_3->classId);
 if (VAR_8->attnum_namespace == VAR_1)
  return VAR_2;


 VAR_4 = VAR_8->oid_catcache_id;
 FUNC_0(VAR_4 != -1);


 VAR_5 = FUNC_5(VAR_4, FUNC_3(VAR_3->objectId));
 if (!FUNC_2(VAR_5))
  FUNC_7(VAR_0, "cache lookup failed for cache %d oid %u",
    VAR_4, VAR_3->objectId);
 VAR_7 = FUNC_1(FUNC_6(VAR_4,
             VAR_5,
             VAR_8->attnum_namespace,
             &VAR_6));
 FUNC_0(!VAR_6);
 FUNC_4(VAR_5);

 return VAR_7;
}
