
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT_PTR ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HANDLE ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int,int **) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,...) ;

void
FUNC_5(void)
{

    HDC VAR_3;
    BYTE VAR_4[1000];

    VAR_3 = FUNC_0(((void*)0));
    FUNC_4(VAR_3 != 0, "CreateMetaFile failed, skipping tests.\n");
    if(!VAR_3) return;

    FUNC_4(((UINT_PTR)VAR_3 & VAR_1) == VAR_2, "\n");

    FUNC_3(VAR_0);
    FUNC_4(FUNC_2((HANDLE)VAR_2, 0, ((void*)0)) == 0, "\n");
    FUNC_4(FUNC_2((HANDLE)VAR_2, 100, &VAR_4) == 0, "\n");
    FUNC_4(FUNC_2(VAR_3, 0, ((void*)0)) == 0, "\n");
    FUNC_4(FUNC_2(VAR_3, 1000, &VAR_4) == 0, "\n");
    FUNC_4(FUNC_1() == VAR_0, "got %ld\n", FUNC_1());
}
