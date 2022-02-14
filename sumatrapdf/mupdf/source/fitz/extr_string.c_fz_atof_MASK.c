
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 float FUNC_0 (float,int ,int ) ;
 float FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (float) ;

float FUNC_3(const char *VAR_3)
{
 float VAR_4;

 if (VAR_3 == ((void*)0))
  return 0;

 VAR_2 = 0;
 VAR_4 = FUNC_1(VAR_3, ((void*)0));
 if ((VAR_2 == VAR_0 && VAR_4 == 0) || FUNC_2(VAR_4))

  return 1;
 VAR_4 = FUNC_0(VAR_4, -VAR_1, VAR_1);
 return VAR_4;
}
