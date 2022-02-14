
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsVEC3 ;
typedef size_t cmsUInt32Number ;
typedef int cmsStage ;
typedef scalar_t__ cmsProfileClassSignature ;
typedef int cmsPipeline ;
typedef int cmsMAT3 ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef scalar_t__ cmsColorSpaceSignature ;
typedef int cmsBool ;


 int FUNC_0 (int ,int *,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,size_t,int *,size_t,int,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int ,size_t) ;
 int * FUNC_5 (int ,int ,size_t) ;
 int * FUNC_6 (int ,int ,size_t) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_9 (int ,scalar_t__) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int * FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int *,int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *,int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_17 (int ,int ,char*) ;
 int FUNC_18 (size_t) ;

__attribute__((used)) static
cmsPipeline* FUNC_19(cmsContext VAR_12,
                               cmsUInt32Number VAR_13,
                               cmsUInt32Number VAR_14[],
                               cmsHPROFILE VAR_15[],
                               cmsBool VAR_16[],
                               cmsFloat64Number VAR_17[],
                               cmsUInt32Number VAR_18)
{
    cmsPipeline* VAR_19 = ((void*)0);
    cmsPipeline* VAR_20;
    cmsHPROFILE VAR_21;
    cmsMAT3 VAR_22;
    cmsVEC3 VAR_23;
    cmsColorSpaceSignature VAR_24, VAR_25 = VAR_7, VAR_26;
    cmsProfileClassSignature VAR_27;
    cmsUInt32Number VAR_28, VAR_29;


    if (VAR_13 == 0) return ((void*)0);


    VAR_20 = FUNC_13(VAR_12, 0, 0);
    if (VAR_20 == ((void*)0)) return ((void*)0);

    VAR_26 = FUNC_10(VAR_12, VAR_15[0]);

    for (VAR_28=0; VAR_28 < VAR_13; VAR_28++) {

        cmsBool VAR_30, VAR_31;

        VAR_21 = VAR_15[VAR_28];
        VAR_27 = FUNC_11(VAR_12, VAR_21);
        VAR_30 = (VAR_27 == VAR_8 || VAR_27 == VAR_4 );


        if ((VAR_28 == 0) && !VAR_30) {
            VAR_31 = VAR_0;
        }
        else {

        VAR_31 = (VAR_26 != VAR_11) &&
                        (VAR_26 != VAR_7);
        }

        VAR_29 = VAR_14[VAR_28];

        if (VAR_31 || VAR_30) {

            VAR_24 = FUNC_10(VAR_12, VAR_21);
            VAR_25 = FUNC_12(VAR_12, VAR_21);
        }
        else {

            VAR_24 = FUNC_12(VAR_12, VAR_21);
            VAR_25 = FUNC_10(VAR_12, VAR_21);
        }

        if (!FUNC_1(VAR_24, VAR_26)) {

            FUNC_17(VAR_12, VAR_2, "ColorSpace mismatch");
            goto Error;
        }



        if (VAR_30 || ((VAR_27 == VAR_9) && (VAR_13 == 1))) {


            VAR_19 = FUNC_4(VAR_12, VAR_21, VAR_29);
            if (VAR_19 == ((void*)0)) goto Error;


             if (VAR_27 == VAR_4 && VAR_28 > 0) {
                if (!FUNC_2(VAR_12, VAR_28, VAR_15, VAR_29, VAR_16[VAR_28], VAR_17[VAR_28], &VAR_22, &VAR_23)) goto Error;
             }
             else {
                FUNC_3(VAR_12, &VAR_22);
                FUNC_8(VAR_12, &VAR_23, 0, 0, 0);
             }


            if (!FUNC_0(VAR_12, VAR_20, VAR_26, VAR_24, &VAR_22, &VAR_23)) goto Error;

        }
        else {

            if (VAR_31) {

                VAR_19 = FUNC_5(VAR_12, VAR_21, VAR_29);
                if (VAR_19 == ((void*)0)) goto Error;
            }
            else {


                VAR_19 = FUNC_6(VAR_12, VAR_21, VAR_29);
                if (VAR_19 == ((void*)0)) goto Error;


                if (!FUNC_2(VAR_12, VAR_28, VAR_15, VAR_29, VAR_16[VAR_28], VAR_17[VAR_28], &VAR_22, &VAR_23)) goto Error;
                if (!FUNC_0(VAR_12, VAR_20, VAR_26, VAR_24, &VAR_22, &VAR_23)) goto Error;

            }
        }


        if (!FUNC_14(VAR_12, VAR_20, VAR_19))
            goto Error;

        FUNC_15(VAR_12, VAR_19);
        VAR_19 = ((void*)0);


        VAR_26 = VAR_25;
    }


    if (VAR_18 & VAR_3) {

           if (VAR_25 == VAR_6 ||
                  VAR_25 == VAR_10 ||
                  VAR_25 == VAR_5) {

                  cmsStage* VAR_32 = FUNC_7(VAR_12, FUNC_9(VAR_12, VAR_25));
                  if (VAR_32 == ((void*)0)) goto Error;

                  if (!FUNC_16(VAR_12, VAR_20, VAR_1, VAR_32))
                         goto Error;
           }

    }

    return VAR_20;

Error:

    if (VAR_19 != ((void*)0)) FUNC_15(VAR_12, VAR_19);
    if (VAR_20 != ((void*)0)) FUNC_15(VAR_12, VAR_20);
    return ((void*)0);

    FUNC_18(VAR_18);
}
