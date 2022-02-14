
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_1__ POINT ;
typedef scalar_t__ HIMAGELIST ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    HIMAGELIST VAR_0 = FUNC_0(7,13);
    HIMAGELIST VAR_1;
    BOOL VAR_2;
    int VAR_3;
    POINT VAR_4;

    VAR_3 = FUNC_6(VAR_0);
    FUNC_1(VAR_3 > 2, "Tests need an ImageList with more than 2 images\n");


    VAR_2 = FUNC_2(VAR_0, 1, 0, 0);
    VAR_1 = FUNC_5(((void*)0), ((void*)0));
    FUNC_1(VAR_2 && VAR_1, "ImageList_BeginDrag() failed\n");
    VAR_2 = FUNC_2(VAR_0, 0, 3, 5);
    FUNC_1(!VAR_2, "ImageList_BeginDrag() returned TRUE\n");
    VAR_1 = FUNC_5(((void*)0), &VAR_4);
    FUNC_1(!!VAR_1, "No active ImageList drag left\n");
    FUNC_1(VAR_4.x == 0 && VAR_4.y == 0, "New ImageList drag was created\n");
    FUNC_4();
    VAR_1 = FUNC_5(((void*)0), ((void*)0));
    FUNC_1(!VAR_1, "ImageList drag was not destroyed\n");


    FUNC_2(VAR_0, 0, 0, 0);
    VAR_2 = FUNC_2(VAR_0, VAR_3, 3, 5);
    FUNC_1(!VAR_2, "ImageList_BeginDrag() returned TRUE\n");
    VAR_1 = FUNC_5(((void*)0), &VAR_4);
    FUNC_1(VAR_1 && VAR_4.x == 0 && VAR_4.y == 0, "Active drag should not have been canceled\n");
    FUNC_4();
    VAR_1 = FUNC_5(((void*)0), ((void*)0));
    FUNC_1(!VAR_1, "ImageList drag was not destroyed\n");

    VAR_2 = FUNC_2(VAR_0, -17, 0, 0);
    VAR_1 = FUNC_5(((void*)0), ((void*)0));
    FUNC_1(VAR_2 && VAR_1, "ImageList drag was created\n");
    FUNC_4();
    VAR_2 = FUNC_2(VAR_0, -1, 0, 0);
    VAR_1 = FUNC_5(((void*)0), ((void*)0));
    FUNC_1(VAR_2 && VAR_1, "ImageList drag was created\n");
    FUNC_4();
    FUNC_3(VAR_0);
}
