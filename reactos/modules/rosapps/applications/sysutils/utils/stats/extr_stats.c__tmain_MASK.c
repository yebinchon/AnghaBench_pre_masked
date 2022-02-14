
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCHAR ;


 int FUNC_0 (int ,int ) ;
 void* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int VAR_1 ;
 int ** VAR_2 ;
 void* VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

int FUNC_7(int VAR_4, _TCHAR * VAR_5[])
{
  int VAR_6;

  FUNC_6 (FUNC_5("ReactOS Project Statistics\n"));
  FUNC_6 (FUNC_5("==========================\n\n"));

  if (VAR_4 < 2 || VAR_4 > 2 + VAR_1)
  {
    FUNC_6(FUNC_5("Usage: stats [-e] [-s] directory\n"));
    FUNC_6(FUNC_5("  -e: don't count empty lines\n"));
    FUNC_6(FUNC_5("  -s: be silent, don't print directories while processing\n"));
    return 1;
  }

  FUNC_3();
  FUNC_0 (FUNC_5("c\0\0"), FUNC_5("Ansi C Source files"));
  FUNC_0 (FUNC_5("cpp\0cxx\0\0"), FUNC_5("C++ Source files"));
  FUNC_0 (FUNC_5("h\0\0"), FUNC_5("Header files"));

  for(VAR_6 = 1; VAR_6 < VAR_4 - 1; VAR_6++)
  {
    VAR_2[VAR_6 - 1] = VAR_5[VAR_6];
  }

  VAR_3 = FUNC_4(FUNC_5("-e"));
  VAR_0 = FUNC_4(FUNC_5("-s"));

  FUNC_2 (VAR_5[VAR_4 - 1]);
  FUNC_1();

  return 0;
}
