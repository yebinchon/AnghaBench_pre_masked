
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {int dummy; } ;
struct priv {int frame_size; int frame_rate; } ;
struct demuxer {int duration; struct priv* priv; struct stream* stream; } ;
typedef int int64_t ;


 int FUNC_0 (struct stream*) ;

__attribute__((used)) static int FUNC_1(struct demuxer *VAR_0)
{
    struct stream *VAR_1 = VAR_0->stream;
    struct priv *VAR_2 = VAR_0->priv;

    int64_t VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 >= 0)
        VAR_0->duration = (VAR_3 / VAR_2->frame_size) / VAR_2->frame_rate;

    return 0;
}
