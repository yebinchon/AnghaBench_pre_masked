
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;

int FUNC_2(void *VAR_3, void *VAR_4, int VAR_5, int VAR_6,
  void (*VAR_7)(char *, char *))
{
 char *VAR_8, *VAR_9;

 VAR_8 = VAR_4;
 VAR_8 += VAR_6;
 VAR_9 = VAR_3;
 VAR_9 += VAR_6;

 FUNC_0(VAR_5 == 16);
 VAR_1 = 0;
 VAR_2 = 1;

 VAR_7(VAR_8, VAR_9);

 VAR_2 = 0;
 if (VAR_1) {
  if (VAR_0)
   FUNC_1("  Got signal %i\n", VAR_1);
  return 1;
 }
 return 0;
}
