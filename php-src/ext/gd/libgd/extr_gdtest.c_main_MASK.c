
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_4__ ;
typedef struct TYPE_50__ TYPE_3__ ;
typedef struct TYPE_49__ TYPE_2__ ;
typedef struct TYPE_48__ TYPE_1__ ;


typedef int of ;
struct TYPE_48__ {int * context; int source; } ;
typedef TYPE_1__ gdSource ;
struct TYPE_49__ {int * context; int sink; } ;
typedef TYPE_2__ gdSink ;
typedef TYPE_3__* gdImagePtr ;
typedef TYPE_4__* gdIOCtxPtr ;
struct TYPE_51__ {int (* gd_free ) (TYPE_4__*) ;} ;
struct TYPE_50__ {int colorsTotal; } ;
typedef int FILE ;


 int FUNC_0 (char*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int,int ,int) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,int,int,int,int,int,int,int) ;
 int FUNC_10 (TYPE_3__*,TYPE_3__*,int,int,int,int,int,int,int) ;
 TYPE_3__* FUNC_11 (int,int) ;
 TYPE_3__* FUNC_12 (int *) ;
 TYPE_3__* FUNC_13 (int *) ;
 TYPE_3__* FUNC_14 (TYPE_4__*) ;
 TYPE_3__* FUNC_15 (int *,int,int,int,int) ;
 TYPE_3__* FUNC_16 (TYPE_4__*) ;
 TYPE_3__* FUNC_17 (int *) ;
 TYPE_3__* FUNC_18 (int *) ;
 TYPE_3__* FUNC_19 (TYPE_4__*) ;
 TYPE_3__* FUNC_20 (TYPE_1__*) ;
 TYPE_3__* FUNC_21 (int *) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*,int,int,int,int,int) ;
 int FUNC_24 (TYPE_3__*,int *) ;
 int FUNC_25 (TYPE_3__*,int *,int,int) ;
 void* FUNC_26 (TYPE_3__*,int,int,int*) ;
 void* FUNC_27 (TYPE_3__*,int*) ;
 int FUNC_28 (TYPE_3__*,int) ;
 int FUNC_29 (TYPE_3__*,int *,int) ;
 int FUNC_30 (TYPE_3__*,int *) ;
 void* FUNC_31 (TYPE_3__*,int*) ;
 int FUNC_32 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_33 (TYPE_3__*,int) ;
 int FUNC_34 (TYPE_3__*,int,int *) ;
 TYPE_4__* FUNC_35 (int,void*) ;
 int FUNC_36 (char*,...) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (char*,int,char*,char*) ;
 int VAR_2 ;
 int FUNC_39 (TYPE_4__*) ;
 int FUNC_40 (TYPE_4__*) ;
 int FUNC_41 (TYPE_4__*) ;
 int FUNC_42 (char*) ;

