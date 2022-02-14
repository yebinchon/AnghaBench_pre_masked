
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*,int,int*) ;
 int FUNC_3 (void*,char*,int ,int ) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

int FUNC_6(void *VAR_0, int VAR_1, const char *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(VAR_0);

 VAR_3 = (char *)(uintptr_t)FUNC_2(VAR_0, VAR_1, &VAR_4);
 if (!VAR_3)
  return VAR_4;

 VAR_5 = FUNC_5(VAR_2);

 VAR_6 = FUNC_3(VAR_0, VAR_3, FUNC_1(VAR_4+1),
     FUNC_1(VAR_5+1));
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_3, VAR_2, VAR_5+1);
 return 0;
}
