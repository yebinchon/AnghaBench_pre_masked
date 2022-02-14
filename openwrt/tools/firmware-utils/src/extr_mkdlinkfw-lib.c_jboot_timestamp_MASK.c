
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 (int*) ;

uint32_t FUNC_4(void)
{
 char *VAR_3 = FUNC_1("SOURCE_DATE_EPOCH");
 char *VAR_4 = VAR_3;
 time_t VAR_5 = -1;
 VAR_1 = 0;

 if (VAR_3 && *VAR_3) {
  VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);

  if (VAR_1 || (VAR_4 && *VAR_4 != '\0')) {
   FUNC_0(VAR_2, "Invalid SOURCE_DATE_EPOCH");
   VAR_5 = -1;
  }
 }

 if (VAR_5 == -1)
  FUNC_3(&VAR_5);

 return (((uint32_t) VAR_5) - VAR_0) >> 2;
}
