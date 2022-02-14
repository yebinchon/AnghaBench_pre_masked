
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 unsigned int FUNC_3 (char*,char**,int) ;
 int* VAR_3 ;

void FUNC_4(char *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 char *VAR_7;

 VAR_7 = VAR_4;

 while (VAR_7 && *VAR_7) {
  if (*VAR_7 == '-')
   goto error;

  VAR_5 = FUNC_3(VAR_7, &VAR_7, 10);

  if (VAR_1 < VAR_0)
   VAR_3[VAR_1++] = VAR_5;

  if (*VAR_7 == '\0')
   break;

  if (*VAR_7 == ',') {
   VAR_7 += 1;
   continue;
  }

  if (*VAR_7 == '-') {
   VAR_7 += 1;
  } else if (*VAR_7 == '.') {
   VAR_7 += 1;
   if (*VAR_7 == '.')
    VAR_7 += 1;
   else
    goto error;
  }

  VAR_6 = FUNC_3(VAR_7, &VAR_7, 10);
  if (VAR_6 <= VAR_5)
   goto error;

  while (++VAR_5 <= VAR_6) {
   if (VAR_1 < VAR_0)
    VAR_3[VAR_1++] = VAR_5;
  }

  if (*VAR_7 == ',')
   VAR_7 += 1;
  else if (*VAR_7 != '\0')
   goto error;
 }
 return;

error:
 FUNC_1(VAR_2, "\"--cpu %s\" malformed\n", VAR_4);
 FUNC_0(-1);
}
