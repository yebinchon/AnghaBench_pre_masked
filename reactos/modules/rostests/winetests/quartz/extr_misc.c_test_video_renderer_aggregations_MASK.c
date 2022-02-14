
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
 int VAR_5 ;
 int const VAR_6 ;
 int FUNC_0 (int ,int ,int ,int const) ;

__attribute__((used)) static void FUNC_1(void)
{
    const IID * VAR_7[] = {
        &VAR_4, &VAR_2, &VAR_3, &VAR_6
    };
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < sizeof(VAR_7) / sizeof(VAR_7[0]); VAR_8++)
    {
        FUNC_0(VAR_0, VAR_1,
                         VAR_5, *VAR_7[VAR_8]);
    }
}
