
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double X; double Y; } ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef TYPE_1__ GpPointF ;
typedef int GpPenType ;
typedef int GpPen ;
typedef int GpLineGradient ;
typedef int GpBrush ;
typedef int ARGB ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ,int ,int ,int **) ;
 int FUNC_1 (int ,float,int ,int **) ;
 int FUNC_2 (int *,float,int ,int **) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpPen *VAR_6;
    GpSolidFill *VAR_7;
    GpLineGradient *VAR_8;
    GpPointF VAR_9, VAR_10;
    GpStatus VAR_11;
    GpPenType VAR_12;


    VAR_11 = FUNC_6(((void*)0), ((void*)0));
    FUNC_7(VAR_0, VAR_11);

    VAR_11 = FUNC_1((ARGB)0xffff00ff, 10.0f, VAR_4, &VAR_6);
    FUNC_7(VAR_1, VAR_11);
    VAR_11 = FUNC_6(VAR_6, ((void*)0));
    FUNC_7(VAR_0, VAR_11);


    VAR_11 = FUNC_6(VAR_6, &VAR_12);
    FUNC_7(VAR_1, VAR_11);
    FUNC_7(VAR_3, VAR_12);
    FUNC_5(VAR_6);


    VAR_11 = FUNC_3((ARGB)0xffff00ff, &VAR_7);
    FUNC_7(VAR_1, VAR_11);
    VAR_11 = FUNC_2((GpBrush*)VAR_7, 10.0f, VAR_4, &VAR_6);
    FUNC_7(VAR_1, VAR_11);
    VAR_11 = FUNC_6(VAR_6, &VAR_12);
    FUNC_7(VAR_1, VAR_11);
    FUNC_7(VAR_3, VAR_12);
    FUNC_5(VAR_6);
    FUNC_4((GpBrush*)VAR_7);


    VAR_9.X = VAR_9.Y = 0.0;
    VAR_10.X = VAR_10.Y = 10.0;
    VAR_11 = FUNC_0(&VAR_9, &VAR_10, (ARGB)0xffff00ff, (ARGB)0xffff0000,
                                 VAR_5, &VAR_8);
    FUNC_7(VAR_1, VAR_11);
    VAR_11 = FUNC_2((GpBrush*)VAR_8, 10.0f, VAR_4, &VAR_6);
    FUNC_7(VAR_1, VAR_11);
    VAR_11 = FUNC_6(VAR_6, &VAR_12);
    FUNC_7(VAR_1, VAR_11);
    FUNC_7(VAR_2, VAR_12);
    FUNC_5(VAR_6);
    FUNC_4((GpBrush*)VAR_8);
}
