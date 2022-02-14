
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vo {int osd; TYPE_1__* priv; } ;
struct TYPE_3__ {int osd_pts; int osd_res; int * osd_fmt_table; int d3d_device; } ;
typedef TYPE_1__ d3d_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int*,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_2)
{
    d3d_priv *VAR_3 = VAR_2->priv;
    if (!VAR_3->d3d_device)
        return;

    bool VAR_4[VAR_0];
    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        VAR_4[VAR_5] = !!VAR_3->osd_fmt_table[VAR_5];

    FUNC_0(VAR_2->osd, VAR_3->osd_res, VAR_3->osd_pts, 0, VAR_4,
             VAR_1, VAR_3);
}
