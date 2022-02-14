
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static char *FUNC_6(int VAR_0, char *VAR_1[])
{
 FILE *VAR_2;
 char VAR_3[256];
 char *VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_4 = VAR_1[0];

 VAR_2 = FUNC_4(VAR_4, "r");
 if (!VAR_2) {
  FUNC_3(VAR_4);
  FUNC_0(1);
 }

 VAR_5 = FUNC_1(VAR_3, 1, sizeof(VAR_3), VAR_2);
 if (VAR_5 == sizeof(VAR_3))
  VAR_5--;


 while (VAR_5 > 0 && VAR_3[VAR_5 - 1] == '\n')
  VAR_5--;

 VAR_3[VAR_5] = 0;


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_3[VAR_6] == '\n')
   VAR_3[VAR_6] = ' ';
 }

 if (FUNC_2(VAR_2) == -1) {
  FUNC_3(VAR_4);
  FUNC_0(1);
 }

 return FUNC_5(VAR_3);
}
