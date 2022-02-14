
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,void*) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
    HANDLE VAR_6;
    DWORD VAR_7;


    VAR_6 = (HANDLE)FUNC_3(VAR_4, 0, ((void*)0));
    FUNC_5(VAR_6 != VAR_1, "_beginthread failed (%d)\n", VAR_3);
    FUNC_2(VAR_6, VAR_0);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_5(!VAR_7, "ret = %d\n", VAR_7);

    VAR_6 = (HANDLE)FUNC_3(VAR_4, 0, (void*)1);
    FUNC_5(VAR_6 != VAR_1, "_beginthread failed (%d)\n", VAR_3);
    FUNC_2(VAR_6, VAR_0);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_5(!VAR_7, "ret = %d\n", VAR_7);

    VAR_6 = (HANDLE)FUNC_3(VAR_4, 0, (void*)2);
    FUNC_5(VAR_6 != VAR_1, "_beginthread failed (%d)\n", VAR_3);
    FUNC_1(150);
    VAR_7 = FUNC_2(VAR_6, VAR_0);
    FUNC_5(VAR_7 == VAR_2, "ret = %d\n", VAR_7);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_5(VAR_7, "ret = %d\n", VAR_7);

    VAR_6 = (HANDLE)FUNC_3(VAR_4, 0, (void*)3);
    FUNC_5(VAR_6 != VAR_1, "_beginthread failed (%d)\n", VAR_3);
    FUNC_1(150);
    VAR_7 = FUNC_2(VAR_6, VAR_0);
    FUNC_5(VAR_7 == VAR_2, "ret = %d\n", VAR_7);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_5(VAR_7, "ret = %d\n", VAR_7);


    VAR_6 = (HANDLE)FUNC_4(((void*)0),0, VAR_5, ((void*)0), 0, ((void*)0));
    FUNC_5(VAR_6 != ((void*)0), "_beginthreadex failed (%d)\n", VAR_3);
    FUNC_1(150);
    VAR_7 = FUNC_2(VAR_6, VAR_0);
    FUNC_5(VAR_7 == VAR_2, "ret = %d\n", VAR_7);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_5(VAR_7, "ret = %d\n", VAR_7);
}
