
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

char *
FUNC_4(void)
{

 if (VAR_4



  )
 {

  char *VAR_5 = FUNC_0(FUNC_3("\n#line %d \"%s\"\n") + sizeof(int) * VAR_0 * 10 / 3 + FUNC_3(VAR_4) * 2);
  char *VAR_6,
       *VAR_7;

  FUNC_1(VAR_5, "\n#line %d \"", VAR_3);
  VAR_6 = VAR_4;
  VAR_7 = VAR_5 + FUNC_3(VAR_5);
  while (*VAR_6)
  {
   if (*VAR_6 == '\\' || *VAR_6 == '"')
    *VAR_7++ = '\\';
   *VAR_7++ = *VAR_6++;
  }
  *VAR_7 = '\0';
  FUNC_2(VAR_7, "\"\n");

  return VAR_5;
 }

 return VAR_1;
}
