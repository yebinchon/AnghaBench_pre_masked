
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
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    GpStatus VAR_3;
    GpBitmap *VAR_4;

    if (!&FUNC_3)
    {
        FUNC_4("GdipImageSetAbort() is not supported.\n");
        return;
    }

    VAR_4 = ((void*)0);
    VAR_3 = FUNC_0(8, 8, 0, VAR_2, ((void*)0), &VAR_4);
    FUNC_2(VAR_1, VAR_3);

    VAR_3 = FUNC_3(((void*)0), ((void*)0));
    FUNC_2(VAR_0, VAR_3);

    VAR_3 = FUNC_3((GpImage*)VAR_4, ((void*)0));
    FUNC_2(VAR_1, VAR_3);

    FUNC_1((GpImage*)VAR_4);
}
