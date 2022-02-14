
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int inet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ,int ,int,char*,int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,int) ;
 int * FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static char *
FUNC_11(inet *VAR_2, bool VAR_3)
{
 char VAR_4[sizeof("xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:255.255.255.255/128")];
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(FUNC_5(VAR_2), FUNC_3(VAR_2), FUNC_4(VAR_2),
         VAR_4, sizeof(VAR_4));
 if (VAR_5 == ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("could not format inet value: %m")));


 if (VAR_3 && FUNC_9(VAR_4, '/') == ((void*)0))
 {
  VAR_6 = FUNC_10(VAR_4);
  FUNC_8(VAR_4 + VAR_6, sizeof(VAR_4) - VAR_6, "/%u", FUNC_4(VAR_2));
 }

 return FUNC_7(VAR_4);
}
