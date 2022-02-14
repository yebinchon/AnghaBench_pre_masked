
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int StringInfo ;
typedef int Relation ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(StringInfo VAR_1, Relation VAR_2)
{
 StringInfoData VAR_3;


 FUNC_4(&VAR_3);
 FUNC_2(&VAR_3, VAR_2);

 FUNC_1(VAR_1, "SELECT pg_catalog.pg_relation_size(");
 FUNC_3(VAR_1, VAR_3.data);
 FUNC_0(VAR_1, "::pg_catalog.regclass) / %d", VAR_0);
}
