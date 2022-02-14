
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int num_tracks; TYPE_5__** tracks; } ;
typedef TYPE_1__ mkv_demuxer_t ;
struct TYPE_11__ {scalar_t__ priv; } ;
typedef TYPE_2__ demuxer_t ;
struct TYPE_12__ {int type; } ;





 int FUNC_0 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(demuxer_t *VAR_0)
{
    mkv_demuxer_t *VAR_1 = (mkv_demuxer_t *) VAR_0->priv;

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_tracks; VAR_2++) {
        switch (VAR_1->tracks[VAR_2]->type) {
        case 128:
            FUNC_2(VAR_0, VAR_1->tracks[VAR_2]);
            break;
        case 130:
            FUNC_0(VAR_0, VAR_1->tracks[VAR_2]);
            break;
        case 129:
            FUNC_1(VAR_0, VAR_1->tracks[VAR_2]);
            break;
        }
    }
}
