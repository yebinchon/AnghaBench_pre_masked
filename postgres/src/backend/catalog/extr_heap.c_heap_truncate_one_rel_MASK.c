
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {scalar_t__ relkind; int reltoastrelid; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(Relation VAR_3)
{
 Oid VAR_4;





 if (VAR_3->rd_rel->relkind == VAR_2)
  return;


 FUNC_4(VAR_3);


 FUNC_1(VAR_3);


 VAR_4 = VAR_3->rd_rel->reltoastrelid;
 if (FUNC_0(VAR_4))
 {
  Relation VAR_5 = FUNC_3(VAR_4, VAR_0);

  FUNC_4(VAR_5);
  FUNC_1(VAR_5);

  FUNC_2(VAR_5, VAR_1);
 }
}
