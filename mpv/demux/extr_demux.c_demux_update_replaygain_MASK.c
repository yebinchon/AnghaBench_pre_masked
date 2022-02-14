
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_stream {scalar_t__ type; TYPE_1__* codec; int tags; } ;
struct replaygain_data {int dummy; } ;
struct demux_internal {int num_streams; struct sh_stream** streams; } ;
struct TYPE_5__ {int metadata; int log; struct demux_internal* in; } ;
typedef TYPE_2__ demuxer_t ;
struct TYPE_4__ {int replaygain_data; } ;


 scalar_t__ VAR_0 ;
 struct replaygain_data* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct demux_internal*,struct replaygain_data*) ;

__attribute__((used)) static void FUNC_2(demuxer_t *VAR_1)
{
    struct demux_internal *VAR_2 = VAR_1->in;
    for (int VAR_3 = 0; VAR_3 < VAR_2->num_streams; VAR_3++) {
        struct sh_stream *VAR_4 = VAR_2->streams[VAR_3];
        if (VAR_4->type == VAR_0 && !VAR_4->codec->replaygain_data) {
            struct replaygain_data *VAR_5 = FUNC_0(VAR_1->log, VAR_4->tags);
            if (!VAR_5)
                VAR_5 = FUNC_0(VAR_1->log, VAR_1->metadata);
            if (VAR_5)
                VAR_4->codec->replaygain_data = FUNC_1(VAR_2, VAR_5);
        }
    }
}
