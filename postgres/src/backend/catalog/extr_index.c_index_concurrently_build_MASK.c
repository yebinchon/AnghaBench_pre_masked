
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ii_Concurrent; int ii_BrokenHotChain; int ii_ReadyForInserts; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ IndexInfo ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,TYPE_1__*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_4,
       Oid VAR_5)
{
 Relation VAR_6;
 Relation VAR_7;
 IndexInfo *VAR_8;


 FUNC_1(FUNC_0());


 VAR_6 = FUNC_8(VAR_4, VAR_3);


 VAR_7 = FUNC_5(VAR_5, VAR_2);






 VAR_8 = FUNC_2(VAR_7);
 FUNC_1(!VAR_8->ii_ReadyForInserts);
 VAR_8->ii_Concurrent = 1;
 VAR_8->ii_BrokenHotChain = 0;


 FUNC_3(VAR_6, VAR_7, VAR_8, 0, 1);


 FUNC_7(VAR_6, VAR_1);
 FUNC_4(VAR_7, VAR_1);






 FUNC_6(VAR_5, VAR_0);
}
