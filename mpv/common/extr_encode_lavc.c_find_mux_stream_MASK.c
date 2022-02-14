
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_stream {int codec_type; } ;
struct encode_priv {int num_streams; struct mux_stream** streams; } ;
struct encode_lavc_context {struct encode_priv* priv; } ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;



__attribute__((used)) static struct mux_stream *FUNC_0(struct encode_lavc_context *VAR_0,
                                          enum AVMediaType VAR_1)
{
    struct encode_priv *VAR_2 = VAR_0->priv;

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_streams; VAR_3++) {
        struct mux_stream *VAR_4 = VAR_2->streams[VAR_3];
        if (VAR_4->codec_type == VAR_1)
            return VAR_4;
    }

    return ((void*)0);
}
