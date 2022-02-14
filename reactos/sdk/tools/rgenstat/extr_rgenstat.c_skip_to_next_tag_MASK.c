
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (scalar_t__*,char*,int) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int
FUNC_3()
{
  unsigned int VAR_5;
  int VAR_6;
  int VAR_7 = 0;
  int VAR_8;
  int VAR_9;

  VAR_4[0] = 0;
  while ((VAR_2 < VAR_3) && (!VAR_7))
    {
      if (VAR_1[VAR_2] == '@')
        {
          VAR_2++;
          VAR_5 = VAR_2;
          VAR_6 = 0;
          while ((VAR_2 < VAR_3) && (!VAR_6))
            {
              VAR_6 = FUNC_1(VAR_1[VAR_2]);
              VAR_2++;
            }
          VAR_9 = VAR_2 > VAR_5 ? VAR_2 - VAR_5 - 1 : 0;
          FUNC_2(VAR_4, &VAR_1[VAR_5], VAR_9);
          VAR_4[VAR_9] = 0;

          VAR_8 = FUNC_0(VAR_4);
          if (VAR_8 != VAR_0)
            {
              return VAR_8;
            }
        }
      VAR_2++;
    }

  return VAR_0;
}
