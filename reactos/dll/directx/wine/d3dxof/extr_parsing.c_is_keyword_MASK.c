
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parse_buffer ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static BOOL FUNC_5(parse_buffer* VAR_2, const char* VAR_3)
{
  char VAR_4[8];
  DWORD VAR_5 = FUNC_4(VAR_3);

  if (!FUNC_2(VAR_2, VAR_4, VAR_5))
    return VAR_0;
  if (FUNC_0(VAR_4, VAR_3, VAR_5))
  {
    FUNC_3(VAR_2, VAR_5);
    return VAR_0;
  }

  if (!FUNC_2(VAR_2, VAR_4, 1))
    return VAR_1;
  if (FUNC_1(VAR_4[0]))
  {
    FUNC_3(VAR_2, 1);
    return VAR_1;
  }
  FUNC_3(VAR_2, VAR_5+1);
  return VAR_0;
}
