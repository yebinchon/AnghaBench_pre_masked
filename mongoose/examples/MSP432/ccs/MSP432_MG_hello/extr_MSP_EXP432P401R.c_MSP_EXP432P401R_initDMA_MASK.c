
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HwiP_Params ;
typedef int * HwiP_Handle ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(void)
{
    HwiP_Params VAR_4;
    HwiP_Handle VAR_5;

    if (!VAR_3) {
        FUNC_1(&VAR_4);
        VAR_5 = FUNC_2(VAR_0, VAR_2, &VAR_4);
        if (VAR_5 == ((void*)0)) {
            FUNC_0("Failed to create DMA error Hwi!!\n");
            while (1);
        }

        FUNC_3();
        FUNC_4(VAR_1);

        VAR_3 = 1;
    }
}
