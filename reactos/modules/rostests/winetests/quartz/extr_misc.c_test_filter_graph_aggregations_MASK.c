
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iids ;
typedef int IID ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int FUNC_0 (int ,int ,int ,int const) ;

__attribute__((used)) static void FUNC_1(void)
{
    const IID * VAR_16[] = {
        &VAR_5, &VAR_8, &VAR_6,
        &VAR_4, &VAR_13, &VAR_2, &VAR_3,
        &VAR_15, &VAR_9, &VAR_11,
        &VAR_10, &VAR_7, &VAR_12
    };
    int VAR_17;

    for (VAR_17 = 0; VAR_17 < sizeof(VAR_16) / sizeof(VAR_16[0]); VAR_17++)
    {
        FUNC_0(VAR_1, VAR_0,
                         VAR_14, *VAR_16[VAR_17]);
    }
}
