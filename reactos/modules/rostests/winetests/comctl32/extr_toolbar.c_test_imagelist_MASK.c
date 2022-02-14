
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef int * HIMAGELIST ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int **) ;

__attribute__((used)) static void FUNC_5(void)
{
    HIMAGELIST VAR_2;
    HWND VAR_3 = ((void*)0);
    int VAR_4;

    FUNC_4(&VAR_3);

    VAR_2 = (HIMAGELIST)FUNC_2(VAR_3, VAR_0, 0, 0);
    FUNC_3(VAR_2 == ((void*)0), "got %p\n", *VAR_2);

    VAR_4 = FUNC_2(VAR_3, VAR_1, 0, FUNC_1(16, 16));
    FUNC_3(VAR_4, "got %d\n", VAR_4);

    VAR_2 = (HIMAGELIST)FUNC_2(VAR_3, VAR_0, 0, 0);
    FUNC_3(VAR_2 == ((void*)0), "got %p\n", *VAR_2);

    FUNC_0(VAR_3);
}
