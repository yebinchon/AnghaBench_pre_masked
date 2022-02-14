
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum CBLAS_TRANSPOSE { ____Placeholder_CBLAS_TRANSPOSE } CBLAS_TRANSPOSE ;
typedef enum CBLAS_ORDER { ____Placeholder_CBLAS_ORDER } CBLAS_ORDER ;
typedef int PyArrayObject ;






 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int,int,int,int ,void const*,int,void const*,int,int ,void*,int) ;
 int FUNC_3 (int,int,int,int,int,void const*,int,void const*,int,int,void*,int) ;
 int FUNC_4 (int,int,int,int,float,void const*,int,void const*,int,float,void*,int) ;
 int FUNC_5 (int,int,int,int,int ,void const*,int,void const*,int,int ,void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(int VAR_4, enum CBLAS_ORDER VAR_5, enum CBLAS_TRANSPOSE VAR_6,
     PyArrayObject *VAR_7, int VAR_8, PyArrayObject *VAR_9, int VAR_10,
     PyArrayObject *VAR_11)
{
    const void *VAR_12 = FUNC_0(VAR_7), *VAR_13 = FUNC_0(VAR_9);
    void *VAR_14 = FUNC_0(VAR_11);

    int VAR_15 = FUNC_1(VAR_7, 0), VAR_16 = FUNC_1(VAR_7, 1);

    switch (VAR_4) {
        case 129:
            FUNC_3(VAR_5, VAR_6, VAR_15, VAR_16, 1., VAR_12, VAR_8, VAR_13, VAR_10,
                        0., VAR_14, 1);
            break;
        case 128:
            FUNC_4(VAR_5, VAR_6, VAR_15, VAR_16, 1.f, VAR_12, VAR_8, VAR_13, VAR_10,
                        0.f, VAR_14, 1);
            break;
        case 131:
            FUNC_5(VAR_5, VAR_6, VAR_15, VAR_16, VAR_0, VAR_12, VAR_8, VAR_13, VAR_10,
                        VAR_2, VAR_14, 1);
            break;
        case 130:
            FUNC_2(VAR_5, VAR_6, VAR_15, VAR_16, VAR_1, VAR_12, VAR_8, VAR_13, VAR_10,
                        VAR_3, VAR_14, 1);
            break;
    }
}
