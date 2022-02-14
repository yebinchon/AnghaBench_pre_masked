
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int natts; } ;
struct TYPE_6__ {int attcollation; } ;
struct TYPE_5__ {TYPE_4__* rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,char*,int) ;

Oid
FUNC_2(Relation VAR_2, int VAR_3)
{
 if (VAR_3 <= 0)
 {

  return VAR_1;
 }
 if (VAR_3 > VAR_2->rd_att->natts)
  FUNC_1(VAR_0, "invalid attribute number %d", VAR_3);
 return FUNC_0(VAR_2->rd_att, VAR_3 - 1)->attcollation;
}
