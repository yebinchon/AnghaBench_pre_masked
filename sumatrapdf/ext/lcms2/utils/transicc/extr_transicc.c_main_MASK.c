
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsFloat64Number ;
typedef int * cmsContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char**) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 double VAR_1 ;
 int FUNC_4 (int *,int,char**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int *) ;
 int VAR_2 ;
 int FUNC_13 (int *,int ,int *,int *,int) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,double) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_18(int VAR_11, char *VAR_12[])
{
    cmsUInt16Number VAR_13[VAR_3];
    cmsFloat64Number VAR_14[VAR_3];
    cmsFloat64Number VAR_15[VAR_3];
    cmsContext VAR_16 = ((void*)0);

    int VAR_17 = 0;

    FUNC_17(VAR_9, "LittleCMS ColorSpace conversion calculator - 4.3 [LittleCMS %2.2f]\n", VAR_1 / 1000.0);

    FUNC_3(VAR_16, "transicc");

    VAR_2 = 1;

    if (VAR_11 == 1) {

        FUNC_2();
        return 0;
    }

    FUNC_1(VAR_16, VAR_11, VAR_12);


    if (!FUNC_5(VAR_16)) return 1;


    FUNC_4(VAR_16, VAR_11, VAR_12);


    for(;;) {

        if (VAR_4 != ((void*)0)) {

            if (VAR_17 >= VAR_8) break;
            FUNC_11(VAR_16, VAR_17++, VAR_15);

        } else {

            if (FUNC_16(VAR_10)) break;
            FUNC_12(VAR_16, VAR_15);

        }

        if (VAR_7)
            FUNC_13(VAR_16, VAR_6, VAR_15, VAR_14, 1);
        else
            FUNC_13(VAR_16, VAR_6, VAR_15, VAR_13, 1);


        if (VAR_5 != ((void*)0)) {

            FUNC_10(VAR_16, VAR_14);
        }
        else {

            if (VAR_7) {
                FUNC_7(VAR_16, VAR_14); FUNC_9(VAR_16, VAR_15);
            }
            else {
                FUNC_6(VAR_16, VAR_13); FUNC_8(VAR_16, VAR_15);
            }

        }
    }



    FUNC_0(VAR_16);

    if (VAR_4)
        FUNC_14(VAR_16, VAR_4);

    if (VAR_5) {
        FUNC_15(VAR_16, VAR_5, VAR_0);
        FUNC_14(VAR_16, VAR_5);
    }


    return 0;
}
