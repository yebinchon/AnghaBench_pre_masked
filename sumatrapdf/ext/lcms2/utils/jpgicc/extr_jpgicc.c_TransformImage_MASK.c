
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_8 (int ,char*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *,int *) ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_10 (int *,int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int *,scalar_t__) ;
 char* VAR_13 ;
 int FUNC_14 (int *,int *) ;
 int * FUNC_15 (int *,int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_16 (int *,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_17 (int *,int *) ;
 int * FUNC_18 (char*,char*) ;
 int * FUNC_19 (int *,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_28 (int *,int **,int *) ;
 int VAR_21 ;

__attribute__((used)) static
int FUNC_29(char *VAR_22, char *VAR_23)
{
       cmsHPROFILE VAR_24, VAR_25, VAR_26;
       cmsHTRANSFORM VAR_27;
       cmsUInt32Number VAR_28, VAR_29;
       int VAR_30;
       cmsUInt32Number VAR_31 = 0;
       cmsUInt32Number VAR_32;
       cmsUInt8Number* VAR_33;


       FUNC_20(VAR_7);

       if (VAR_1) {

            VAR_31 |= VAR_14;
       }


       switch (VAR_9) {

       case 0: VAR_31 |= VAR_18; break;
       case 2: VAR_31 |= VAR_16; break;
       case 3: VAR_31 |= VAR_17; break;
       default:;
       }


       if (VAR_4) {
            VAR_31 |= VAR_15;
            FUNC_21(VAR_0);
       }


       VAR_28 = FUNC_6();

        if (VAR_20) {

            VAR_24 = FUNC_18(VAR_22, "r");
            VAR_25 = ((void*)0);
            VAR_26 = ((void*)0);
       }
        else {

        if (!VAR_5 && FUNC_28(&VAR_3, &VAR_33, &VAR_32))
        {
              VAR_24 = FUNC_19(VAR_33, VAR_32);

               if (VAR_12) {

                  FUNC_24(VAR_21, " (Embedded profile found)\n");
                  FUNC_9(((void*)0), VAR_24);
                  FUNC_23(VAR_21);
              }

               if (VAR_24 != ((void*)0) && VAR_11 != ((void*)0))
                          FUNC_10(VAR_33, VAR_32, VAR_11);

              FUNC_25(VAR_33);
        }
        else
        {

            if (VAR_22 == ((void*)0) && FUNC_11(VAR_28) == VAR_8)
                VAR_22 = "*Lab";

            if (VAR_22 != ((void*)0) && FUNC_22(VAR_22, "*lab") == 0)
                VAR_24 = FUNC_1();
            else
                VAR_24 = FUNC_8(0, VAR_22);
       }

        if (VAR_23 != ((void*)0) && FUNC_22(VAR_23, "*lab") == 0)
            VAR_25 = FUNC_2();
        else
        VAR_25 = FUNC_8(0, VAR_23);

       VAR_26 = ((void*)0);
       if (VAR_13 != ((void*)0)) {

           VAR_26 = FUNC_8(0, VAR_13);
           if (VAR_26 == ((void*)0)) {
            FUNC_4("Proofing profile couldn't be read.");
           }
           VAR_31 |= VAR_19;
          }
       }

        if (!VAR_24)
            FUNC_4("Input profile couldn't be read.");
        if (!VAR_20 && !VAR_25)
            FUNC_4("Output profile couldn't be read.");


       if (FUNC_17(((void*)0), VAR_24) != FUNC_13(((void*)0), FUNC_11(VAR_28)))
              FUNC_4("Input profile is not operating in proper color space");




        if (VAR_20) {
            VAR_30 = FUNC_5(VAR_24);
        }
        else {
            VAR_30 = FUNC_7(VAR_25);
        }

       FUNC_27(&VAR_3, &VAR_2);

       FUNC_12(VAR_30);

       VAR_29 = FUNC_0(VAR_28, VAR_30);


       VAR_27 = FUNC_15(VAR_24, VAR_28,
                                          VAR_25, VAR_29,
                                          VAR_26, VAR_6,
                                          VAR_10, VAR_31);
       if (VAR_27 == ((void*)0))
                 FUNC_4("Cannot transform by using the profiles");

       FUNC_3(VAR_27, VAR_30);


       FUNC_26(&VAR_3, &VAR_2);

       FUNC_16(((void*)0), VAR_27);
       FUNC_14(((void*)0), VAR_24);
       FUNC_14(((void*)0), VAR_25);
       if (VAR_26) FUNC_14(((void*)0), VAR_26);

       return 1;
}
