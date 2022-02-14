
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
 int FUNC_5 (int *,int,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int,...) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;

int
FUNC_9 (int VAR_1, char **VAR_2)
{
  gdImagePtr VAR_3;
  FILE *VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;

  if (VAR_1 != 7)
    {
      FUNC_4 (VAR_0, "Usage: gd2time filename.gd count x y w h\n");
      FUNC_1 (1);
    }

  VAR_9 = FUNC_0 (VAR_2[2]);
  VAR_5 = FUNC_0 (VAR_2[3]);
  VAR_6 = FUNC_0 (VAR_2[4]);
  VAR_7 = FUNC_0 (VAR_2[5]);
  VAR_8 = FUNC_0 (VAR_2[6]);

  FUNC_7 ("Extracting %d times from (%d, %d), size is %dx%d\n", VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);

  VAR_11 = FUNC_8 (0);
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
      VAR_4 = FUNC_3 (VAR_2[1], "rb");
      if (!VAR_4)
 {
   FUNC_4 (VAR_0, "Input file does not exist!\n");
   FUNC_1 (1);
 }

      VAR_3 = FUNC_5 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
      FUNC_2 (VAR_4);

      if (!VAR_3)
 {
   FUNC_4 (VAR_0, "Error reading source file!\n");
   FUNC_1 (1);
 }
      FUNC_6 (VAR_3);
    };
  VAR_11 = FUNC_8 (0) - VAR_11;
  FUNC_7 ("%d seconds to extract (& destroy) %d times\n", VAR_11, VAR_9);

  return 0;
}
