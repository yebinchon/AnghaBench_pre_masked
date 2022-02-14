
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ gdPoint ;
typedef scalar_t__ gdImagePtr ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int,int,int,int,int,int,int) ;
 int FUNC_4 (scalar_t__,int,int,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int,int,int ,int ,int,int,int,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int,int,int) ;
 int FUNC_11 (scalar_t__,TYPE_1__*,int,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__,int,int,int,int,int) ;
 int FUNC_14 (scalar_t__,int *) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,int*,int) ;
 int FUNC_19 (scalar_t__,int ,int,int,unsigned char*,int) ;
 int FUNC_20 (scalar_t__,int ,int,int,unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_21 (void)
{

  FILE *VAR_4;
  FILE *VAR_5;


  gdImagePtr VAR_6 = 0, VAR_7 = 0;


  gdImagePtr VAR_8;


  int VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;


  gdPoint VAR_13[3];


  VAR_7 = FUNC_8 (256, 256);

  VAR_9 = FUNC_4 (VAR_7, 255, 255, 255);


  FUNC_5 (VAR_7, VAR_9);



  VAR_4 = FUNC_1 ("demoin.png", "rb");
  if (!VAR_4)
    {
      FUNC_2 (VAR_3, "Can't load source image; this demo\n");
      FUNC_2 (VAR_3, "is much more impressive if demoin.png\n");
      FUNC_2 (VAR_3, "is available.\n");
      VAR_6 = 0;
    }
  else
    {
      VAR_6 = FUNC_7 (VAR_4);
      FUNC_0 (VAR_4);

      FUNC_6 (VAR_7, VAR_6,
     32, 32, 0, 0, 192, 192, 255, 255);
    }
  VAR_11 = FUNC_4 (VAR_7, 255, 0, 0);
  VAR_12 = FUNC_4 (VAR_7, 0, 255, 0);
  VAR_10 = FUNC_4 (VAR_7, 0, 0, 255);

  FUNC_13 (VAR_7, 16, 16, 240, 16, VAR_12);
  FUNC_13 (VAR_7, 240, 16, 240, 240, VAR_12);
  FUNC_13 (VAR_7, 240, 240, 16, 240, VAR_12);
  FUNC_13 (VAR_7, 16, 240, 16, 16, VAR_12);

  FUNC_3 (VAR_7, 128, 128, 60, 20, 0, 720, VAR_10);

  FUNC_3 (VAR_7, 128, 128, 40, 40, 90, 270, VAR_10);


  FUNC_10 (VAR_7, 8, 8, VAR_10);

  VAR_13[0].x = 64;
  VAR_13[0].y = 0;
  VAR_13[1].x = 0;
  VAR_13[1].y = 128;
  VAR_13[2].x = 128;
  VAR_13[2].y = 128;
  FUNC_11 (VAR_7, VAR_13, 3, VAR_12);

  if (VAR_6)
    {
      int VAR_14[8];
      VAR_8 = FUNC_8 (16, 16);
      FUNC_6 (VAR_8, VAR_6,
     0, 0, 0, 0,
     FUNC_15 (VAR_8), FUNC_16 (VAR_8),
     FUNC_15 (VAR_6), FUNC_16 (VAR_6));
      FUNC_17 (VAR_7, VAR_8);


      VAR_14[0] = 0;
      VAR_14[1] = 0;
      VAR_14[2] = 0;
      VAR_14[3] = 0;
      VAR_14[4] = 0;
      VAR_14[5] = 0;
      VAR_14[6] = 0;
      VAR_14[7] = 1;
      FUNC_18 (VAR_7, VAR_14, 8);

      FUNC_13 (VAR_7, 0, 255, 255, 0, VAR_2);
    }

  FUNC_19 (VAR_7, VAR_0, 32, 32,
   (unsigned char *) "hi", VAR_11);
  FUNC_20 (VAR_7, VAR_1, 64, 64,
     (unsigned char *) "hi", VAR_11);

  FUNC_12 (VAR_7, 1);
  VAR_5 = FUNC_1 ("demoout.png", "wb");

  FUNC_14 (VAR_7, VAR_5);
  FUNC_0 (VAR_5);
  FUNC_9 (VAR_7);
  if (VAR_6)
    {
      FUNC_9 (VAR_6);
    }
  return 0;
}
