
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
typedef int msg ;
typedef scalar_t__ int8 ;
struct TYPE_9__ {int cclist; } ;
struct TYPE_7__ {int hashValue; int dbId; scalar_t__ id; } ;
struct TYPE_8__ {TYPE_1__ cc; } ;
typedef TYPE_2__ SharedInvalidationMessage ;
typedef int Oid ;
typedef TYPE_3__ InvalidationListHeader ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_3(InvalidationListHeader *VAR_1,
          int VAR_2, uint32 VAR_3, Oid VAR_4)
{
 SharedInvalidationMessage VAR_5;

 FUNC_1(VAR_2 < VAR_0);
 VAR_5.cc.id = (int8) VAR_2;
 VAR_5.cc.dbId = VAR_4;
 VAR_5.cc.hashValue = VAR_3;
 FUNC_2(&VAR_5, sizeof(VAR_5));

 FUNC_0(&VAR_1->cclist, &VAR_5);
}
