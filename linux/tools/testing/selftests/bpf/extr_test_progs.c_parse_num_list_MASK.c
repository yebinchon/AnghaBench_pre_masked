
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_selector {int* num_set; int num_set_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int*,int) ;
 int FUNC_2 (char const*,char**,int) ;

int FUNC_3(const char *VAR_3, struct test_selector *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8 = 0, VAR_9 = -1;
 bool *VAR_10 = ((void*)0), *VAR_11, VAR_12 = 0;
 char *VAR_13;

 while (VAR_3[0]) {
  VAR_2 = 0;
  VAR_7 = FUNC_2(VAR_3, &VAR_13, 10);
  if (VAR_2)
   return -VAR_2;

  if (VAR_12)
   VAR_9 = VAR_7;
  else
   VAR_8 = VAR_7;

  if (!VAR_12 && *VAR_13 == '-') {
   VAR_3 = VAR_13 + 1;
   VAR_12 = 1;
   continue;
  } else if (*VAR_13 == ',') {
   VAR_12 = 0;
   VAR_3 = VAR_13 + 1;
   VAR_9 = VAR_7;
  } else if (*VAR_13 == '\0') {
   VAR_12 = 0;
   VAR_3 = VAR_13;
   VAR_9 = VAR_7;
  } else {
   return -VAR_0;
  }

  if (VAR_8 > VAR_9)
   return -VAR_0;

  if (VAR_9 + 1 > VAR_6) {
   VAR_6 = VAR_9 + 1;
   VAR_11 = FUNC_1(VAR_10, VAR_6);
   if (!VAR_11) {
    FUNC_0(VAR_10);
    return -VAR_1;
   }
   VAR_10 = VAR_11;
  }
  for (VAR_5 = VAR_8; VAR_5 <= VAR_9; VAR_5++) {
   VAR_10[VAR_5] = 1;
  }

 }

 if (!VAR_10)
  return -VAR_0;

 VAR_4->num_set = VAR_10;
 VAR_4->num_set_len = VAR_6;

 return 0;
}
