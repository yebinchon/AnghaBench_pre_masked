
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_stream {int name; int st; } ;
struct encode_priv {int failed; } ;
struct encode_lavc_context {int lock; struct encode_priv* priv; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;


 int FUNC_0 (struct encode_priv*,char*,int ) ;
 struct mux_stream* FUNC_1 (struct encode_lavc_context*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct encode_lavc_context *VAR_0,
                            enum stream_type VAR_1)
{
    if (!VAR_0)
        return;

    struct encode_priv *VAR_2 = VAR_0->priv;

    FUNC_3(&VAR_0->lock);

    enum AVMediaType VAR_3 = FUNC_2(VAR_1);
    struct mux_stream *VAR_4 = FUNC_1(VAR_0, VAR_3);





    if (VAR_4 && !VAR_4->st) {
        FUNC_0(VAR_2, "No data on stream %s.\n", VAR_4->name);
        VAR_2->failed = 1;
    }

    FUNC_4(&VAR_0->lock);
}
