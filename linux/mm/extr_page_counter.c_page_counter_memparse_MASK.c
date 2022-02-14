
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char**) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char const*) ;

int FUNC_3(const char *VAR_3, const char *VAR_4,
     unsigned long *VAR_5)
{
 char *VAR_6;
 u64 VAR_7;

 if (!FUNC_2(VAR_3, VAR_4)) {
  *VAR_5 = VAR_1;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_3, &VAR_6);
 if (*VAR_6 != '\0')
  return -VAR_0;

 *VAR_5 = FUNC_1(VAR_7 / VAR_2, (u64)VAR_1);

 return 0;
}
