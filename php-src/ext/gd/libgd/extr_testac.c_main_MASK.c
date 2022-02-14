
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,double,int,int,char*) ;

int
FUNC_7 (int VAR_1, char *VAR_2[])
{

  FILE *VAR_3;
  FILE *VAR_4;


  gdImagePtr VAR_5 = 0;


  int VAR_6;

  if (VAR_1 != 2)
    {
      FUNC_3 (VAR_0, "Usage: testac filename.png\n");
      FUNC_0 (1);
    }






  VAR_3 = FUNC_2 (VAR_2[1], "rb");
  if (!VAR_3)
    {
      FUNC_3 (VAR_0, "Can't load %s.\n", VAR_2[1]);
      FUNC_0 (1);
    }
  else
    {
      VAR_5 = FUNC_4 (VAR_3);
      FUNC_1 (VAR_3);
    }
  FUNC_6 (VAR_5, 1.0, 0, 0, "noblending-fullsize-truecolor.png");
  FUNC_6 (VAR_5, 1.0, 1, 0, "blending-fullsize-truecolor.png");
  FUNC_6 (VAR_5, 0.5, 0, 0, "noblending-halfsize-truecolor.png");
  FUNC_6 (VAR_5, 0.5, 1, 0, "blending-halfsize-truecolor.png");
  FUNC_6 (VAR_5, 2.0, 0, 0, "noblending-doublesize-truecolor.png");
  FUNC_6 (VAR_5, 2.0, 1, 0, "blending-doublesize-truecolor.png");
  FUNC_6 (VAR_5, 1.0, 0, 1, "noblending-fullsize-palette.png");
  FUNC_6 (VAR_5, 1.0, 1, 1, "blending-fullsize-palette.png");
  FUNC_6 (VAR_5, 0.5, 0, 1, "noblending-halfsize-palette.png");
  FUNC_6 (VAR_5, 0.5, 1, 1, "blending-halfsize-palette.png");
  FUNC_6 (VAR_5, 2.0, 0, 1, "noblending-doublesize-palette.png");
  FUNC_6 (VAR_5, 2.0, 1, 1, "blending-doublesize-palette.png");
  FUNC_5 (VAR_5);
  return 0;
}
