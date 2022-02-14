
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int *,int) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static timelib_sll FUNC_4(char **VAR_1, int VAR_2, int *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 timelib_sll VAR_7 = VAR_0;
 int VAR_8 = 0;

 while ((**VAR_1 < '0') || (**VAR_1 > '9')) {
  if (**VAR_1 == '\0') {
   return VAR_0;
  }
  ++*VAR_1;
 }
 VAR_4 = *VAR_1;
 while ((**VAR_1 >= '0') && (**VAR_1 <= '9') && VAR_8 < VAR_2) {
  ++*VAR_1;
  ++VAR_8;
 }
 VAR_5 = *VAR_1;
 if (VAR_3) {
  *VAR_3 = VAR_5 - VAR_4;
 }
 VAR_6 = FUNC_2(1, VAR_5 - VAR_4 + 1);
 FUNC_0(VAR_6, VAR_4, VAR_5 - VAR_4);
 VAR_7 = FUNC_1(VAR_6, ((void*)0), 10);
 FUNC_3(VAR_6);
 return VAR_7;
}
