
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

Oid
FUNC_8(Oid VAR_4, Oid VAR_5, bool VAR_6)
{
 Oid VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_0,
        FUNC_1(VAR_4),
        FUNC_1(VAR_5));
 if (!FUNC_2(VAR_7) && !VAR_6)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("transform for type %s language \"%s\" does not exist",
      FUNC_6(VAR_4),
      FUNC_7(VAR_5, 0))));
 return VAR_7;
}
