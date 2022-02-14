
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* memory_infop ;
struct TYPE_3__ {struct TYPE_3__* next; scalar_t__ pointer; scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_13 ;
 char* VAR_14 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ VAR_17 ;
 char* VAR_18 ;
 float VAR_19 ;
 float VAR_20 ;
 float VAR_21 ;
 float VAR_22 ;
 float VAR_23 ;
 int FUNC_8 (char*,char*) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;

int
FUNC_9(int VAR_27, char *VAR_28[])
{
   int VAR_29 = 0;
   int VAR_30 = 0;

   FUNC_2(VAR_4, "Testing libpng version %s\n", VAR_3);
   FUNC_2(VAR_4, "   with zlib   version %s\n", VAR_5);
   FUNC_2(VAR_4,"%s",FUNC_4(((void*)0)));

   FUNC_2(VAR_4," library (%lu):%d",
      (unsigned long)FUNC_3(),
      FUNC_5(((void*)0)));

   FUNC_2(VAR_4," pngtest (%lu):%d", (unsigned long)VAR_2,
      VAR_1);
   FUNC_2(VAR_4," png_sizeof(png_struct)=%ld, png_sizeof(png_info)=%ld\n",
                    (long)FUNC_6(VAR_15), (long)FUNC_6(VAR_13));
   if (FUNC_7(VAR_14, VAR_3))
   {
      FUNC_2(VAR_4,
         "Warning: versions are different between png.h and png.c\n");
      FUNC_2(VAR_4, "  png.h version: %s\n", VAR_3);
      FUNC_2(VAR_4, "  png.c version: %s\n\n", VAR_14);
      ++VAR_30;
   }

   if (VAR_27 > 1)
   {
      if (FUNC_7(VAR_28[1], "-m") == 0)
      {
         VAR_29 = 1;
         VAR_16 = 0;
      }
      else if (FUNC_7(VAR_28[1], "-mv") == 0 ||
               FUNC_7(VAR_28[1], "-vm") == 0 )
      {
         VAR_29 = 1;
         VAR_25 = 1;
         VAR_16 = 1;
      }
      else if (FUNC_7(VAR_28[1], "-v") == 0)
      {
         VAR_25 = 1;
         VAR_16 = 1;
         VAR_8 = VAR_28[2];
      }
      else
      {
         VAR_8 = VAR_28[1];
         VAR_16 = 0;
      }
   }

   if (!VAR_29 && VAR_27 == 3+VAR_25)
     VAR_11 = VAR_28[2+VAR_25];

   if ((!VAR_29 && VAR_27 > 3+VAR_25) || (VAR_29 && VAR_27 < 2))
   {
     FUNC_2(VAR_4,
       "usage: %s [infile.png] [outfile.png]\n\t%s -m {infile.png}\n",
        VAR_28[0], VAR_28[0]);
     FUNC_2(VAR_4,
       "  reads/writes one PNG file (without -m) or multiple files (-m)\n");
     FUNC_2(VAR_4,
       "  with -m %s is used as a temporary file\n", VAR_11);
     FUNC_1(1);
   }

   if (VAR_29)
   {
      int VAR_31;



      for (VAR_31=2; VAR_31<VAR_27; ++VAR_31)
      {



         int VAR_32;
         FUNC_2(VAR_4, "Testing %s:",VAR_28[VAR_31]);
         VAR_32 = FUNC_8(VAR_28[VAR_31], VAR_11);
         if (VAR_32 == 0)
         {




            FUNC_2(VAR_4, " PASS\n");
         }
         else
         {
            FUNC_2(VAR_4, " FAIL\n");
            VAR_30 += VAR_32;
         }
      }
   }
   else
   {
      int VAR_33;
      for (VAR_33=0; VAR_33<3; ++VAR_33)
      {
         int VAR_34;



         if (VAR_33 == 1) VAR_16 = 1;
         else if(VAR_25 == 0)VAR_16 = 0;
         if (VAR_33 == 0 || VAR_25 == 1 || VAR_30 != 0)
            FUNC_2(VAR_4, "Testing %s:",VAR_8);
         VAR_34 = FUNC_8(VAR_8, VAR_11);
         if(VAR_34 == 0)
         {
            if(VAR_25 == 1 || VAR_33 == 2)
            {







                FUNC_2(VAR_4, " PASS\n");
            }
         }
         else
         {
            if(VAR_25 == 0 && VAR_33 != 2)
               FUNC_2(VAR_4, "Testing %s:",VAR_8);
            FUNC_2(VAR_4, " FAIL\n");
            VAR_30 += VAR_34;
         }
       }
   }
   if (VAR_30 == 0)
      FUNC_2(VAR_4, "libpng passes test\n");
   else
      FUNC_2(VAR_4, "libpng FAILS test\n");
   return (int)(VAR_30 != 0);
}
