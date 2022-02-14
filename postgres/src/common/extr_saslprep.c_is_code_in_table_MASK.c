
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const pg_wchar ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,scalar_t__ const*,int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_2(pg_wchar VAR_1, const pg_wchar *VAR_2, int VAR_3)
{
 FUNC_0(VAR_3 % 2 == 0);

 if (VAR_1 < VAR_2[0] || VAR_1 > VAR_2[VAR_3 - 1])
  return 0;

 if (FUNC_1(&VAR_1, VAR_2, VAR_3 / 2, sizeof(pg_wchar) * 2,
    VAR_0))
  return 1;
 else
  return 0;
}
