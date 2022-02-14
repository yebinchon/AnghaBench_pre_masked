
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int msg ;
struct TYPE_5__ {int dbId; int id; } ;
struct TYPE_6__ {TYPE_1__ rm; } ;
typedef TYPE_2__ SharedInvalidationMessage ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

void
FUNC_2(Oid VAR_1)
{
 SharedInvalidationMessage VAR_2;

 VAR_2.rm.id = VAR_0;
 VAR_2.rm.dbId = VAR_1;

 FUNC_1(&VAR_2, sizeof(VAR_2));

 FUNC_0(&VAR_2, 1);
}
