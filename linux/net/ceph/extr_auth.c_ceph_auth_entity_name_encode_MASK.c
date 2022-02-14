
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int) ;
 int FUNC_1 (void**,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_2, void **VAR_3, void *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_2);

 if (*VAR_3 + 2*sizeof(u32) + VAR_5 > VAR_4)
  return -VAR_1;
 FUNC_0(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_2, VAR_5);
 return 0;
}
