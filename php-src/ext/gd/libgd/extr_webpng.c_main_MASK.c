
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef int outFn ;
typedef TYPE_1__* gdImagePtr ;
struct TYPE_17__ {scalar_t__ trueColor; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 () ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,...) ;
 scalar_t__ FUNC_27 (char*,char*) ;
 int FUNC_28 (char*,int,char*,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_29 (char*,char*) ;
 int FUNC_30 (char*) ;

int
FUNC_31 (int VAR_4, char **VAR_5)
{
  FILE *VAR_6;
  FILE *VAR_7;
  char VAR_8[20];
  int VAR_9 = 0;


  gdImagePtr VAR_10 = 0;
  int VAR_11;


  int VAR_12 = 1;


  int VAR_13 = 0;


  if (VAR_4 < 2 || !FUNC_29 (VAR_5[1], "--help"))
    {
      VAR_12 = 1;
      goto usage;
    }


  if (FUNC_29 ("-", VAR_5[VAR_4 - 1]) == 0)
    {
      VAR_9 = 1;
      VAR_6 = VAR_2;
    }
  else
    {
      VAR_6 = FUNC_3 (VAR_5[VAR_4 - 1], "rb");
    }
  if (!VAR_6)
    {
      FUNC_4 (VAR_1,
        "Error: can't open file %s.\n", VAR_5[VAR_4 - 1]);
      FUNC_1 (1);
    }

  VAR_10 = FUNC_9 (VAR_6);
  FUNC_2 (VAR_6);

  if (!VAR_10)
    {
      FUNC_4 (VAR_1,
        "Error: %s is not a valid PNG file.\n", VAR_5[VAR_4 - 1]);
      FUNC_1 (1);
    }

  for (VAR_11 = 1; (VAR_11 < (VAR_4 - 1)); VAR_11++)
    {

      if (!FUNC_29 (VAR_5[VAR_11], "--help"))
 {

   VAR_12 = 1;
   goto usage;
 }
      else if (!FUNC_29 (VAR_5[VAR_11], "-i"))
 {
   if (VAR_11 == (VAR_4 - 2))
     {
       FUNC_4 (VAR_1,
         "Error: -i specified without y or n.\n");
       VAR_12 = 1;
       goto usage;
     }
   if (!FUNC_29 (VAR_5[VAR_11 + 1], "y"))
     {

       FUNC_15 (VAR_10, 1);
     }
   else if (!FUNC_29 (VAR_5[VAR_11 + 1], "n"))
     {

       FUNC_15 (VAR_10, 0);
     }
   else
     {
       FUNC_4 (VAR_1,
         "Error: -i specified without y or n.\n");
       VAR_12 = 1;
       goto usage;
     }
   VAR_11++;
   VAR_12 = 0;
   VAR_13 = 1;
 }
      else if (!FUNC_29 (VAR_5[VAR_11], "-t"))
 {

   int VAR_14;
   if (VAR_11 == (VAR_4 - 2))
     {
       FUNC_4 (VAR_1,
         "Error: -t specified without a color table index.\n");
       VAR_12 = 1;
       goto usage;
     }
   if (!FUNC_29 (VAR_5[VAR_11 + 1], "none"))
     {

       FUNC_7 (VAR_10, -1);
     }
   else
     {

       VAR_14 = FUNC_0 (VAR_5[VAR_11 + 1]);
       FUNC_7 (VAR_10, VAR_14);
     }
   VAR_11++;
   VAR_13 = 1;
   VAR_12 = 0;
 }
      else if (!FUNC_29 (VAR_5[VAR_11], "-l"))
 {

   int VAR_15;
   if (!VAR_10->trueColor)
     {

       FUNC_26 ("Index	Red	Green	Blue Alpha\n");
       for (VAR_15 = 0; (VAR_15 < FUNC_8 (VAR_10)); VAR_15++)
  {

    FUNC_26 ("%d	%d	%d	%d	%d\n",
     VAR_15,
     FUNC_17 (VAR_10, VAR_15),
     FUNC_14 (VAR_10, VAR_15),
     FUNC_6 (VAR_10, VAR_15),
     FUNC_5 (VAR_10, VAR_15));
  }
     }
   else
     {
       FUNC_26 ("Truecolor image, no palette entries to list.\n");
     }
   VAR_12 = 0;
 }
      else if (!FUNC_29 (VAR_5[VAR_11], "-d"))
 {

   int VAR_16;
   FUNC_26 ("Width: %d Height: %d Colors: %d\n",
    FUNC_18 (VAR_10), FUNC_19 (VAR_10),
    FUNC_8 (VAR_10));
   VAR_16 = FUNC_13 (VAR_10);
   if (VAR_16 != (-1))
     {
    FUNC_26 ("First 100%% transparent index: %d\n", VAR_16);
     }
   else
     {

    FUNC_26 ("First 100%% transparent index: none\n");
     }
   if (FUNC_11 (VAR_10))
     {
       FUNC_26 ("Interlaced: yes\n");
     }
   else
     {
       FUNC_26 ("Interlaced: no\n");
     }
   VAR_12 = 0;
 }
  else if (!FUNC_29(VAR_5[VAR_11], "-a"))
  {
   int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;

   VAR_17 = FUNC_18(VAR_10);
   VAR_18 = FUNC_19(VAR_10);

   FUNC_26("alpha channel information:\n");

   if (VAR_10->trueColor) {
    for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
     for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
      VAR_22 = FUNC_12(VAR_10, VAR_19, VAR_20);
      VAR_21 = FUNC_20(VAR_22);

      if (VAR_21 > VAR_0) {

       FUNC_26 ("%d	%d	%d	%d\n",
         FUNC_23(VAR_22),
         FUNC_22(VAR_22),
         FUNC_21(VAR_22),
         VAR_21);
       VAR_23++;
      }

     }
    }
   }
   else
    FUNC_26("NOT a true color image\n");
   VAR_12 = 0;
   FUNC_26("%d alpha channels\n", VAR_23);

  }
      else
 {
   FUNC_4 (VAR_1, "Unknown argument: %s\n", VAR_5[VAR_11]);
   break;
 }
    }
