
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;


 int FUNC_0 (int,int,int ,int ,int *,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_4;
    GpImage *VAR_5;
    char VAR_6[256];

    VAR_4 = FUNC_1(((void*)0));
    FUNC_2(VAR_0, VAR_4);

    VAR_4 = FUNC_0(2, 2, 0, VAR_3, ((void*)0), (GpBitmap**)&VAR_5);
    FUNC_2(VAR_2, VAR_4);

    VAR_4 = FUNC_1(VAR_5);
    FUNC_2(VAR_2, VAR_4);

    VAR_4 = FUNC_1(VAR_5);
    FUNC_2(VAR_1, VAR_4);

    FUNC_3(VAR_6, 0, 256);
    VAR_4 = FUNC_1((GpImage*)VAR_6);
    FUNC_2(VAR_1, VAR_4);
}
