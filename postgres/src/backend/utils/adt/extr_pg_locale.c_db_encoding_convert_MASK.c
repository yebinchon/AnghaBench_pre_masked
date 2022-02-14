
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ,int) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(int VAR_2, char **VAR_3)
{
 char *VAR_4;
 char *VAR_5;


 VAR_4 = FUNC_5(*VAR_3, FUNC_7(*VAR_3), VAR_2);
 if (VAR_4 == *VAR_3)
  return;


 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 == ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("out of memory")));


 FUNC_3(*VAR_3);
 *VAR_3 = VAR_5;

 FUNC_4(VAR_4);
}
