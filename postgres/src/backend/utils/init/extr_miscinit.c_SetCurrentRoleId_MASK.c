
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;

void
FUNC_3(Oid VAR_5, bool VAR_6)
{







 if (!FUNC_0(VAR_5))
 {
  if (!FUNC_0(VAR_2))
   return;

  VAR_5 = VAR_2;
  VAR_6 = VAR_3;

  VAR_4 = 0;
 }
 else
  VAR_4 = 1;

 FUNC_2(VAR_5);

 FUNC_1("is_superuser",
     VAR_6 ? "on" : "off",
     VAR_0, VAR_1);
}
