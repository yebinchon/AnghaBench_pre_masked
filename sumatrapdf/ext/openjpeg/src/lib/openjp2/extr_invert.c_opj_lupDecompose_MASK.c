
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef double OPJ_FLOAT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double*,double*,int) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(OPJ_FLOAT32 * VAR_2,
                                 OPJ_UINT32 * VAR_3,
                                 OPJ_FLOAT32 * VAR_4,
                                 OPJ_UINT32 VAR_5)
{
    OPJ_UINT32 * VAR_6 = VAR_3;
    OPJ_UINT32 * VAR_7;
    OPJ_UINT32 VAR_8 = 0, VAR_9;
    OPJ_FLOAT32 VAR_10;
    OPJ_UINT32 VAR_11, VAR_12, VAR_13;
    OPJ_FLOAT32 VAR_14;
    OPJ_UINT32 VAR_15 = VAR_5 - 1;
    OPJ_UINT32 VAR_16 = VAR_5 * (OPJ_UINT32)sizeof(OPJ_FLOAT32);
    OPJ_FLOAT32 * VAR_17 = VAR_2;
    OPJ_FLOAT32 * VAR_18, * VAR_19;
    OPJ_UINT32 VAR_20 = 1;
    OPJ_UINT32 VAR_21 = VAR_5 - 1;


    for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11) {
        *VAR_6++ = VAR_11;
    }

    VAR_6 = VAR_3;
    for (VAR_13 = 0; VAR_13 < VAR_15; ++VAR_13) {
        VAR_14 = 0.0;


        VAR_18 = VAR_17 + VAR_13;


        for (VAR_11 = VAR_13; VAR_11 < VAR_5; ++VAR_11) {
            VAR_10 = ((*VAR_18 > 0) ? *VAR_18 : -(*VAR_18));
            if (VAR_10 > VAR_14) {
                VAR_14 = VAR_10;
                VAR_8 = VAR_11;
            }

            VAR_18 += VAR_5;
        }


        if (VAR_14 == 0.0) {
            return VAR_0;
        }


        if (VAR_8 != VAR_13) {


            VAR_7 = VAR_6 + VAR_8 - VAR_13;

            VAR_9 = *VAR_6;
            *VAR_6 = *VAR_7;
            *VAR_7 = VAR_9;


            VAR_18 = VAR_17 + (VAR_8 - VAR_13) * VAR_5;
            FUNC_0(VAR_4, VAR_18, VAR_16);
            FUNC_0(VAR_18, VAR_17, VAR_16);
            FUNC_0(VAR_17, VAR_4, VAR_16);
        }


        VAR_19 = VAR_17 + VAR_13;
        VAR_18 = VAR_19 + VAR_5;

        VAR_10 = *(VAR_19++);


        for (VAR_11 = VAR_20; VAR_11 < VAR_5; ++VAR_11) {





            VAR_14 = *VAR_18 / VAR_10;
            *(VAR_18++) = VAR_14;

            for (VAR_12 = VAR_20; VAR_12 < VAR_5; ++VAR_12) {

                *(VAR_18++) -= VAR_14 * (*(VAR_19++));
            }

            VAR_19 -= VAR_21;

            VAR_18 += VAR_13;
        }


        ++VAR_20;

        --VAR_21;

        VAR_17 += VAR_5;

        ++VAR_6;
    }
    return VAR_1;
}
