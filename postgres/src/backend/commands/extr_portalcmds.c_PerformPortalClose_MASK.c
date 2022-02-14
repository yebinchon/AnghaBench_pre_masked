
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Portal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;

void
FUNC_7(const char *VAR_3)
{
 Portal VAR_4;


 if (VAR_3 == ((void*)0))
 {
  FUNC_2();
  return;
 }





 if (VAR_3[0] == '\0')
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_6("invalid cursor name: must not be empty")));




 VAR_4 = FUNC_0(VAR_3);
 if (!FUNC_3(VAR_4))
 {
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("cursor \"%s\" does not exist", VAR_3)));
  return;
 }




 FUNC_1(VAR_4, 0);
}
