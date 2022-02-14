
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpSolidFill ;
typedef int GpBrushType ;
typedef int GpBrush ;
typedef int ARGB ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_2;
    GpBrushType VAR_3;
    GpSolidFill *VAR_4 = ((void*)0);

    FUNC_0((ARGB)0xdeadbeef, &VAR_4);

    VAR_2 = FUNC_2((GpBrush*)VAR_4, &VAR_3);
    FUNC_3(VAR_1, VAR_2);
    FUNC_3(VAR_0, VAR_3);

    FUNC_1((GpBrush*) VAR_4);
}