int
FUNC_43 (int VAR_3, char **VAR_4)
{
  gdImagePtr VAR_5, VAR_6, VAR_7, VAR_8;
  FILE *VAR_9, *VAR_10;
  void *VAR_11;
  int VAR_12;
  gdIOCtxPtr VAR_13;
  char VAR_14[256];
  int VAR_15, VAR_16;
  gdSource VAR_17;
  gdSink VAR_18;
  int VAR_19;
  int VAR_20;
  if (VAR_3 != 2)
    {
      FUNC_4 (VAR_2, "Usage: gdtest filename.png\n");
      FUNC_1 (1);
    }
  VAR_9 = FUNC_3 (VAR_4[1], "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "Input file does not exist!\n");
      FUNC_1 (1);
    }
  VAR_5 = FUNC_18 (VAR_9);

  FUNC_37 (VAR_9);
  VAR_6 = FUNC_18 (VAR_9);

  FUNC_2 (VAR_9);

  FUNC_36 ("Reference File has %d Palette entries\n", VAR_6->colorsTotal);

  FUNC_0 ("Initial Versions", VAR_6, VAR_5);





  FUNC_38 (VAR_14, sizeof(VAR_14), "%s.png", VAR_4[1]);
  VAR_10 = FUNC_3 (VAR_14, "wb");
  FUNC_30 (VAR_5, VAR_10);
  FUNC_2 (VAR_10);

  VAR_9 = FUNC_3 (VAR_14, "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "PNG Output file does not exist!\n");
      FUNC_1 (1);
    }
  VAR_7 = FUNC_18 (VAR_9);
  FUNC_2 (VAR_9);

  FUNC_0 ("GD->PNG File->GD", VAR_6, VAR_7);

  FUNC_42 (VAR_14);
  FUNC_22 (VAR_7);

  VAR_11 = FUNC_31 (VAR_5, &VAR_12);
  VAR_13 = FUNC_35 (VAR_12, VAR_11);
  VAR_7 = FUNC_19 (VAR_13);

  FUNC_0 ("GD->PNG ptr->GD", VAR_6, VAR_7);

  FUNC_22 (VAR_7);
  VAR_13->gd_free (VAR_13);





  FUNC_38 (VAR_14, sizeof(VAR_14), "%s.gd2", VAR_4[1]);
  VAR_10 = FUNC_3 (VAR_14, "wb");
  FUNC_25 (VAR_5, VAR_10, 128, 2);
  FUNC_2 (VAR_10);

  VAR_9 = FUNC_3 (VAR_14, "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "GD2 Output file does not exist!\n");
      FUNC_1 (1);
    }
  VAR_7 = FUNC_13 (VAR_9);
  FUNC_2 (VAR_9);

  FUNC_0 ("GD->GD2 File->GD", VAR_6, VAR_7);

  FUNC_42 (VAR_14);
  FUNC_22 (VAR_7);

  VAR_11 = FUNC_26 (VAR_5, 128, 2, &VAR_12);

  VAR_13 = FUNC_35 (VAR_12, VAR_11);

  VAR_7 = FUNC_14 (VAR_13);


  FUNC_0 ("GD->GD2 ptr->GD", VAR_6, VAR_7);

  FUNC_22 (VAR_7);
  VAR_13->gd_free (VAR_13);





  FUNC_38 (VAR_14, sizeof(VAR_14), "%s.gd", VAR_4[1]);
  VAR_10 = FUNC_3 (VAR_14, "wb");
  FUNC_24 (VAR_5, VAR_10);
  FUNC_2 (VAR_10);

  VAR_9 = FUNC_3 (VAR_14, "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "GD Output file does not exist!\n");
      FUNC_1 (1);
    }
  VAR_7 = FUNC_12 (VAR_9);
  FUNC_2 (VAR_9);

  FUNC_0 ("GD->GD File->GD", VAR_6, VAR_7);

  FUNC_42 (VAR_14);
  FUNC_22 (VAR_7);

  VAR_11 = FUNC_27 (VAR_5, &VAR_12);

  VAR_13 = FUNC_35 (VAR_12, VAR_11);

  VAR_7 = FUNC_16 (VAR_13);


  FUNC_0 ("GD->GD ptr->GD", VAR_6, VAR_7);

  FUNC_22 (VAR_7);
  VAR_13->gd_free (VAR_13);





  VAR_9 = FUNC_3 (VAR_4[1], "rb");

  VAR_17.source = VAR_0;
  VAR_17.context = VAR_9;
  VAR_7 = FUNC_20 (&VAR_17);
  FUNC_2 (VAR_9);

  if (VAR_7 == ((void*)0))
    {
      FUNC_36 ("GD Source: ERROR Null returned by gdImageCreateFromPngSource\n");
    }
  else
    {
      FUNC_0 ("GD Source", VAR_6, VAR_7);
      FUNC_22 (VAR_7);
    };






  FUNC_38 (VAR_14, sizeof(VAR_14), "%s.snk", VAR_4[1]);
  VAR_10 = FUNC_3 (VAR_14, "wb");
  VAR_18.sink = VAR_1;
  VAR_18.context = VAR_10;
  FUNC_32 (VAR_5, &VAR_18);
  FUNC_2 (VAR_10);
  VAR_9 = FUNC_3 (VAR_14, "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "GD Sink: ERROR - GD Sink Output file does not exist!\n");
    }
  else
    {
      VAR_7 = FUNC_18 (VAR_9);
      FUNC_2 (VAR_9);

      FUNC_0 ("GD Sink", VAR_6, VAR_7);
      FUNC_22 (VAR_7);
    };

  FUNC_42 (VAR_14);




  VAR_9 = FUNC_3 ("test/gdtest_200_300_150_100.png", "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "gdtest_200_300_150_100.png does not exist!\n");
      FUNC_1 (1);
    }
  VAR_7 = FUNC_18 (VAR_9);
  FUNC_2 (VAR_9);


  VAR_9 = FUNC_3 ("test/gdtest.gd2", "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "gdtest.gd2 does not exist!\n");
      FUNC_1 (1);
    }
  VAR_8 = FUNC_15 (VAR_9, 200, 300, 150, 100);
  FUNC_2 (VAR_9);

  FUNC_0 ("GD2Part (gdtest_200_300_150_100.png, gdtest.gd2(part))", VAR_7, VAR_8);

  FUNC_22 (VAR_7);
  FUNC_22 (VAR_8);




  VAR_9 = FUNC_3 ("test/gdtest.png", "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "gdtest.png does not exist!\n");
      FUNC_1 (1);
    }
  VAR_7 = FUNC_18 (VAR_9);
  FUNC_2 (VAR_9);

  VAR_8 = FUNC_11 (100, 60);
  VAR_15 = FUNC_6 (VAR_8, 255, 0, 0);
  VAR_16 = FUNC_6 (VAR_8, 0, 0, 255);
  FUNC_23 (VAR_8, 0, 0, 49, 30, VAR_15);
  FUNC_23 (VAR_8, 50, 30, 99, 59, VAR_16);

  FUNC_9 (VAR_7, VAR_8, 150, 200, 10, 10, 90, 50, 50);
  FUNC_9 (VAR_7, VAR_8, 180, 70, 10, 10, 90, 50, 50);

  FUNC_10 (VAR_7, VAR_8, 250, 160, 10, 10, 90, 50, 50);
  FUNC_10 (VAR_7, VAR_8, 80, 70, 10, 10, 90, 50, 50);

  FUNC_22 (VAR_8);

  VAR_9 = FUNC_3 ("test/gdtest_merge.png", "rb");
  if (!VAR_9)
    {
      FUNC_4 (VAR_2, "gdtest_merge.png does not exist!\n");
      FUNC_1 (1);
    }
  VAR_8 = FUNC_18 (VAR_9);
  FUNC_2 (VAR_9);

  FUNC_36 ("[Merged Image has %d colours]\n", VAR_7->colorsTotal);
  FUNC_0 ("Merged (gdtest.png, gdtest_merge.png)", VAR_7, VAR_8);

  FUNC_22 (VAR_7);
  FUNC_22 (VAR_8);
  FUNC_4 (VAR_2, "NOTE: the WBMP output image will NOT match the original unless the original\n"
    "is also black and white. This is OK!\n");
  VAR_19 = FUNC_7 (VAR_5, 0, 0, 0);
  FUNC_4 (VAR_2, "Foreground index is %d\n", VAR_19);
  if (VAR_19 == -1)
    {
      FUNC_4 (VAR_2, "Source image has no colors, skipping wbmp test.\n");
    }
  else
    {
      VAR_10 = FUNC_3 ("test/gdtest.wbmp", "wb");
      if (!VAR_10)
 {
   FUNC_4 (VAR_2, "Can't create file test/gdtest.wbmp.\n");
   FUNC_1 (1);
 }
      FUNC_34 (VAR_5, VAR_19, VAR_10);
      FUNC_2 (VAR_10);
      VAR_9 = FUNC_3 ("test/gdtest.wbmp", "rb");
      if (!VAR_9)
 {
   FUNC_4 (VAR_2, "Can't open file test/gdtest.wbmp.\n");
   FUNC_1 (1);
 }
      VAR_7 = FUNC_21 (VAR_9);
      FUNC_4 (VAR_2, "WBMP has %d colors\n", FUNC_8 (VAR_7));
      FUNC_4 (VAR_2, "WBMP colors are:\n");
      for (VAR_20 = 0; (VAR_20 < FUNC_8 (VAR_7)); VAR_20++)
 {
   FUNC_4 (VAR_2, "%02X%02X%02X\n",
     FUNC_33 (VAR_7, VAR_20),
     FUNC_28 (VAR_7, VAR_20),
     FUNC_5 (VAR_7, VAR_20));
 }
      FUNC_2 (VAR_9);
      if (!VAR_7)
 {
   FUNC_4 (VAR_2, "gdImageCreateFromWBMP failed.\n");
   FUNC_1 (1);
 }
      FUNC_0 ("WBMP test (gdtest.png, gdtest.wbmp)", VAR_6, VAR_7);
      VAR_10 = FUNC_3 ("test/gdtest_wbmp_to_png.png", "wb");
      if (!VAR_10)
 {
   FUNC_4 (VAR_2, "Can't create file test/gdtest_wbmp_to_png.png.\n");
   FUNC_1 (1);
 }
      FUNC_30 (VAR_7, VAR_10);
      FUNC_2 (VAR_10);
      FUNC_22 (VAR_7);
    }
  FUNC_22 (VAR_5);
  FUNC_22 (VAR_6);

  return 0;
}
