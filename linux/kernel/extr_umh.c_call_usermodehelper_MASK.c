
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct subprocess_info*,int) ;
 struct subprocess_info* FUNC_1 (char const*,char**,char**,int ,int *,int *,int *) ;

int FUNC_2(const char *VAR_4, char **VAR_5, char **VAR_6, int VAR_7)
{
 struct subprocess_info *VAR_8;
 gfp_t VAR_9 = (VAR_7 == VAR_3) ? VAR_1 : VAR_2;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_9,
      ((void*)0), ((void*)0), ((void*)0));
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_8, VAR_7);
}
