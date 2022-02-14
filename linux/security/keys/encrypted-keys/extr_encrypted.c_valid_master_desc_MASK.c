
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_5, const char *VAR_6)
{
 int VAR_7;

 if (!FUNC_0(VAR_5, VAR_1, VAR_2))
  VAR_7 = VAR_2;
 else if (!FUNC_0(VAR_5, VAR_3, VAR_4))
  VAR_7 = VAR_4;
 else
  return -VAR_0;

 if (!VAR_5[VAR_7])
  return -VAR_0;

 if (VAR_6 && FUNC_0(VAR_5, VAR_6, VAR_7))
  return -VAR_0;

 return 0;
}
