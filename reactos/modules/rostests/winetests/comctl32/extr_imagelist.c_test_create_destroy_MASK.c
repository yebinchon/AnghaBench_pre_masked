
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int * HIMAGELIST ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int * FUNC_1 (int,int,int ,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    HIMAGELIST VAR_3;
    INT VAR_4, VAR_5;
    BOOL VAR_6;
    INT VAR_7;


    VAR_3 = FUNC_1(0, 0, VAR_1, 0, 3);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);

    VAR_3 = FUNC_1(0, 16, VAR_1, 0, 3);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);

    VAR_3 = FUNC_1(16, 0, VAR_1, 0, 3);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);

    VAR_3 = FUNC_1(16, -1, VAR_1, 0, 3);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);

    VAR_3 = FUNC_1(-1, 16, VAR_1, 0, 3);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);

    VAR_6 = FUNC_2((HIMAGELIST)0xdeadbeef);
    FUNC_0(VAR_6 == VAR_0, "ImageList_Destroy(0xdeadbeef) should fail and not crash\n");


    VAR_3 = FUNC_1(0, 14, VAR_2, 4, 4);
    FUNC_0(VAR_3 != ((void*)0), "got %p\n", VAR_3);

    FUNC_3(VAR_3, &VAR_4, &VAR_5);
    FUNC_0 (VAR_4 == 0, "Wrong cx (%i)\n", VAR_4);
    FUNC_0 (VAR_5 == 14, "Wrong cy (%i)\n", VAR_5);
    FUNC_2(VAR_3);

    VAR_3 = FUNC_1(0, 0, VAR_2, 4, 4);
    FUNC_0(VAR_3 != ((void*)0), "got %p\n", VAR_3);
    FUNC_3(VAR_3, &VAR_4, &VAR_5);
    FUNC_0 (VAR_4 == 0, "Wrong cx (%i)\n", VAR_4);
    FUNC_0 (VAR_5 == 0, "Wrong cy (%i)\n", VAR_5);
    FUNC_2(VAR_3);

    VAR_3 = FUNC_1(0, 0, VAR_2, 0, 4);
    FUNC_0(VAR_3 != ((void*)0), "got %p\n", VAR_3);
    FUNC_3(VAR_3, &VAR_4, &VAR_5);
    FUNC_0 (VAR_4 == 0, "Wrong cx (%i)\n", VAR_4);
    FUNC_0 (VAR_5 == 0, "Wrong cy (%i)\n", VAR_5);

    FUNC_5(VAR_3, 3);
    VAR_7 = FUNC_4(VAR_3);
    FUNC_0(VAR_7 == 3, "Unexpected image count after increase\n");


    FUNC_2(VAR_3);


    VAR_3 = FUNC_1(-1, -1, VAR_2, 4, 4);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);
    VAR_3 = FUNC_1(-1, 1, VAR_2, 4, 4);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);
    VAR_3 = FUNC_1(1, -1, VAR_2, 4, 4);
    FUNC_0(VAR_3 == ((void*)0), "got %p\n", VAR_3);
}
