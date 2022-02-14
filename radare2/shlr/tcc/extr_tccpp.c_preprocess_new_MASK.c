
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TokenSym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int* VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int * VAR_5 ;
 char* VAR_6 ;
 int FUNC_3 (char const*,int) ;
 int VAR_7 ;

void FUNC_4(void)
{
 int VAR_8, VAR_9;
 const char *VAR_10, *VAR_11;


 for (VAR_8 = VAR_0; VAR_8 < 256; VAR_8++) {
  VAR_4[VAR_8 - VAR_0] = FUNC_0 (VAR_8) || FUNC_1 (VAR_8);
 }


 VAR_5 = ((void*)0);
 FUNC_2 (VAR_3, 0, VAR_1 * sizeof(TokenSym *));

 VAR_7 = VAR_2;
 VAR_10 = VAR_6;
 while (*VAR_10) {
  VAR_11 = VAR_10;
  for (;;) {
   VAR_9 = *VAR_11++;
   if (VAR_9 == '\0') {
    break;
   }
  }
  FUNC_3 (VAR_10, VAR_11 - VAR_10 - 1);
  VAR_10 = VAR_11;
 }
}
