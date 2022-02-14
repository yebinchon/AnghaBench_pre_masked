
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int,int) ;





 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(LPWSTR VAR_0, INT VAR_1, INT VAR_2, INT VAR_3)
{

  FUNC_1("s==%s, start==%d, len==%d, code==%d\n",
        FUNC_2(VAR_0, VAR_2), VAR_1, VAR_2, VAR_3);

  switch (VAR_3)
  {
    case 132:
      return FUNC_0(VAR_0[VAR_1]);
    case 131:
    case 130:
      while (VAR_1 && FUNC_0(VAR_0[VAR_1 - 1]))
        VAR_1--;
      while (VAR_1 && !FUNC_0(VAR_0[VAR_1 - 1]))
        VAR_1--;
      return VAR_1;
    case 128:
    case 129:
      while (VAR_1 < VAR_2 && !FUNC_0(VAR_0[VAR_1]))
        VAR_1++;
      while (VAR_1 < VAR_2 && FUNC_0(VAR_0[VAR_1]))
        VAR_1++;
      return VAR_1;
  }
  return 0;
}
