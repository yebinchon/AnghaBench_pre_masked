
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(char **VAR_0, int *VAR_1) {
 char *VAR_2, *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2 = VAR_3 = FUNC_1(*VAR_1 * 5);

 for (VAR_5 = 0; VAR_5 < *VAR_1; VAR_5++) {
  if ((*VAR_0)[VAR_5] < 0x20) {
   *VAR_3++ = '&';
   *VAR_3++ = '#';
   if ((unsigned int) ((*VAR_0)[VAR_5]) > 9) {
    *VAR_3++ = ((*VAR_0)[VAR_5] / 10) + '0';
   }
   *VAR_3++ = ((*VAR_0)[VAR_5] % 10) + '0';
   *VAR_3++ = ';';
  } else {
   *VAR_3++ = (*VAR_0)[VAR_5];
  }
 }

 VAR_4 = VAR_3 - VAR_2;

 FUNC_0(*VAR_0);
 *VAR_0 = FUNC_2(VAR_2, VAR_4 + 1);
 *VAR_1 = VAR_4;
}
