
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 char* FUNC_0 (int,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,size_t,char*,char const*,char const*,int,int) ;

void FUNC_3(char *VAR_0, size_t VAR_1, uint16_t VAR_2,
        uint16_t VAR_3)
{
 const char *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  VAR_4 = "unknown product";


 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  VAR_5 = "unknown vendor";

 FUNC_2(VAR_0, VAR_1, "%s : %s (%04x:%04x)", VAR_5, VAR_4, VAR_2, VAR_3);
}
