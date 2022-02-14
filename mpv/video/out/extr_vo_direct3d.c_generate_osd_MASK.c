
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sub_bitmaps {scalar_t__ num_parts; size_t format; size_t render_index; scalar_t__ change_id; } ;
struct osdpart {scalar_t__ change_id; scalar_t__ num_vertices; } ;
struct TYPE_4__ {struct osdpart** osd; int * osd_fmt_table; } ;
typedef TYPE_1__ d3d_priv ;


 int FUNC_0 (TYPE_1__*,struct osdpart*,struct sub_bitmaps*) ;

__attribute__((used)) static struct osdpart *FUNC_1(d3d_priv *VAR_0, struct sub_bitmaps *VAR_1)
{
    if (VAR_1->num_parts == 0 || !VAR_0->osd_fmt_table[VAR_1->format])
        return ((void*)0);

    struct osdpart *VAR_2 = VAR_0->osd[VAR_1->render_index];

    if (VAR_1->change_id != VAR_2->change_id)
        FUNC_0(VAR_0, VAR_2, VAR_1);

    return VAR_2->num_vertices ? VAR_2 : ((void*)0);
}
