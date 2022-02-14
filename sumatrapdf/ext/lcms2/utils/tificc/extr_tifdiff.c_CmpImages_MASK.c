
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef scalar_t__ cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef scalar_t__ cmsHTRANSFORM ;
typedef scalar_t__ cmsHPROFILE ;
typedef int cmsCIELab ;
typedef int TIFF ;


 int FUNC_0 (int *,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,scalar_t__*,scalar_t__*) ;




 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__*,int,int ) ;
 int FUNC_10 (scalar_t__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,scalar_t__) ;
 double FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *,scalar_t__,scalar_t__*,int *,int) ;
 double FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (double) ;
 int FUNC_18 (double) ;

__attribute__((used)) static
int FUNC_19(TIFF* VAR_13, TIFF* VAR_14, TIFF* VAR_15)
{
    cmsUInt8Number* VAR_16, *VAR_17, *VAR_18=((void*)0);
    int VAR_19, VAR_20, VAR_21 = 0, VAR_22 = 0;
    uint16 VAR_23;
    double VAR_24 = 0;
    double VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    int VAR_32 = 0;
    cmsHPROFILE VAR_33 = 0, VAR_34 = 0;
    cmsHTRANSFORM VAR_35 = 0, VAR_36 = 0;
    cmsUInt32Number VAR_37, VAR_38;



      FUNC_4(VAR_13, VAR_10, &VAR_23);
      FUNC_4(VAR_13, VAR_9, &VAR_21);
      FUNC_4(VAR_13, VAR_8, &VAR_22);
      FUNC_4(VAR_13, VAR_12, &VAR_1);

      VAR_37 = FUNC_2(VAR_13, &VAR_33, &VAR_35);
      VAR_38 = FUNC_2(VAR_14, &VAR_34, &VAR_36);



      VAR_16 = (cmsUInt8Number*)FUNC_11(FUNC_6(VAR_13));
      VAR_17 = (cmsUInt8Number*)FUNC_11(FUNC_6(VAR_14));

      if (VAR_15) {

           FUNC_7(VAR_15, VAR_10, 131);
           FUNC_7(VAR_15, VAR_7, VAR_0);
           FUNC_7(VAR_15, VAR_11, VAR_5);

           FUNC_7(VAR_15, VAR_9, VAR_21);
           FUNC_7(VAR_15, VAR_8, VAR_22);

           FUNC_7(VAR_15, VAR_12, 1);
           FUNC_7(VAR_15, VAR_6, 8);

           VAR_18 = (cmsUInt8Number*)FUNC_11(FUNC_6(VAR_15));
      }



      for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {

        if (FUNC_5(VAR_13, VAR_16, VAR_19, 0) < 0) goto Error;
        if (FUNC_5(VAR_14, VAR_17, VAR_19, 0) < 0) goto Error;


        for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {


            switch (VAR_23) {

            case 130:
            case 131:

                    VAR_24 = FUNC_16(VAR_17[VAR_20] - VAR_16[VAR_20]);

                    FUNC_0(&VAR_2[0], VAR_24);
                    FUNC_0(&VAR_4, VAR_24);
                    break;

            case 129:

                    {
                        int VAR_39 = 3 * VAR_20;

                        VAR_25 = FUNC_16(VAR_17[VAR_39+0] - VAR_16[VAR_39+0]);
                        VAR_26 = FUNC_16(VAR_17[VAR_39+1] - VAR_16[VAR_39+1]);
                        VAR_27 = FUNC_16(VAR_17[VAR_39+2] - VAR_16[VAR_39+2]);

                        VAR_24 = FUNC_18(VAR_25 * VAR_25 + VAR_26 * VAR_26 + VAR_27 * VAR_27) / FUNC_18(3.);
                    }

                    FUNC_0(&VAR_2[0], VAR_25);
                    FUNC_0(&VAR_2[1], VAR_26);
                    FUNC_0(&VAR_2[2], VAR_27);
                    FUNC_0(&VAR_4, VAR_24);
                    break;

            case 128:

                {
                        int VAR_40 = 4 * VAR_20;

                        VAR_28 = FUNC_16(VAR_17[VAR_40+0] - VAR_16[VAR_40+0]);
                        VAR_29 = FUNC_16(VAR_17[VAR_40+1] - VAR_16[VAR_40+1]);
                        VAR_30 = FUNC_16(VAR_17[VAR_40+2] - VAR_16[VAR_40+2]);
                        VAR_31 = FUNC_16(VAR_17[VAR_40+3] - VAR_16[VAR_40+3]);

                        VAR_24 = FUNC_18(VAR_28 * VAR_28 + VAR_29 * VAR_29 + VAR_30 * VAR_30 + VAR_31 * VAR_31) / 2.;
                    }
                    FUNC_0(&VAR_2[0], VAR_28);
                    FUNC_0(&VAR_2[1], VAR_29);
                    FUNC_0(&VAR_2[2], VAR_30);
                    FUNC_0(&VAR_2[3], VAR_31);
                    FUNC_0(&VAR_4, VAR_24);
                    break;

            default:
                    FUNC_1("Unsupported channels: %d", VAR_1);
            }


            if (VAR_35 && VAR_36) {


                cmsCIELab VAR_41, VAR_42;
                size_t VAR_43 = VAR_20 * FUNC_3(VAR_37);
                size_t VAR_44 = VAR_20 * FUNC_3(VAR_38);

                FUNC_15(((void*)0), VAR_35, &VAR_16[VAR_43], &VAR_41, 1);
                FUNC_15(((void*)0), VAR_36, &VAR_17[VAR_44], &VAR_42, 1);

                VAR_24 = FUNC_14(((void*)0), &VAR_41, &VAR_42);
                FUNC_0(&VAR_3, VAR_24);
            }


            if (VAR_15) {
                VAR_18[VAR_20] = (cmsUInt8Number) FUNC_17(VAR_24 + 0.5);
        }

        }

        if (VAR_15) {

                if (FUNC_9(VAR_15, VAR_18, VAR_19, 0) < 0) goto Error;
        }


      }

     VAR_32 = 1;

Error:

     if (VAR_33) FUNC_12(((void*)0), VAR_33);
     if (VAR_34) FUNC_12(((void*)0), VAR_34);
     if (VAR_35) FUNC_13(((void*)0), VAR_35);
     if (VAR_36) FUNC_13(((void*)0), VAR_36);
      FUNC_10(VAR_16); FUNC_10(VAR_17);
      if (VAR_15) {
           FUNC_8(VAR_15);
          if (VAR_18 != ((void*)0)) FUNC_10(VAR_18);
      }
      return VAR_32;
}
