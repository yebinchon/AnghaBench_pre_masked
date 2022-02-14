
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nested_stream {int * id; } ;
struct demuxer {TYPE_1__* priv; } ;
struct AVFormatContext {struct demuxer* opaque; } ;
struct TYPE_3__ {int (* default_io_open ) (struct AVFormatContext*,int **,char const*,int,int **) ;int num_nested; int nested; } ;
typedef TYPE_1__ lavf_priv_t ;
typedef int AVIOContext ;
typedef int AVDictionary ;


 int FUNC_0 (TYPE_1__*,int ,int ,struct nested_stream) ;
 int FUNC_1 (struct AVFormatContext*,int **,char const*,int,int **) ;

__attribute__((used)) static int FUNC_2(struct AVFormatContext *VAR_0, AVIOContext **VAR_1,
                          const char *VAR_2, int VAR_3, AVDictionary **VAR_4)
{
    struct demuxer *VAR_5 = VAR_0->opaque;
    lavf_priv_t *VAR_6 = VAR_5->priv;

    int VAR_7 = VAR_6->default_io_open(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_7 >= 0) {
        struct nested_stream VAR_8 = {
            .id = *VAR_1,
        };
        FUNC_0(VAR_6, VAR_6->nested, VAR_6->num_nested, VAR_8);
    }
    return VAR_7;
}
