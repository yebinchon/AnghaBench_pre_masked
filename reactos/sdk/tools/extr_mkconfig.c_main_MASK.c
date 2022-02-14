
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(int VAR_1, char* VAR_2[])
{
  int VAR_3;
  unsigned int VAR_4;
  char* VAR_5;
  char* VAR_6;
  char VAR_7[512];

  if (VAR_1 == 1)
    {
      FUNC_0(VAR_0, "Not enough arguments\n");
      return(1);
    }

  VAR_5 = FUNC_1(256 * 1024);
  if (VAR_5 == ((void*)0))
    {
      FUNC_0(VAR_0, "Out of memory 1\n");
      return(1);
    }

  VAR_6 = VAR_5;
  VAR_6 = VAR_6 + FUNC_2(VAR_6, "/* Automatically generated, ");
  VAR_6 = VAR_6 + FUNC_2(VAR_6, "Edit the Makefile to change configuration */\n");
  VAR_6 = VAR_6 + FUNC_2(VAR_6, "#ifndef __INCLUDE_CONFIG_H\n");
  VAR_6 = VAR_6 + FUNC_2(VAR_6, "#define __INCLUDE_CONFIG_H\n");
  FUNC_5(VAR_7, "");
  VAR_3 = 0;
  for (VAR_4 = 2; VAR_4 < VAR_1; VAR_4++)
    {
      if (FUNC_4(VAR_2[VAR_4], "REGTESTS") == 0)
        {
          VAR_3 = 1;
        }
      else
        {
          VAR_6 = VAR_6 + FUNC_2(VAR_6, "#ifndef %s\n", VAR_2[VAR_4]);
          VAR_6 = VAR_6 + FUNC_2(VAR_6, "#define %s\n", VAR_2[VAR_4]);
          VAR_6 = VAR_6 + FUNC_2(VAR_6, "#endif /* %s */\n", VAR_2[VAR_4]);
        }
      FUNC_3(VAR_7, VAR_2[VAR_4]);
      if (VAR_4 != (VAR_1 - 1))
 {
   FUNC_3(VAR_7, " ");
 }
    }
  if (VAR_3)
    {
      VAR_6 = VAR_6 + FUNC_2(VAR_6, "#ifndef __ASM__\n");
      VAR_6 = VAR_6 + FUNC_2(VAR_6, "extern void PrepareTests();\n");
      VAR_6 = VAR_6 + FUNC_2(VAR_6, "#define PREPARE_TESTS PrepareTests();\n");
   VAR_6 = VAR_6 + FUNC_2(VAR_6, "#endif /* __ASM__ */\n");
    }
  else
    {
      VAR_6 = VAR_6 + FUNC_2(VAR_6, "#define PREPARE_TESTS\n");
    }
  VAR_6 = VAR_6 + FUNC_2(VAR_6, "#define CONFIG \"%s\"\n", VAR_7);
  VAR_6 = VAR_6 + FUNC_2(VAR_6, "#endif /* __INCLUDE_CONFIG_H */\n");

  return(FUNC_6(VAR_5, VAR_2[1]));
}
