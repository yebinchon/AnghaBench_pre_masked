
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum CBLAS_TRANSPOSE { ____Placeholder_CBLAS_TRANSPOSE } CBLAS_TRANSPOSE ;
typedef enum CBLAS_ORDER { ____Placeholder_CBLAS_ORDER } CBLAS_ORDER ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int,char*,char*,int const) ;
 int FUNC_1 (char*,int const*,int const*,float const*,float const*,int const*,float const*,int const*,float const*,float*,int const*) ;

void FUNC_2(const enum CBLAS_ORDER VAR_5,
                 const enum CBLAS_TRANSPOSE VAR_6, const int VAR_7, const int VAR_8,
                 const float VAR_9, const float *VAR_10, const int VAR_11,
                 const float *VAR_12, const int VAR_13, const float VAR_14,
                 float *VAR_15, const int VAR_16)
{
    char VAR_17;
    if (VAR_5 == VAR_0)
    {
        if (VAR_6 == VAR_2) VAR_17 = 'N';
        else if (VAR_6 == VAR_4) VAR_17 = 'T';
        else if (VAR_6 == VAR_1) VAR_17 = 'C';
        else
        {
            FUNC_0(2, "cblas_sgemv","Illegal TransA setting, %d\n", VAR_6);
        }
        FUNC_1(&VAR_17, &VAR_7, &VAR_8, &VAR_9, VAR_10, &VAR_11, VAR_12, &VAR_13, &VAR_14, VAR_15, &VAR_16);
    }
    else if (VAR_5 == VAR_3)
    {
        if (VAR_6 == VAR_2) VAR_17 = 'T';
        else if (VAR_6 == VAR_4) VAR_17 = 'N';
        else if (VAR_6 == VAR_1) VAR_17 = 'N';
        else
        {
            FUNC_0(2, "cblas_sgemv", "Illegal TransA setting, %d\n", VAR_6);
            return;
        }
        FUNC_1(&VAR_17, &VAR_8, &VAR_7, &VAR_9, VAR_10, &VAR_11, VAR_12, &VAR_13, &VAR_14, VAR_15, &VAR_16);
    }
    else
        FUNC_0(1, "cblas_sgemv", "Illegal Order setting, %d\n", VAR_5);
}
