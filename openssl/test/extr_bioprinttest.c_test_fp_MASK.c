
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; int w; } ;
typedef TYPE_1__ pw ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ,double const,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
    int VAR_3 = 0, VAR_4;
    const double VAR_5 = 2.0 / 3.0;
    const pw *VAR_6 = &VAR_1[VAR_2];

    if (VAR_0)
        FUNC_2("    {\n");
    VAR_4 = FUNC_0(FUNC_1(VAR_2, VAR_3++, 0.0, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, 0.67, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, VAR_5, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, VAR_5 / 1000, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, VAR_5 / 10000, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, 6.0 + VAR_5, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, 66.0 + VAR_5, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, 666.0 + VAR_5, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, 6666.0 + VAR_5, VAR_6->w, VAR_6->p))
        && FUNC_0(FUNC_1(VAR_2, VAR_3++, 66666.0 + VAR_5, VAR_6->w, VAR_6->p));
    if (VAR_0)
        FUNC_2("    },\n");
    return VAR_4;
}
