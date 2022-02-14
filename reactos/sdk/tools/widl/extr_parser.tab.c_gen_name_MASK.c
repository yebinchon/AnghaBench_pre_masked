
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,char const*,char const*,int ) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (size_t) ;

__attribute__((used)) static char *FUNC_5(void)
{
  static const char VAR_1[] = "__WIDL_%s_generated_name_%08lX";
  static unsigned long VAR_2 = 0;
  static const char *VAR_3;
  static size_t VAR_4;
  char *VAR_5;

  if (! VAR_3)
  {
    char *VAR_6 = FUNC_0(VAR_0, ".idl");
    VAR_3 = VAR_6;

    for (; *VAR_6; ++VAR_6)
      if (! FUNC_1((unsigned char) *VAR_6))
        *VAR_6 = '_';

    VAR_4 = sizeof VAR_1 - 7 + FUNC_3(VAR_3) + 8;
  }

  VAR_5 = FUNC_4(VAR_4);
  FUNC_2(VAR_5, VAR_1, VAR_3, VAR_2++);
  return VAR_5;
}
