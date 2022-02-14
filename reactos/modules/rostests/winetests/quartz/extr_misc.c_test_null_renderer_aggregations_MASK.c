
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
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int const) ;

__attribute__((used)) static void FUNC_1(void)
{
    const IID * VAR_5[] = {
        &VAR_3, &VAR_2
    };
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < sizeof(VAR_5) / sizeof(VAR_5[0]); VAR_6++)
    {
        FUNC_0(VAR_1, VAR_0, VAR_4, *VAR_5[VAR_6]);
    }
}
