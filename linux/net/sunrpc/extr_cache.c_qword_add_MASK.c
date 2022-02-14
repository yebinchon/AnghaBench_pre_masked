
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int,int ,char*) ;

void FUNC_1(char **VAR_1, int *VAR_2, char *VAR_3)
{
 char *VAR_4 = *VAR_1;
 int VAR_5 = *VAR_2;
 int VAR_6;

 if (VAR_5 < 0) return;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0, "\\ \n\t");
 if (VAR_6 >= VAR_5) {
  VAR_4 += VAR_5;
  VAR_5 = -1;
 } else {
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;
  *VAR_4++ = ' ';
  VAR_5--;
 }
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;
}
