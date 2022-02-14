
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WrapMode ;
struct TYPE_3__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef int GpLineGradient ;
typedef int GpBrush ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int,int ,int,int **) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
    GpStatus VAR_9;
    GpLineGradient *VAR_10;
    GpRectF VAR_11 = { 1, 3, 1, 2 };
    GpRectF VAR_12 = { 1, 3, -1, -2 };
    GpRectF VAR_13 = { 1, 3, 0, 1 };
    GpRectF VAR_14 = { 1, 3, 1, 0 };

    VAR_9 = FUNC_0(&VAR_11, 10, 11, 0, VAR_4, VAR_6, &VAR_10);
    FUNC_2(VAR_2, VAR_9);
    FUNC_1((GpBrush *) VAR_10);

    VAR_9 = FUNC_0(&VAR_12, 10, 11, 135, VAR_4, (WrapMode)(VAR_6 - 1), &VAR_10);
    FUNC_2(VAR_2, VAR_9);
    FUNC_1((GpBrush *) VAR_10);

    VAR_9 = FUNC_0(&VAR_12, 10, 11, -225, VAR_0, (WrapMode)(VAR_6 - 1), &VAR_10);
    FUNC_2(VAR_2, VAR_9);
    FUNC_1((GpBrush *) VAR_10);

    VAR_9 = FUNC_0(&VAR_11, 10, 11, 405, VAR_4, (WrapMode)(VAR_5 + 1), &VAR_10);
    FUNC_2(VAR_2, VAR_9);
    FUNC_1((GpBrush *) VAR_10);

    VAR_9 = FUNC_0(&VAR_11, 10, 11, 45, VAR_0, (WrapMode)(VAR_5 + 1), &VAR_10);
    FUNC_2(VAR_2, VAR_9);
    FUNC_1((GpBrush *) VAR_10);

    VAR_9 = FUNC_0(&VAR_11, 10, 11, 90, VAR_4, VAR_7, &VAR_10);
    FUNC_2(VAR_2, VAR_9);

    VAR_9 = FUNC_0(((void*)0), 10, 11, 90, VAR_4, VAR_6, &VAR_10);
    FUNC_2(VAR_1, VAR_9);

    VAR_9 = FUNC_0(&VAR_13, 10, 11, 90, VAR_4, VAR_8, &VAR_10);
    FUNC_2(VAR_3, VAR_9);

    VAR_9 = FUNC_0(&VAR_14, 10, 11, 90, VAR_4, VAR_8, &VAR_10);
    FUNC_2(VAR_3, VAR_9);

    VAR_9 = FUNC_0(&VAR_13, 10, 11, 90, VAR_4, VAR_8, ((void*)0));
    FUNC_2(VAR_1, VAR_9);

    VAR_9 = FUNC_0(&VAR_14, 10, 11, 90, VAR_4, VAR_8, ((void*)0));
    FUNC_2(VAR_1, VAR_9);

    VAR_9 = FUNC_0(&VAR_13, 10, 11, 90, VAR_4, VAR_5, &VAR_10);
    FUNC_2(VAR_1, VAR_9);

    VAR_9 = FUNC_0(&VAR_14, 10, 11, 90, VAR_4, VAR_5, &VAR_10);
    FUNC_2(VAR_1, VAR_9);

    VAR_9 = FUNC_0(&VAR_11, 10, 11, 90, VAR_4, VAR_5, &VAR_10);
    FUNC_2(VAR_1, VAR_9);

    VAR_9 = FUNC_0(&VAR_11, 10, 11, 90, VAR_4, VAR_6, ((void*)0));
    FUNC_2(VAR_1, VAR_9);

    FUNC_1((GpBrush *) VAR_10);
}
