
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deleted_pre_trunc; int tuples_deleted; int updated_pre_trunc; int tuples_updated; int inserted_pre_trunc; int tuples_inserted; scalar_t__ truncated; } ;
typedef TYPE_1__ PgStat_TableXactStatus ;



__attribute__((used)) static void
FUNC_0(PgStat_TableXactStatus *VAR_0)
{
 if (VAR_0->truncated)
 {
  VAR_0->tuples_inserted = VAR_0->inserted_pre_trunc;
  VAR_0->tuples_updated = VAR_0->updated_pre_trunc;
  VAR_0->tuples_deleted = VAR_0->deleted_pre_trunc;
 }
}
