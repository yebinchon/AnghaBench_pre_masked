
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double X; double Y; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPen ;
typedef int GpLineGradient ;
typedef int GpBrush ;
typedef int ARGB ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ,int ,int ,int **) ;
 int FUNC_1 (int *,float,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpStatus VAR_4;
    GpPen *VAR_5 = ((void*)0);
    GpBrush *VAR_6 = ((void*)0);
    GpPointF VAR_7[2];

    VAR_4 = FUNC_1(((void*)0), 10.0f, VAR_2, &VAR_5);
    FUNC_4(VAR_0, VAR_4);
    FUNC_5(VAR_5 == ((void*)0), "Expected pen to be NULL\n");

    VAR_7[0].X = 7.0;
    VAR_7[0].Y = 11.0;
    VAR_7[1].X = 13.0;
    VAR_7[1].Y = 17.0;

    VAR_4 = FUNC_0(&VAR_7[0], &VAR_7[1], (ARGB)0xffff00ff,
                    (ARGB)0xff0000ff, VAR_3, (GpLineGradient **)&VAR_6);
    FUNC_4(VAR_1, VAR_4);
    FUNC_5(VAR_6 != ((void*)0), "Expected brush to be initialized\n");

    VAR_4 = FUNC_1(VAR_6, 10.0f, VAR_2, &VAR_5);
    FUNC_4(VAR_1, VAR_4);
    FUNC_5(VAR_5 != ((void*)0), "Expected pen to be initialized\n");

    VAR_4 = FUNC_3(VAR_5);
    FUNC_4(VAR_1, VAR_4);

    VAR_4 = FUNC_2(VAR_6);
    FUNC_4(VAR_1, VAR_4);
}