usage:
  if (VAR_12)
    {

      FUNC_4 (VAR_1,
   "Usage: webpng [-i y|n ] [-l] [-t index|none ] [-d] pngname.png\n"

        "  -i [y|n]   Turns on/off interlace\n"
        "  -l         Prints the table of color indexes\n"
        "  -t [index] Set the transparent color to the specified index (0-255 or \"none\")\n"
        "  -d         Reports the dimensions and other characteristics of the image.\n"
    "  -a         Prints all alpha channels that are not 100%% opaque.\n"
        "\n"
        "If you specify '-' as the input file, stdin/stdout will be used input/output.\n"
 );
    }
  if (VAR_13)
    {
      if (VAR_9)
 {
   VAR_7 = VAR_3;
 }
      else
 {



   FUNC_28 (VAR_8, sizeof(VAR_8), "webpng.tmp%d", FUNC_24 ());
   VAR_7 = FUNC_3 (VAR_8, "wb");

   if (!VAR_7)
     {
       FUNC_4 (VAR_1,
         "Unable to write to %s -- exiting\n", VAR_8);
       FUNC_1 (1);
     }
 }


      FUNC_16 (VAR_10, VAR_7);

      if (!VAR_9)
 {
   FUNC_2 (VAR_7);

   FUNC_30 (VAR_5[VAR_4 - 1]);

   if (FUNC_27 (VAR_8, VAR_5[VAR_4 - 1]) != 0)
     {
       FUNC_25 ("rename");
       FUNC_1 (1);
     }
 }
    }

  if (VAR_10)
    {
      FUNC_10 (VAR_10);
    }

  return 0;
}
