
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int NUMBERFMTW ;
typedef int LPWSTR ;
typedef int LONGLONG ;
typedef int BOOL ;


 int FUNC_0 (int *,char*,int,char*,int) ;
 int FUNC_1 (int ,int ,char*,int *,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(LONGLONG VAR_1, LPWSTR VAR_2, int VAR_3)
{
  NUMBERFMTW VAR_4;
  WCHAR VAR_5[8], VAR_6[8];
  WCHAR VAR_7[24];
  WCHAR *VAR_8;
  BOOL VAR_9 = (VAR_1 < 0);

  FUNC_0(&VAR_4, VAR_5, sizeof VAR_5 / sizeof (WCHAR),
                VAR_6, sizeof VAR_6 / sizeof (WCHAR));

  VAR_8 = &VAR_7[24];
  *(--VAR_8) = 0;
  do
  {
    *(--VAR_8) = '0' + (VAR_1%10);
    VAR_1 /= 10;
  } while (VAR_1 > 0);
  if (VAR_9)
    *(--VAR_8) = '-';

  return FUNC_1(VAR_0, 0, VAR_8, &VAR_4, VAR_2, VAR_3);
}
