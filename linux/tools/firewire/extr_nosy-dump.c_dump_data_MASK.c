
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(unsigned char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1 > 128)
  VAR_3 = 128;
 else
  VAR_3 = VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_1("%s%02hhx",
         (VAR_2 % 4 == 0 && VAR_2 != 0) ? " " : "",
         VAR_0[FUNC_0(VAR_2)]);

 if (VAR_3 < VAR_1)
  FUNC_1(" (%d more bytes)", VAR_1 - VAR_3);
}
