
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stream_info {TYPE_3__* sh; } ;
struct TYPE_14__ {int num_nested; int num_streams; int stream; scalar_t__ own_stream; struct stream_info** streams; TYPE_9__* pb; TYPE_1__* nested; TYPE_8__* avfc; } ;
typedef TYPE_4__ lavf_priv_t ;
struct TYPE_15__ {TYPE_4__* priv; } ;
typedef TYPE_5__ demuxer_t ;
struct TYPE_17__ {struct TYPE_17__* buffer; } ;
struct TYPE_16__ {int * pb; } ;
struct TYPE_13__ {TYPE_2__* codec; } ;
struct TYPE_12__ {int lav_codecpar; } ;
struct TYPE_11__ {int * id; } ;
typedef int AVIOContext ;


 int FUNC_0 (TYPE_5__*,char*,int) ;
 int FUNC_1 (TYPE_9__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_8__**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(demuxer_t *VAR_0)
{
    lavf_priv_t *VAR_1 = VAR_0->priv;
    if (VAR_1) {

        AVIOContext *VAR_2 = VAR_1->avfc ? VAR_1->avfc->pb : ((void*)0);
        FUNC_3(&VAR_1->avfc);




        if (VAR_1->num_nested == 1 && VAR_1->nested[0].id == VAR_2)
            VAR_1->num_nested = 0;
        if (VAR_1->num_nested) {
            FUNC_0(VAR_0, "Leaking %d nested connections (FFmpeg bug).\n",
                    VAR_1->num_nested);
        }
        if (VAR_1->pb)
            FUNC_1(&VAR_1->pb->buffer);
        FUNC_1(&VAR_1->pb);
        for (int VAR_3 = 0; VAR_3 < VAR_1->num_streams; VAR_3++) {
            struct stream_info *VAR_4 = VAR_1->streams[VAR_3];
            if (VAR_4->sh)
                FUNC_2(&VAR_4->sh->codec->lav_codecpar);
        }
        if (VAR_1->own_stream)
            FUNC_4(VAR_1->stream);
        FUNC_5(VAR_1);
        VAR_0->priv = ((void*)0);
    }
}
