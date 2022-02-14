
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int,int) ;
 int VAR_0 ;

int
FUNC_8 (int VAR_1, char **VAR_2)
{
  gdImagePtr VAR_3;
  FILE *VAR_4, *VAR_5;
  int VAR_6, VAR_7;

  if (VAR_1 != 5)
    {
      FUNC_4 (VAR_0, "Usage: pngtogd2 filename.png filename.gd2 cs fmt\n");
      FUNC_4 (VAR_0, "    where cs is the chunk size\n");
      FUNC_4 (VAR_0, "          fmt is 1 for raw, 2 for compressed\n");
      FUNC_1 (1);
    }
  VAR_4 = FUNC_3 (VAR_2[1], "rb");
  if (!VAR_4)
    {
      FUNC_4 (VAR_0, "Input file does not exist!\n");
      FUNC_1 (1);
    }
  VAR_3 = FUNC_5 (VAR_4);
  FUNC_2 (VAR_4);
  if (!VAR_3)
    {
      FUNC_4 (VAR_0, "Input is not in PNG format!\n");
      FUNC_1 (1);
    }
  VAR_5 = FUNC_3 (VAR_2[2], "wb");
  if (!VAR_5)
    {
      FUNC_4 (VAR_0, "Output file cannot be written to!\n");
      FUNC_6 (VAR_3);
      FUNC_1 (1);
    }
  VAR_6 = FUNC_0 (VAR_2[3]);
  VAR_7 = FUNC_0 (VAR_2[4]);
  FUNC_7 (VAR_3, VAR_5, VAR_6, VAR_7);
  FUNC_2 (VAR_5);
  FUNC_6 (VAR_3);

  return 0;
}
