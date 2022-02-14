
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sh_stream {int attached_picture; } ;
struct demuxer {TYPE_3__* priv; } ;
struct TYPE_7__ {int num_streams; TYPE_1__* avfc; TYPE_2__** streams; } ;
typedef TYPE_3__ lavf_priv_t ;
struct TYPE_8__ {int discard; } ;
struct TYPE_6__ {struct sh_stream* sh; } ;
struct TYPE_5__ {TYPE_4__** streams; } ;
typedef TYPE_4__ AVStream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sh_stream*) ;

__attribute__((used)) static void FUNC_1(struct demuxer *VAR_2, int VAR_3)
{
    lavf_priv_t *VAR_4 = VAR_2->priv;
    for (int VAR_5 = VAR_3; VAR_5 < VAR_4->num_streams; VAR_5++) {
        struct sh_stream *VAR_6 = VAR_4->streams[VAR_5]->sh;
        AVStream *VAR_7 = VAR_4->avfc->streams[VAR_5];
        bool VAR_8 = VAR_6 && FUNC_0(VAR_6) &&
                        !VAR_6->attached_picture;
        VAR_7->discard = VAR_8 ? VAR_1 : VAR_0;
    }
}
