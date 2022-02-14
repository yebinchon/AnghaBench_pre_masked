
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

Oid
FUNC_5(Oid VAR_3)
{
 Relation VAR_4;
 Oid VAR_5;

 VAR_4 = FUNC_4(VAR_2, VAR_0);

 VAR_5 = FUNC_2(VAR_4, VAR_3);

 if (!FUNC_0(VAR_5))
  FUNC_1(VAR_1, "could not find tuple for parent of relation %u", VAR_3);

 FUNC_3(VAR_4, VAR_0);

 return VAR_5;
}
