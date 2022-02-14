
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,char const*,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, int VAR_1,
      const char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2, FUNC_0(VAR_1, VAR_3));

 if (VAR_4 != 0)
  return VAR_4;

 if (VAR_1 == VAR_3)
  return 0;

 return VAR_1 < VAR_3 ? -1 : 1;
}
