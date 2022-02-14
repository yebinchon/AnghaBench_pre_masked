
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nr_of_files; int curr_frame; TYPE_2__* sh; } ;
typedef TYPE_3__ mf_t ;
struct TYPE_9__ {TYPE_3__* priv; } ;
typedef TYPE_4__ demuxer_t ;
struct TYPE_7__ {TYPE_1__* codec; } ;
struct TYPE_6__ {double fps; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(demuxer_t *VAR_1, double VAR_2, int VAR_3)
{
    mf_t *VAR_4 = VAR_1->priv;
    int VAR_5 = VAR_2 * VAR_4->sh->codec->fps;
    if (VAR_3 & VAR_0)
        VAR_5 = VAR_2 * (VAR_4->nr_of_files - 1);
    if (VAR_5 < 0)
        VAR_5 = 0;
    if (VAR_5 >= VAR_4->nr_of_files)
        VAR_5 = VAR_4->nr_of_files;
    VAR_4->curr_frame = VAR_5;
}
