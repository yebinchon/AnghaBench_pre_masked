
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mkv_demuxer {int tags; } ;
struct ebml_tags {int member_0; } ;
struct ebml_parse_ctx {int talloc_ctx; int member_0; } ;
typedef int stream_t ;
struct TYPE_3__ {int log; int * stream; struct mkv_demuxer* priv; } ;
typedef TYPE_1__ demuxer_t ;


 scalar_t__ FUNC_0 (int *,struct ebml_parse_ctx*,struct ebml_tags*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mkv_demuxer*,struct ebml_tags*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(demuxer_t *VAR_1)
{
    struct mkv_demuxer *VAR_2 = VAR_1->priv;
    stream_t *VAR_3 = VAR_1->stream;

    struct ebml_parse_ctx VAR_4 = {VAR_1->log};
    struct ebml_tags VAR_5 = {0};
    if (FUNC_0(VAR_3, &VAR_4, &VAR_5, &VAR_0) < 0)
        return -1;

    VAR_2->tags = FUNC_1(VAR_2, &VAR_5);
    FUNC_2(VAR_2->tags, VAR_4.talloc_ctx);
    return 0;
}
