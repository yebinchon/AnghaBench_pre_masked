
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,int,int ) ;
 char** VAR_2 ;
 int FUNC_1 (char*,...) ;

int FUNC_2(void)
{
  int VAR_3, VAR_4 = 35, VAR_5 = 39, VAR_6;

  for (VAR_3 = 1; VAR_3 <= 8; VAR_3 *= 2) {
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
      FUNC_1("%s Top-Down BMP (row alignment = %d bytes)  ...  ",
             VAR_2[VAR_6], VAR_3);
      if (FUNC_0("bmp", VAR_4, VAR_3, VAR_5, VAR_6, 0) == -1)
        return -1;
      FUNC_1("OK.\n");

      FUNC_1("%s Top-Down PPM (row alignment = %d bytes)  ...  ",
             VAR_2[VAR_6], VAR_3);
      if (FUNC_0("ppm", VAR_4, VAR_3, VAR_5, VAR_6,
                    VAR_0) == -1)
        return -1;
      FUNC_1("OK.\n");

      FUNC_1("%s Bottom-Up BMP (row alignment = %d bytes)  ...  ",
             VAR_2[VAR_6], VAR_3);
      if (FUNC_0("bmp", VAR_4, VAR_3, VAR_5, VAR_6, 0) == -1)
        return -1;
      FUNC_1("OK.\n");

      FUNC_1("%s Bottom-Up PPM (row alignment = %d bytes)  ...  ",
             VAR_2[VAR_6], VAR_3);
      if (FUNC_0("ppm", VAR_4, VAR_3, VAR_5, VAR_6,
                    VAR_0) == -1)
        return -1;
      FUNC_1("OK.\n");
    }
  }

  return 0;
}
