
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_0 ;

int
FUNC_7 (int VAR_1, char **VAR_2)
{
  gdImagePtr VAR_3;
  FILE *VAR_4, *VAR_5;
  if (VAR_1 != 3)
    {
      FUNC_3 (VAR_0, "Usage: pngtogd filename.png filename.gd\n");
      FUNC_0 (1);
    }
  VAR_4 = FUNC_2 (VAR_2[1], "rb");
  if (!VAR_4)
    {
      FUNC_3 (VAR_0, "Input file does not exist!\n");
      FUNC_0 (1);
    }
  VAR_3 = FUNC_4 (VAR_4);
  FUNC_1 (VAR_4);
  if (!VAR_3)
    {
      FUNC_3 (VAR_0, "Input is not in PNG format!\n");
      FUNC_0 (1);
    }
  VAR_5 = FUNC_2 (VAR_2[2], "wb");
  if (!VAR_5)
    {
      FUNC_3 (VAR_0, "Output file cannot be written to!\n");
      FUNC_5 (VAR_3);
      FUNC_0 (1);
    }
  FUNC_6 (VAR_3, VAR_5);
  FUNC_1 (VAR_5);
  FUNC_5 (VAR_3);

  return 0;
}
