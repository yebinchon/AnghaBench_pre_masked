
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double Min; double Peak; scalar_t__ n; } ;


 int FUNC_0 (int *,int *,int ,int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int *) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int *,int ,char*) ;
 int FUNC_5 (int *,int *,int ,char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,char*) ;
 double FUNC_10 (TYPE_1__*) ;
 int VAR_6 ;
 double FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 char* VAR_15 ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_18 (char*,double,double,double,double,double) ;
 int VAR_17 ;

int FUNC_19(int VAR_18, char* VAR_19[])
{
      int VAR_20;

      VAR_12 = VAR_13 = VAR_14 = ((void*)0);

      FUNC_9(((void*)0), "tiffdiff");

      FUNC_7(VAR_18, VAR_19);

      if ((VAR_18 - VAR_17) != 2) {

              FUNC_8();
              }

      FUNC_14(VAR_3);
      FUNC_15(VAR_4);

      VAR_12 = FUNC_13(VAR_19[VAR_17], "r");
      if (VAR_12 == ((void*)0)) FUNC_6("Unable to open '%s'", VAR_19[VAR_17]);

      VAR_13 = FUNC_13(VAR_19[VAR_17+1], "r");
      if (VAR_13 == ((void*)0)) FUNC_6("Unable to open '%s'", VAR_19[VAR_17+1]);

      if (VAR_15) {

          VAR_14 = FUNC_13(VAR_15, "w");
          if (VAR_14 == ((void*)0)) FUNC_6("Unable to create '%s'", VAR_15);

      }


      FUNC_0(VAR_12, VAR_13, VAR_10, VAR_6, "Planar Config");
      FUNC_0(VAR_12, VAR_13, VAR_7, 8, "8 bit per sample");

      FUNC_4(VAR_12, VAR_13, VAR_9, "Image width");
      FUNC_4(VAR_12, VAR_13, VAR_8, "Image length");

      FUNC_5(VAR_12, VAR_13, VAR_11, "Samples per pixel");


      VAR_16 = FUNC_17(((void*)0));

      FUNC_1(&VAR_5);
      for (VAR_20=0; VAR_20 < 4; VAR_20++)
            FUNC_1(&VAR_1[VAR_20]);

      if (!FUNC_2(VAR_12, VAR_13, VAR_14))
                FUNC_6("Error comparing images");

      if (VAR_0) {
            FUNC_3(VAR_19[VAR_17], VAR_19[VAR_17+1]);
      }
      else {

        double VAR_21 = 100.0 * ((255.0 - FUNC_10(&VAR_5)) / 255.0);

        FUNC_18("Digital counts  %g%% equal. mean %g, min %g, max %g, Std %g\n", VAR_21, FUNC_10(&VAR_5),
                                                                                VAR_5.Min,
                                                                                VAR_5.Peak,
                                                                                FUNC_11(&VAR_5));

        if (VAR_2.n > 0) {

            VAR_21 = 100.0 * ((255.0 - FUNC_10(&VAR_2)) / 255.0);

            FUNC_18("dE Colorimetric %g%% equal. mean %g, min %g, max %g, Std %g\n", VAR_21, FUNC_10(&VAR_2),
                                                                                    VAR_2.Min,
                                                                                    VAR_2.Peak,
                                                                                    FUNC_11(&VAR_2));
        }

      }

      if (VAR_16) FUNC_16(((void*)0), VAR_16);
      if (VAR_12) FUNC_12(VAR_12);
      if (VAR_13) FUNC_12(VAR_13);
      if (VAR_14) FUNC_12(VAR_14);

      return 0;
}
