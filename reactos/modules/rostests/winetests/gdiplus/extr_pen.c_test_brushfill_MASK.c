
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GpStatus ;
typedef int GpSolidFill ;
typedef int GpPen ;
typedef scalar_t__ GpBrushType ;
typedef int GpBrush ;
typedef scalar_t__ ARGB ;


 int VAR_0 ;
 int FUNC_0 (int,double,int ,int **) ;
 int FUNC_1 (int,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    GpStatus VAR_4;
    GpPen *VAR_5;
    GpBrush *VAR_6, *VAR_7;
    GpBrushType VAR_8;
    ARGB VAR_9 = 0;


    FUNC_0(0xdeadbeef, 4.5, VAR_3, &VAR_5);
    VAR_4 = FUNC_5(VAR_5, &VAR_6);
    FUNC_10(VAR_2, VAR_4);
    FUNC_4(VAR_6, &VAR_8);
    FUNC_10(VAR_0, VAR_8);
    FUNC_6(VAR_5, &VAR_9);
    FUNC_10(0xdeadbeef, VAR_9);
    FUNC_2(VAR_6);


    FUNC_1(0xabaddeed, (GpSolidFill**)&VAR_6);
    VAR_4 = FUNC_8(VAR_5, VAR_6);
    FUNC_10(VAR_2, VAR_4);
    FUNC_6(VAR_5, &VAR_9);
    FUNC_10(0xabaddeed, VAR_9);
    FUNC_2(VAR_6);
    VAR_9 = 0;


    FUNC_5(VAR_5, &VAR_6);
    FUNC_9((GpSolidFill*)VAR_6, 0xbeadfeed);
    FUNC_5(VAR_5, &VAR_7);
    FUNC_11(VAR_6 != VAR_7, "Expected to get a clone, not a copy of the reference\n");
    FUNC_7((GpSolidFill*)VAR_7, &VAR_9);
    FUNC_10(0xabaddeed, VAR_9);
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);


    VAR_4 = FUNC_8(VAR_5, ((void*)0));
    FUNC_10(VAR_1, VAR_4);

    FUNC_3(VAR_5);
}
