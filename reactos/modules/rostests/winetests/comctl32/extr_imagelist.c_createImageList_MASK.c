
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HIMAGELIST ;
typedef int HBITMAP ;


 int FUNC_0 (int,int,int,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (int,int,int ,int,int) ;

__attribute__((used)) static HIMAGELIST FUNC_5(int VAR_2, int VAR_3)
{

    HIMAGELIST VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_0, 1, 1);
    HBITMAP VAR_5 = FUNC_0(48, 48, 1, 1, VAR_1);

    FUNC_2(VAR_4 != ((void*)0), "Failed to create image list, %d x %d.\n", VAR_2, VAR_3);
    FUNC_3(VAR_4, VAR_5, ((void*)0));
    FUNC_1(VAR_5);
    return VAR_4;
}
