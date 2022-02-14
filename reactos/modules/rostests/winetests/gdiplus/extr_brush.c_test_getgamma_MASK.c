
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double X; double Y; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpLineGradient ;
typedef int GpBrush ;
typedef int BOOL ;
typedef int ARGB ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ,int,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_3;
    GpLineGradient *VAR_4;
    GpPointF VAR_5, VAR_6;
    BOOL VAR_7;

    VAR_5.X = VAR_5.Y = 0.0;
    VAR_6.X = VAR_6.Y = 100.0;

    VAR_3 = FUNC_0(&VAR_5, &VAR_6, (ARGB)0xdeadbeef, 0xdeadbeef, VAR_2, &VAR_4);
    FUNC_3(VAR_1, VAR_3);


    VAR_3 = FUNC_2(((void*)0), ((void*)0));
    FUNC_3(VAR_0, VAR_3);
    VAR_3 = FUNC_2(VAR_4, ((void*)0));
    FUNC_3(VAR_0, VAR_3);
    VAR_3 = FUNC_2(((void*)0), &VAR_7);
    FUNC_3(VAR_0, VAR_3);

    FUNC_1((GpBrush*)VAR_4);
}
