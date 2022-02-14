
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int,char const*,int,void**) ;
 int FUNC_1 (void*,void const*,int) ;

int FUNC_2(void *VAR_0, int VAR_1, const char *VAR_2,
  const void *VAR_3, int VAR_4)
{
 void *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_4)
  FUNC_1(VAR_5, VAR_3, VAR_4);
 return 0;
}
