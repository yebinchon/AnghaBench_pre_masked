
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int addr_file ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char*,char*,char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;
 unsigned int FUNC_6 (char*) ;
 char FUNC_7 (char) ;

__attribute__((used)) static char *FUNC_8(char *VAR_2)
{
 FILE *VAR_3;
 char *VAR_4, *VAR_5;
 char VAR_6[256];
 char VAR_7[VAR_1];
 unsigned int VAR_8;
 char *VAR_9 = ((void*)0);

 FUNC_3(VAR_7, sizeof(VAR_7), "%s%s%s", VAR_0,
   VAR_2, "/address");

 VAR_3 = FUNC_2(VAR_7, "r");
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_6, sizeof(VAR_6), VAR_3);
 if (VAR_4) {
  VAR_5 = FUNC_4(VAR_4, '\n');
  if (VAR_5)
   *VAR_5 = '\0';
  for (VAR_8 = 0; VAR_8 < FUNC_6(VAR_4); VAR_8++)
   VAR_4[VAR_8] = FUNC_7(VAR_4[VAR_8]);
  VAR_9 = FUNC_5(VAR_4);
 }

 FUNC_0(VAR_3);
 return VAR_9;
}
