
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char*,int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7(Oid VAR_6, bool VAR_7)
{

 FUNC_0(FUNC_1(VAR_0));

 if (VAR_6 != VAR_0 &&
  !VAR_1)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("permission denied to set session authorization")));

 FUNC_3(VAR_6, VAR_7);

 FUNC_2("is_superuser",
     VAR_7 ? "on" : "off",
     VAR_4, VAR_5);
}
