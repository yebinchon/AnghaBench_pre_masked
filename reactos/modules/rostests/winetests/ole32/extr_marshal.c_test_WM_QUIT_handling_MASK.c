
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;


 int VAR_0 ;
 int * FUNC_0 (char*,int *,int ,int ,int ,int ,int ,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    MSG VAR_3;

    VAR_2 = FUNC_0("WineCOMTest", ((void*)0), 0, VAR_0, VAR_0, VAR_0, VAR_0, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_5(VAR_2 != ((void*)0), "Window creation failed\n");


    FUNC_3(VAR_2, VAR_1+1, 0, 0);

    while (FUNC_2(&VAR_3, ((void*)0), 0, 0))
    {
        FUNC_4(&VAR_3);
        FUNC_1(&VAR_3);
    }
}
