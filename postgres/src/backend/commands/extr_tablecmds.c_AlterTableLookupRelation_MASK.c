
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ missing_ok; int relation; } ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef TYPE_1__ AlterTableStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,void*) ;

Oid
FUNC_1(AlterTableStmt *VAR_2, LOCKMODE VAR_3)
{
 return FUNC_0(VAR_2->relation, VAR_3,
         VAR_2->missing_ok ? VAR_0 : 0,
         VAR_1,
         (void *) VAR_2);
}
