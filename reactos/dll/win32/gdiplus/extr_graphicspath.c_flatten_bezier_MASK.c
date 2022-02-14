
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {double X; double Y; } ;
struct TYPE_7__ {TYPE_2__ pt; } ;
typedef TYPE_1__ path_list_node_t ;
typedef double REAL ;
typedef TYPE_2__ GpPointF ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int,int,int ) ;
 double FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,double) ;
 double FUNC_3 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_4(path_list_node_t *VAR_3, REAL VAR_4, REAL VAR_5, REAL VAR_6, REAL VAR_7,
                           path_list_node_t *VAR_8, REAL VAR_9)
{

    GpPointF VAR_10[5];
    GpPointF VAR_11, VAR_12;
    path_list_node_t *VAR_13;


    VAR_10[0].X = (VAR_3->pt.X + VAR_4) / 2.0;
    VAR_10[0].Y = (VAR_3->pt.Y + VAR_5) / 2.0;

    VAR_11.X = (VAR_4 + VAR_6) / 2.0;
    VAR_11.Y = (VAR_5 + VAR_7) / 2.0;
    VAR_10[1].X = (VAR_10[0].X + VAR_11.X) / 2.0;
    VAR_10[1].Y = (VAR_10[0].Y + VAR_11.Y) / 2.0;
    VAR_10[4].X = (VAR_8->pt.X + VAR_6) / 2.0;
    VAR_10[4].Y = (VAR_8->pt.Y + VAR_7) / 2.0;
    VAR_10[3].X = (VAR_10[4].X + VAR_11.X) / 2.0;
    VAR_10[3].Y = (VAR_10[4].Y + VAR_11.Y) / 2.0;

    VAR_10[2].X = (VAR_10[1].X + VAR_10[3].X) / 2.0;
    VAR_10[2].Y = (VAR_10[1].Y + VAR_10[3].Y) / 2.0;

    if ((VAR_4 == VAR_10[0].X && VAR_5 == VAR_10[0].Y && VAR_6 == VAR_10[1].X && VAR_7 == VAR_10[1].Y) ||
        (VAR_4 == VAR_10[3].X && VAR_5 == VAR_10[3].Y && VAR_6 == VAR_10[4].X && VAR_7 == VAR_10[4].Y))
        return VAR_2;

    VAR_11 = VAR_8->pt;
    VAR_12 = VAR_3->pt;

    if(FUNC_1(((VAR_11.Y - VAR_12.Y)*VAR_10[2].X + (VAR_12.X - VAR_11.X)*VAR_10[2].Y +
        (VAR_12.Y*VAR_11.X - VAR_12.X*VAR_11.Y))) <=
        (0.5 * VAR_9*FUNC_3((FUNC_2(VAR_11.Y - VAR_12.Y, 2.0) + FUNC_2(VAR_12.X - VAR_11.X, 2.0))))){
        return VAR_2;
    }
    else

        if(!(VAR_13 = FUNC_0(VAR_3, VAR_10[2].X, VAR_10[2].Y, VAR_1)))
            return VAR_0;


    FUNC_4(VAR_3, VAR_10[0].X, VAR_10[0].Y, VAR_10[1].X, VAR_10[1].Y, VAR_13, VAR_9);
    FUNC_4(VAR_13, VAR_10[3].X, VAR_10[3].Y, VAR_10[4].X, VAR_10[4].Y, VAR_8, VAR_9);

    return VAR_2;
}
