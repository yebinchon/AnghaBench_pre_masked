
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ,int *) ;
 unsigned int VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,char*) ;
 unsigned int FUNC_9 (char*,char**,int) ;

void FUNC_10(char *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 char *VAR_9;

 if (!FUNC_8(VAR_6, "core")) {
  if (VAR_1)
   goto error;
  VAR_3++;
  return;
 }
 if (!FUNC_8(VAR_6, "package")) {
  if (VAR_1)
   goto error;
  VAR_4++;
  return;
 }
 if (VAR_3 || VAR_4)
  goto error;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  FUNC_4(3, "CPU_ALLOC");
 VAR_2 = FUNC_1(VAR_0);

 FUNC_3(VAR_2, VAR_1);

 VAR_9 = VAR_6;

 while (VAR_9 && *VAR_9) {

  if (*VAR_9 == '-')
   goto error;

  VAR_7 = FUNC_9(VAR_9, &VAR_9, 10);

  if (VAR_7 >= VAR_0)
   goto error;
  FUNC_2(VAR_7, VAR_2, VAR_1);

  if (*VAR_9 == '\0')
   break;

  if (*VAR_9 == ',') {
   VAR_9 += 1;
   continue;
  }

  if (*VAR_9 == '-') {
   VAR_9 += 1;
  } else if (*VAR_9 == '.') {
   VAR_9 += 1;
   if (*VAR_9 == '.')
    VAR_9 += 1;
   else
    goto error;
  }

  VAR_8 = FUNC_9(VAR_9, &VAR_9, 10);
  if (VAR_8 <= VAR_7)
   goto error;

  while (++VAR_7 <= VAR_8) {
   if (VAR_7 >= VAR_0)
    goto error;
   FUNC_2(VAR_7, VAR_2, VAR_1);
  }

  if (*VAR_9 == ',')
   VAR_9 += 1;
  else if (*VAR_9 != '\0')
   goto error;
 }

 return;

error:
 FUNC_6(VAR_5, "\"--cpu %s\" malformed\n", VAR_6);
 FUNC_7();
 FUNC_5(-1);
}
