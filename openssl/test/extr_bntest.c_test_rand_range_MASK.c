
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(void)
{
    int VAR_2 = 0;
    size_t VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
        VAR_2 += FUNC_3(VAR_3);
    if (FUNC_1(VAR_2, VAR_0))
        return 1;
    FUNC_2("This test is expeced to fail by chance 0.01%% of the time.");
    return 0;
}
