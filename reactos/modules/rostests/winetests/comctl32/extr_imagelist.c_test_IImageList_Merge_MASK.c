
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IImageList ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef int * HIMAGELIST ;
typedef int * HICON ;


 int * FUNC_0 (int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int,int *,int,int,int,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int *,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int,char*) ;
 int * FUNC_8 (int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    HIMAGELIST VAR_4, VAR_5;
    IImageList *VAR_6, *VAR_7, *VAR_8;
    HICON VAR_9;
    HWND VAR_10 = FUNC_6();
    HRESULT VAR_11;
    int VAR_12;

    VAR_4 = FUNC_8(32,32,0,0,3);
    FUNC_7(VAR_4 != ((void*)0),"failed to create himl1\n");

    VAR_5 = FUNC_8(32,32,0,0,3);
    FUNC_7(VAR_5 != ((void*)0),"failed to create himl2\n");

    VAR_9 = FUNC_0(VAR_2, 32, 32, 1, 1, VAR_3, VAR_3);
    FUNC_7(VAR_9 != ((void*)0), "failed to create hicon1\n");

    if (!VAR_4 || !VAR_5 || !VAR_9)
        return;


    VAR_6 = (IImageList *) VAR_4;
    VAR_7 = (IImageList *) VAR_5;

    VAR_12 = -1;
    FUNC_7( FUNC_5(VAR_7, -1, VAR_9, &VAR_12) == VAR_1 && (VAR_12 == 0),"add icon1 to himl2 failed\n");

if (0)
{

    FUNC_3(VAR_6, -1, ((void*)0), 0, 0, 0, &VAR_0, (void**)&VAR_8);
    FUNC_3(VAR_6, -1, (IUnknown*) VAR_7, 0, 0, 0, &VAR_0, ((void*)0));
}


    VAR_11 = FUNC_3(VAR_6, -1, (IUnknown *) VAR_7, 0, 0, 0, &VAR_0, (void **) &VAR_8);
    FUNC_7(VAR_11 == VAR_1, "merge himl1,-1 failed\n");
    if (VAR_11 == VAR_1) FUNC_4(VAR_8);

    VAR_11 = FUNC_3(VAR_6, 0, (IUnknown *) VAR_7, 0, 0, 0, &VAR_0, (void **) &VAR_8);
    FUNC_7(VAR_11 == VAR_1, "merge himl1,0 failed\n");
    if (VAR_11 == VAR_1) FUNC_4(VAR_8);


    FUNC_4(VAR_7);
    VAR_5 = FUNC_8(32,32,0,0,3);
    FUNC_7(VAR_5 != ((void*)0),"failed to recreate himl2\n");

    VAR_7 = (IImageList *) VAR_5;

    VAR_11 = FUNC_3(VAR_6, -1, (IUnknown *) VAR_7, -1, 0, 0, &VAR_0, (void **) &VAR_8);
    FUNC_7(VAR_11 == VAR_1, "merge himl2,-1 failed\n");
    if (VAR_11 == VAR_1) FUNC_4(VAR_8);

    VAR_11 = FUNC_3(VAR_6, -1, (IUnknown *) VAR_7, 0, 0, 0, &VAR_0, (void **) &VAR_8);
    FUNC_7(VAR_11 == VAR_1, "merge himl2,0 failed\n");
    if (VAR_11 == VAR_1) FUNC_4(VAR_8);


    VAR_12 = -1;
    FUNC_7( FUNC_5(VAR_7, -1, VAR_9, &VAR_12) == VAR_1 && (VAR_12 == 0),"re-add icon1 to himl2 failed\n");

    VAR_11 = FUNC_3(VAR_7, 0, (IUnknown *) VAR_7, 0, 0, 0, &VAR_0, (void **) &VAR_8);
    FUNC_7(VAR_11 == VAR_1, "merge himl2 with itself failed\n");
    if (VAR_11 == VAR_1) FUNC_4(VAR_8);


    VAR_12 = -1;
    FUNC_7( FUNC_5(VAR_6, -1, VAR_9, &VAR_12) == VAR_1 && (VAR_12 == 0),"add icon1 to himl1 failed\n");

    VAR_11 = FUNC_3(VAR_6, 0, (IUnknown *) VAR_7, 0, 0, 0, &VAR_0, (void **) &VAR_8);
    FUNC_7(VAR_11 == VAR_1, "merge himl1 with himl2 failed\n");
    if (VAR_11 == VAR_1) FUNC_4(VAR_8);

    VAR_11 = FUNC_3(VAR_6, 0, (IUnknown *) VAR_7, 0, 8, 16, &VAR_0, (void **) &VAR_8);
    FUNC_7(VAR_11 == VAR_1, "merge himl1 with himl2 8,16 failed\n");
    if (VAR_11 == VAR_1) FUNC_4(VAR_8);

    FUNC_4(VAR_6);
    FUNC_4(VAR_7);

    FUNC_1(VAR_9);
    FUNC_2(VAR_10);
}
