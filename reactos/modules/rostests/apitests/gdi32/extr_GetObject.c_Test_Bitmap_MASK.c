
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT_PTR ;
typedef scalar_t__ HBITMAP ;
typedef scalar_t__ HANDLE ;
typedef int DIBSECTION ;
typedef int BYTE ;
typedef int BITMAP ;


 scalar_t__ FUNC_0 (int,int,int,int,int*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int*,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,int*) ;
 int FUNC_5 (scalar_t__,int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,char*,...) ;

void
FUNC_8(void)
{
    HBITMAP VAR_2;
    BITMAP VAR_3;
    DIBSECTION VAR_4;
    BYTE VAR_5[100] = {0};
    BYTE VAR_6[100] = {48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,0};

    FUNC_2(&VAR_3, sizeof(BITMAP), 0x77);
    VAR_2 = FUNC_0(10,10,1,8,VAR_5);
    FUNC_7(VAR_2 != 0, "CreateBitmap failed, skipping tests.\n");
    if (!VAR_2) return;

    FUNC_6(VAR_0);
    FUNC_7(FUNC_4((HANDLE)VAR_1, 0, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_5((HANDLE)VAR_1, 0, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4((HANDLE)VAR_1, sizeof(BITMAP), ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_3() == VAR_0, "\n");
    FUNC_7(FUNC_4(VAR_2, sizeof(DIBSECTION), ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4(VAR_2, 0, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4((HANDLE)((UINT_PTR)VAR_2 & 0x0000ffff), 0, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_5((HANDLE)((UINT_PTR)VAR_2 & 0x0000ffff), 0, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_3() == VAR_0, "\n");
    FUNC_7(FUNC_4(VAR_2, 5, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4(VAR_2, -5, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4(VAR_2, 0, VAR_6) == 0, "\n");
    FUNC_7(FUNC_4(VAR_2, 5, VAR_6) == 0, "\n");
    FUNC_7(FUNC_3() == VAR_0, "\n");
    FUNC_7(FUNC_4(VAR_2, sizeof(BITMAP), &VAR_3) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4(VAR_2, sizeof(BITMAP)+2, &VAR_3) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4(VAR_2, sizeof(DIBSECTION), &VAR_4) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_4(VAR_2, -5, &VAR_3) == sizeof(BITMAP), "\n");
    FUNC_7(FUNC_3() == VAR_0, "\n");
    FUNC_7(FUNC_4((HANDLE)VAR_1, sizeof(BITMAP), &VAR_3) == 0, "\n");
    FUNC_7(FUNC_3() == VAR_0, "expected ERROR_SUCCESS, got %ld\n", FUNC_3());



    FUNC_1(VAR_2);
}
