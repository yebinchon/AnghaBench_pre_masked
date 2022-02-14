
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mux_stream {int on_ready_ctx; int (* on_ready ) (int ) ;int st; } ;
struct encode_priv {int header_written; int failed; int num_streams; struct mux_stream** streams; int log; TYPE_4__* muxer; TYPE_2__* metadata; int t0; } ;
struct encode_lavc_context {TYPE_3__* options; struct encode_priv* priv; } ;
struct TYPE_8__ {int metadata; TYPE_1__* oformat; int url; int pb; } ;
struct TYPE_7__ {int fopts; } ;
struct TYPE_6__ {int num_keys; int * values; int * keys; } ;
struct TYPE_5__ {int flags; int name; int long_name; } ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct encode_priv*,char*,...) ;
 int FUNC_1 (struct encode_priv*,char*,int ,...) ;
 int VAR_2 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int **) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct encode_lavc_context *VAR_3)
{
    struct encode_priv *VAR_4 = VAR_3->priv;

    if (VAR_4->header_written || VAR_4->failed)
        return;




    for (int VAR_5 = 0; VAR_5 < VAR_4->num_streams; VAR_5++) {
        if (!VAR_4->streams[VAR_5]->st)
            return;
    }

    if (!(VAR_4->muxer->oformat->flags & VAR_0)) {
        FUNC_1(VAR_4, "Opening output file: %s\n", VAR_4->muxer->url);

        if (FUNC_5(&VAR_4->muxer->pb, VAR_4->muxer->url, VAR_1) < 0) {
            FUNC_0(VAR_4, "could not open '%s'\n", VAR_4->muxer->url);
            goto failed;
        }
    }

    VAR_4->t0 = FUNC_8();

    FUNC_1(VAR_4, "Opening muxer: %s [%s]\n",
            VAR_4->muxer->oformat->long_name, VAR_4->muxer->oformat->name);

    if (VAR_4->metadata) {
        for (int VAR_6 = 0; VAR_6 < VAR_4->metadata->num_keys; VAR_6++) {
            FUNC_3(&VAR_4->muxer->metadata,
                VAR_4->metadata->keys[VAR_6], VAR_4->metadata->values[VAR_6], 0);
        }
    }

    AVDictionary *VAR_7 = ((void*)0);
    FUNC_7(&VAR_7, VAR_3->options->fopts);

    if (FUNC_4(VAR_4->muxer, &VAR_7) < 0) {
        FUNC_0(VAR_4, "Failed to initialize muxer.\n");
        VAR_4->failed = 1;
    } else {
        FUNC_6(VAR_4->log, VAR_2, VAR_7);
    }

    FUNC_2(&VAR_7);

    if (VAR_4->failed)
        goto failed;

    VAR_4->header_written = 1;

    for (int VAR_8 = 0; VAR_8 < VAR_4->num_streams; VAR_8++) {
        struct mux_stream *VAR_9 = VAR_4->streams[VAR_8];

        if (VAR_9->on_ready)
            VAR_9->on_ready(VAR_9->on_ready_ctx);
    }

    return;

failed:
    VAR_4->failed = 1;
}
