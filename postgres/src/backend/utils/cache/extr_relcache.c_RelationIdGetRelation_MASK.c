
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ rd_isnailed; scalar_t__ rd_isvalid; TYPE_1__* rd_rel; } ;
struct TYPE_10__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;

Relation
FUNC_8(Oid VAR_3)
{
 Relation VAR_4;


 FUNC_0(FUNC_1());




 FUNC_4(VAR_3, VAR_4);

 if (FUNC_6(VAR_4))
 {
  FUNC_5(VAR_4);

  if (!VAR_4->rd_isvalid)
  {





   if (VAR_4->rd_rel->relkind == VAR_0 ||
    VAR_4->rd_rel->relkind == VAR_1)
    FUNC_7(VAR_4);
   else
    FUNC_3(VAR_4, 1);
   FUNC_0(VAR_4->rd_isvalid ||
       (VAR_4->rd_isnailed && !VAR_2));
  }
  return VAR_4;
 }





 VAR_4 = FUNC_2(VAR_3, 1);
 if (FUNC_6(VAR_4))
  FUNC_5(VAR_4);
 return VAR_4;
}
