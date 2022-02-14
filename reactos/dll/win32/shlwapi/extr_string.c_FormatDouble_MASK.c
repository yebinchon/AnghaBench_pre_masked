
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int NumDigits; } ;
typedef TYPE_1__ NUMBERFMTW ;
typedef int LPWSTR ;


 int FUNC_0 (TYPE_1__*,char*,int,char*,int) ;
 int FUNC_1 (int ,int ,char*,TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char const*,double) ;

__attribute__((used)) static int FUNC_3(double VAR_1, int VAR_2, LPWSTR VAR_3, int VAR_4)
{
  static const WCHAR VAR_5[] = {'%','f',0};
  WCHAR VAR_6[64];
  NUMBERFMTW VAR_7;
  WCHAR VAR_8[8], VAR_9[8];

  FUNC_2(VAR_6, 64, VAR_5, VAR_1);

  FUNC_0(&VAR_7, VAR_8, sizeof VAR_8 / sizeof (WCHAR),
                 VAR_9, sizeof VAR_9 / sizeof (WCHAR));
  VAR_7.NumDigits = VAR_2;
  return FUNC_1(VAR_0, 0, VAR_6, &VAR_7, VAR_3, VAR_4);
}
