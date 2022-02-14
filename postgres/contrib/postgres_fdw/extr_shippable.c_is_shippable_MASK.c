
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ shippable_extensions; TYPE_1__* server; } ;
struct TYPE_9__ {int shippable; } ;
struct TYPE_8__ {int serverid; void* classid; void* objid; } ;
struct TYPE_7__ {int serverid; } ;
typedef TYPE_2__ ShippableCacheKey ;
typedef TYPE_3__ ShippableCacheEntry ;
typedef TYPE_4__ PgFdwRelationInfo ;
typedef void* Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,void*,int ,int *) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*,void*,TYPE_4__*) ;

bool
FUNC_4(Oid VAR_4, Oid VAR_5, PgFdwRelationInfo *VAR_6)
{
 ShippableCacheKey VAR_7;
 ShippableCacheEntry *VAR_8;


 if (FUNC_2(VAR_4))
  return 1;


 if (VAR_6->shippable_extensions == VAR_2)
  return 0;


 if (!VAR_3)
  FUNC_0();


 VAR_7.objid = VAR_4;
 VAR_7.classid = VAR_5;
 VAR_7.serverid = VAR_6->server->serverid;


 VAR_8 = (ShippableCacheEntry *)
  FUNC_1(VAR_3,
     (void *) &VAR_7,
     VAR_1,
     ((void*)0));

 if (!VAR_8)
 {

  bool VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6);






  VAR_8 = (ShippableCacheEntry *)
   FUNC_1(VAR_3,
      (void *) &VAR_7,
      VAR_0,
      ((void*)0));

  VAR_8->shippable = VAR_9;
 }

 return VAR_8->shippable;
}
