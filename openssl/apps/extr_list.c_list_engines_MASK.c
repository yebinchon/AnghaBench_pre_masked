
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(void)
{

    ENGINE *VAR_1;

    FUNC_1(VAR_0, "Engines:\n");
    VAR_1 = FUNC_2();
    while (VAR_1) {
        FUNC_0(VAR_0, "%s\n", FUNC_3(VAR_1));
        VAR_1 = FUNC_4(VAR_1);
    }



}
