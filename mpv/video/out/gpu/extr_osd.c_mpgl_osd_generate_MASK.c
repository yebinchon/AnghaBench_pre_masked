
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpgl_osd_part {scalar_t__ num_subparts; scalar_t__ prev_num_subparts; } ;
struct mpgl_osd {int stereo_mode; int change_flag; struct mpgl_osd_part** parts; int formats; int osd_res; int osd; } ;
struct mp_osd_res {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,double,int,int ,int ,struct mpgl_osd*) ;
 int FUNC_1 (struct mpgl_osd*,struct mp_osd_res,int) ;

void FUNC_2(struct mpgl_osd *VAR_2, struct mp_osd_res VAR_3, double VAR_4,
                       int VAR_5, int VAR_6)
{
    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
        VAR_2->parts[VAR_7]->num_subparts = 0;

    FUNC_1(VAR_2, VAR_3, VAR_5);

    FUNC_0(VAR_2->osd, VAR_2->osd_res, VAR_4, VAR_6, VAR_2->formats, VAR_1, VAR_2);
    VAR_2->stereo_mode = VAR_5;



    for (int VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        struct mpgl_osd_part *VAR_9 = VAR_2->parts[VAR_8];
        if (VAR_9->num_subparts != VAR_9->prev_num_subparts)
            VAR_2->change_flag = 1;
        VAR_9->prev_num_subparts = VAR_9->num_subparts;
    }
}
