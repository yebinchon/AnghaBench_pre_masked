
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ) ;

Oid
FUNC_7(Oid VAR_4, Oid VAR_5, bool VAR_6)
{
 Oid VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_0,
        FUNC_1(VAR_4),
        FUNC_1(VAR_5));
 if (!FUNC_2(VAR_7) && !VAR_6)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("cast from type %s to type %s does not exist",
      FUNC_6(VAR_4),
      FUNC_6(VAR_5))));
 return VAR_7;
}
