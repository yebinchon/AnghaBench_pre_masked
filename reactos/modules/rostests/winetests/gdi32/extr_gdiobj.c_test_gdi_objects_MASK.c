
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int * LPVOID ;
typedef int INT_PTR ;
typedef int * HPEN ;
typedef int * HDC ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int,char*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(void)
{
    BYTE VAR_5[256];
    HDC VAR_6 = FUNC_2(((void*)0));
    HPEN VAR_7;
    int VAR_8;
    BOOL VAR_9;





    FUNC_9(0);
    VAR_7 = FUNC_8(((void*)0), FUNC_6(VAR_0));
    FUNC_12(!VAR_7 && (FUNC_3() == VAR_1 || FUNC_11(!FUNC_3())),
       "SelectObject(NULL DC) expected 0, ERROR_INVALID_HANDLE, got %p, %u\n",
       *VAR_7, FUNC_3());


    FUNC_9(0);
    VAR_7 = FUNC_8(VAR_6, ((void*)0));
    FUNC_12(!VAR_7 && !FUNC_3(),
       "SelectObject(NULL obj) expected 0, NO_ERROR, got %p, %u\n",
       *VAR_7, FUNC_3());


    FUNC_9(0);
    VAR_7 = FUNC_8(VAR_6, FUNC_6(VAR_0));
    FUNC_12(VAR_7 && !FUNC_3(),
       "SelectObject(post NULL) expected non-null, NO_ERROR, got %p, %u\n",
       *VAR_7, FUNC_3());


    FUNC_9(0);
    VAR_7 = FUNC_1(((void*)0), VAR_4);
    FUNC_12(!VAR_7 && !FUNC_3(),
       "GetCurrentObject(NULL DC) expected 0, NO_ERROR, got %p, %u\n",
       *VAR_7, FUNC_3());


    VAR_9 = FUNC_0(((void*)0));
    FUNC_12( !VAR_9 && !FUNC_3(),
       "DeleteObject(NULL obj), expected 0, NO_ERROR, got %d, %u\n",
       VAR_9, FUNC_3());


    FUNC_9(0);
    VAR_8 = FUNC_4(((void*)0), sizeof(VAR_5), VAR_5);
    FUNC_12 (!VAR_8 && (FUNC_3() == 0 || FUNC_3() == VAR_2),
        "GetObject(NULL obj), expected 0, NO_ERROR, got %d, %u\n",
 VAR_8, FUNC_3());


    VAR_7 = FUNC_8(VAR_6, FUNC_6(VAR_0));
    FUNC_9(0);
    VAR_8 = FUNC_4(VAR_7, (INT_PTR)VAR_5, (LPVOID)sizeof(VAR_5));
    FUNC_12 (!VAR_8 && (FUNC_3() == 0 || FUNC_3() == VAR_3),
        "GetObject(invalid buff), expected 0, ERROR_NOACCESS, got %d, %u\n",
    VAR_8, FUNC_3());


    FUNC_9(0);
    VAR_8 = FUNC_5(((void*)0));
    FUNC_12 (!VAR_8 && FUNC_3() == VAR_1,
        "GetObjectType(NULL obj), expected 0, ERROR_INVALID_HANDLE, got %d, %u\n",
        VAR_8, FUNC_3());


    FUNC_9(0);
    VAR_8 = FUNC_10(((void*)0));
    FUNC_12 (!VAR_8 && !FUNC_3(),
        "UnrealizeObject(NULL obj), expected 0, NO_ERROR, got %d, %u\n",
        VAR_8, FUNC_3());

    FUNC_7(((void*)0), VAR_6);
}
