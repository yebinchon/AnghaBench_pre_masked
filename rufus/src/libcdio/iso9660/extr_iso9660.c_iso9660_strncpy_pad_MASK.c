
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef enum strncpy_pad_check { ____Placeholder_strncpy_pad_check } strncpy_pad_check ;






 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char const) ;
 int FUNC_5 (char*,char,size_t) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,size_t) ;

char *
FUNC_8(char VAR_0[], const char VAR_1[], size_t VAR_2,
                    enum strncpy_pad_check VAR_3)
{
  size_t VAR_4;

  FUNC_0 (VAR_0 != ((void*)0));
  FUNC_0 (VAR_1 != ((void*)0));
  FUNC_0 (VAR_2 > 0);

  switch (VAR_3)
    {
      int VAR_5;
    case 128:
      break;

    case 131:
      for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
        if ((int8_t) VAR_1[VAR_5] < 0)
          {
            FUNC_2 ("string '%s' fails 7bit constraint (pos = %d)",
                      VAR_1, VAR_5);
            break;
          }
      break;

    case 130:
      for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
        if (!FUNC_3 (VAR_1[VAR_5]))
          {
            FUNC_2 ("string '%s' fails a-character constraint (pos = %d)",
                      VAR_1, VAR_5);
            break;
          }
      break;

    case 129:
      for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
        if (!FUNC_4 (VAR_1[VAR_5]))
          {
            FUNC_2 ("string '%s' fails d-character constraint (pos = %d)",
                      VAR_1, VAR_5);
            break;
          }
      break;

    default:
      FUNC_1 ();
      break;
    }

  VAR_4 = FUNC_6 (VAR_1);

  if (VAR_4 > VAR_2)
    FUNC_2 ("string '%s' is getting truncated to %d characters",
              VAR_1, (unsigned int) VAR_2);

  FUNC_7 (VAR_0, VAR_1, VAR_2);
  if (VAR_4 < VAR_2)
    FUNC_5(VAR_0+VAR_4, ' ', VAR_2-VAR_4);
  return VAR_0;
}
