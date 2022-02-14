
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {int type; int demuxer_id; } ;
struct demuxer {int dummy; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;


 int FUNC_0 (struct demuxer*) ;
 struct sh_stream* FUNC_1 (struct demuxer*,int) ;

struct sh_stream *FUNC_2(struct demuxer *VAR_0,
                                               enum stream_type VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_0(VAR_0);
    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        struct sh_stream *VAR_5 = FUNC_1(VAR_0, VAR_4);
        if (VAR_5->type == VAR_1 && VAR_5->demuxer_id == VAR_2)
            return VAR_5;
    }
    return ((void*)0);
}
