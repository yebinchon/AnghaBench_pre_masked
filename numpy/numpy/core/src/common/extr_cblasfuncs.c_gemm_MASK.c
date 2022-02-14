
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum CBLAS_TRANSPOSE { ____Placeholder_CBLAS_TRANSPOSE } CBLAS_TRANSPOSE ;
typedef enum CBLAS_ORDER { ____Placeholder_CBLAS_ORDER } CBLAS_ORDER ;
typedef int PyArrayObject ;






 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int,int,int,int,int,int ,void const*,int,void const*,int,int ,void*,int) ;
 int FUNC_3 (int,int,int,int,int,int,int,void const*,int,void const*,int,int,void*,int) ;
 int FUNC_4 (int,int,int,int,int,int,float,void const*,int,void const*,int,float,void*,int) ;
 int FUNC_5 (int,int,int,int,int,int,int ,void const*,int,void const*,int,int ,void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(int VAR_4, enum CBLAS_ORDER VAR_5,
     enum CBLAS_TRANSPOSE VAR_6, enum CBLAS_TRANSPOSE VAR_7,
     int VAR_8, int VAR_9, int VAR_10,
     PyArrayObject *VAR_11, int VAR_12, PyArrayObject *VAR_13, int VAR_14, PyArrayObject *VAR_15)
{
    const void *VAR_16 = FUNC_0(VAR_11), *VAR_17 = FUNC_0(VAR_13);
    void *VAR_18 = FUNC_0(VAR_15);
    int VAR_19 = FUNC_1(VAR_15, 1) > 1 ? FUNC_1(VAR_15, 1) : 1;

    switch (VAR_4) {
        case 129:
            FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 1.,
                        VAR_16, VAR_12, VAR_17, VAR_14, 0., VAR_18, VAR_19);
            break;
        case 128:
            FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 1.f,
                        VAR_16, VAR_12, VAR_17, VAR_14, 0.f, VAR_18, VAR_19);
            break;
        case 131:
            FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_0,
                        VAR_16, VAR_12, VAR_17, VAR_14, VAR_2, VAR_18, VAR_19);
            break;
        case 130:
            FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_1,
                        VAR_16, VAR_12, VAR_17, VAR_14, VAR_3, VAR_18, VAR_19);
            break;
    }
}
