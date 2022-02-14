
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int natts; } ;
struct TYPE_9__ {int const attname; } ;
struct TYPE_8__ {int const attname; } ;
struct TYPE_7__ {TYPE_5__* rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int NameData ;
typedef TYPE_2__ FormData_pg_attribute ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (int ,char*,int) ;

const NameData *
FUNC_3(Relation VAR_1, int VAR_2)
{
 if (VAR_2 <= 0)
 {
  const FormData_pg_attribute *VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  return &VAR_3->attname;
 }
 if (VAR_2 > VAR_1->rd_att->natts)
  FUNC_2(VAR_0, "invalid attribute number %d", VAR_2);
 return &FUNC_1(VAR_1->rd_att, VAR_2 - 1)->attname;
}
