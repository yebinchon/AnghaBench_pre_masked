
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w_height; int w_topfill; int w_topline; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2()
{
    int VAR_1;

    VAR_1 = FUNC_1(VAR_0->w_topline);
    if (VAR_1 >= VAR_0->w_height)
 VAR_0->w_topfill = 0;
    else
    {
 VAR_0->w_topfill = FUNC_0(VAR_0, VAR_0->w_topline);
 if (VAR_0->w_topfill + VAR_1 > VAR_0->w_height)
     VAR_0->w_topfill = VAR_0->w_height - VAR_1;
    }
}
