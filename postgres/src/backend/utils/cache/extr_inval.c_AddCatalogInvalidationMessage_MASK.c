
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int msg ;
struct TYPE_9__ {int cclist; } ;
struct TYPE_7__ {void* catId; void* dbId; int id; } ;
struct TYPE_8__ {TYPE_1__ cat; } ;
typedef TYPE_2__ SharedInvalidationMessage ;
typedef void* Oid ;
typedef TYPE_3__ InvalidationListHeader ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2(InvalidationListHeader *VAR_1,
         Oid VAR_2, Oid VAR_3)
{
 SharedInvalidationMessage VAR_4;

 VAR_4.cat.id = VAR_0;
 VAR_4.cat.dbId = VAR_2;
 VAR_4.cat.catId = VAR_3;

 FUNC_1(&VAR_4, sizeof(VAR_4));

 FUNC_0(&VAR_1->cclist, &VAR_4);
}
