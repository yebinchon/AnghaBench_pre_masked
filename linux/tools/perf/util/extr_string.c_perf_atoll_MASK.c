
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,char**,int) ;

s64 FUNC_4(const char *VAR_1)
{
 s64 VAR_2;
 char *VAR_3;
 char VAR_4;

 if (!FUNC_0(VAR_1[0]))
  goto out_err;

 VAR_2 = FUNC_3(VAR_1, &VAR_3, 10);
 switch (VAR_4 = *VAR_3++) {
  case 'b': case 'B':
   if (*VAR_3)
    goto out_err;

   VAR_0;
  case '\0':
   return VAR_2;
  default:
   goto out_err;

  case 'k': case 'K':
   VAR_2 <<= 10;
   break;
  case 'm': case 'M':
   VAR_2 <<= 20;
   break;
  case 'g': case 'G':
   VAR_2 <<= 30;
   break;
  case 't': case 'T':
   VAR_2 <<= 40;
   break;
 }

 if (FUNC_1(VAR_4)) {
  if (FUNC_2(VAR_3, "b") != 0)
   goto out_err;
 } else {
  if (FUNC_2(VAR_3, "B") != 0)
   goto out_err;
 }
 return VAR_2;

out_err:
 return -1;
}
