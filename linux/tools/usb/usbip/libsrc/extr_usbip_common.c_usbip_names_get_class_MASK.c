
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (int,int,int) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,size_t,char*,...) ;

void FUNC_4(char *VAR_0, size_t VAR_1, uint8_t VAR_2,
      uint8_t VAR_3, uint8_t VAR_4)
{
 const char *VAR_5, *VAR_6, *VAR_7;

 if (VAR_2 == 0 && VAR_3 == 0 && VAR_4 == 0) {
  FUNC_3(VAR_0, VAR_1, "(Defined at Interface level) (%02x/%02x/%02x)", VAR_2, VAR_3, VAR_4);
  return;
 }

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!VAR_7)
  VAR_7 = "unknown protocol";

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_6)
  VAR_6 = "unknown subclass";

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5)
  VAR_5 = "unknown class";

 FUNC_3(VAR_0, VAR_1, "%s / %s / %s (%02x/%02x/%02x)", VAR_5, VAR_6, VAR_7, VAR_2, VAR_3, VAR_4);
}
