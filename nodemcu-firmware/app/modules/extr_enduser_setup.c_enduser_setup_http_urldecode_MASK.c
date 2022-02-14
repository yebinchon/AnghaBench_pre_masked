
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
  FUNC_0("enduser_setup_http_urldecode");

  char *VAR_4 = VAR_0;
  char *VAR_5 = VAR_0 + VAR_3 - 1;
  char VAR_6, VAR_7;
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_2 && *VAR_1 && VAR_0 < VAR_5; ++VAR_8)
  {
    if ((*VAR_1 == '%') && ((VAR_6 = VAR_1[1]) && (VAR_7 = VAR_1[2])) && (FUNC_1(VAR_6) && FUNC_1(VAR_7)))
    {
      if (VAR_6 >= 'a')
      {
        VAR_6 -= 'a'-'A';
      }
      if (VAR_6 >= 'A')
      {
        VAR_6 -= ('A' - 10);
      }
      else
      {
        VAR_6 -= '0';
      }
      if (VAR_7 >= 'a')
      {
        VAR_7 -= 'a'-'A';
      }
      if (VAR_7 >= 'A')
      {
        VAR_7 -= ('A' - 10);
      }
      else
      {
        VAR_7 -= '0';
      }
      *VAR_0++ = 16 * VAR_6 + VAR_7;
      VAR_1 += 3;
      VAR_8 += 2;
    } else {
      char VAR_9 = *VAR_1++;
      if (VAR_9 == '+')
      {
        VAR_9 = ' ';
      }
      *VAR_0++ = VAR_9;
    }
  }
  *VAR_0++ = '\0';
  return (VAR_8 < VAR_2);
}
