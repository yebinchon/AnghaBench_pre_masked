
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 unsigned long FUNC_2 (char const*,int *,int) ;
 int VAR_3 ;

int FUNC_3(const char *VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_4 || FUNC_1(VAR_4, "%r", 2))
  return -VAR_0;

 VAR_1 = 0;
 VAR_5 = FUNC_2(VAR_4 + 2, ((void*)0), 10);
 if (VAR_1 || VAR_5 >= 16)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_2) + 8 * VAR_5;
}
