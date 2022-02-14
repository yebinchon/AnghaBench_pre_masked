
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int npy_float ;
typedef int npy_double ;
typedef int npy_cfloat ;
typedef int npy_cdouble ;
typedef enum CBLAS_TRANSPOSE { ____Placeholder_CBLAS_TRANSPOSE } CBLAS_TRANSPOSE ;
typedef enum CBLAS_ORDER { ____Placeholder_CBLAS_ORDER } CBLAS_ORDER ;
typedef int PyArrayObject ;


 int VAR_0 ;




 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 int FUNC_3 (int,int ,int,int,int,int ,void const*,int,int ,void*,int) ;
 int FUNC_4 (int,int ,int,int,int,int,void const*,int,int,void*,int) ;
 int FUNC_5 (int,int ,int,int,int,float,void const*,int,float,void*,int) ;
 int FUNC_6 (int,int ,int,int,int,int ,void const*,int,int ,void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(int VAR_5, enum CBLAS_ORDER VAR_6, enum CBLAS_TRANSPOSE VAR_7,
     int VAR_8, int VAR_9,
     PyArrayObject *VAR_10, int VAR_11, PyArrayObject *VAR_12)
{
    const void *VAR_13 = FUNC_0(VAR_10);
    void *VAR_14 = FUNC_0(VAR_12);
    int VAR_15 = FUNC_1(VAR_12, 1) > 1 ? FUNC_1(VAR_12, 1) : 1;

    npy_intp VAR_16;
    npy_intp VAR_17;

    switch (VAR_5) {
        case 129:
            FUNC_4(VAR_6, VAR_0, VAR_7, VAR_8, VAR_9, 1.,
                        VAR_13, VAR_11, 0., VAR_14, VAR_15);

            for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
                for (VAR_17 = VAR_16 + 1; VAR_17 < VAR_8; VAR_17++) {
                    *((npy_double*)FUNC_2(VAR_12, VAR_17, VAR_16)) =
                            *((npy_double*)FUNC_2(VAR_12, VAR_16, VAR_17));
                }
            }
            break;
        case 128:
            FUNC_5(VAR_6, VAR_0, VAR_7, VAR_8, VAR_9, 1.f,
                        VAR_13, VAR_11, 0.f, VAR_14, VAR_15);

            for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
                for (VAR_17 = VAR_16 + 1; VAR_17 < VAR_8; VAR_17++) {
                    *((npy_float*)FUNC_2(VAR_12, VAR_17, VAR_16)) =
                            *((npy_float*)FUNC_2(VAR_12, VAR_16, VAR_17));
                }
            }
            break;
        case 131:
            FUNC_6(VAR_6, VAR_0, VAR_7, VAR_8, VAR_9, VAR_1,
                        VAR_13, VAR_11, VAR_3, VAR_14, VAR_15);

            for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
                for (VAR_17 = VAR_16 + 1; VAR_17 < VAR_8; VAR_17++) {
                    *((npy_cdouble*)FUNC_2(VAR_12, VAR_17, VAR_16)) =
                            *((npy_cdouble*)FUNC_2(VAR_12, VAR_16, VAR_17));
                }
            }
            break;
        case 130:
            FUNC_3(VAR_6, VAR_0, VAR_7, VAR_8, VAR_9, VAR_2,
                        VAR_13, VAR_11, VAR_4, VAR_14, VAR_15);

            for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
                for (VAR_17 = VAR_16 + 1; VAR_17 < VAR_8; VAR_17++) {
                    *((npy_cfloat*)FUNC_2(VAR_12, VAR_17, VAR_16)) =
                            *((npy_cfloat*)FUNC_2(VAR_12, VAR_16, VAR_17));
                }
            }
            break;
    }
}
