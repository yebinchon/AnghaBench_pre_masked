
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int tdrefcount; } ;
struct TYPE_9__ {int relnatts; } ;
struct TYPE_8__ {TYPE_5__* rd_att; TYPE_2__* rd_rel; int * rd_smgr; } ;
typedef int RelationData ;
typedef TYPE_1__* Relation ;
typedef int MemoryContext ;
typedef TYPE_2__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static Relation
FUNC_5(Form_pg_class VAR_2)
{
 Relation VAR_3;
 MemoryContext VAR_4;
 Form_pg_class VAR_5;


 VAR_4 = FUNC_1(VAR_1);




 VAR_3 = (Relation) FUNC_4(sizeof(RelationData));


 VAR_3->rd_smgr = ((void*)0);
 VAR_5 = (Form_pg_class) FUNC_3(VAR_0);

 FUNC_2(VAR_5, VAR_2, VAR_0);


 VAR_3->rd_rel = VAR_5;


 VAR_3->rd_att = FUNC_0(VAR_5->relnatts);

 VAR_3->rd_att->tdrefcount = 1;

 FUNC_1(VAR_4);

 return VAR_3;
}
