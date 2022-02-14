
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int rd_smgr; TYPE_1__* rd_rel; } ;
struct TYPE_8__ {int reltoastrelid; } ;
typedef TYPE_2__* Relation ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (int ,int ) ;

void
FUNC_6(Relation VAR_2)
{

 if (!FUNC_2(VAR_2))
  return;


 FUNC_0(VAR_2);

 FUNC_3(VAR_2->rd_smgr, VAR_1);




 if (FUNC_1(VAR_2->rd_rel->reltoastrelid))
 {
  Relation VAR_3;

  VAR_3 = FUNC_5(VAR_2->rd_rel->reltoastrelid, VAR_0);
  FUNC_0(VAR_3);
  FUNC_3(VAR_3->rd_smgr, VAR_1);
  FUNC_4(VAR_3, VAR_0);
 }
}
