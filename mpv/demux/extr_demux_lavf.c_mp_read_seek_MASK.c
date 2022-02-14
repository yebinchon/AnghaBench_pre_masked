
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_avseek {int stream_index; int flags; int timestamp; } ;
struct stream {int dummy; } ;
struct demuxer {TYPE_1__* priv; } ;
struct TYPE_2__ {struct stream* stream; } ;
typedef TYPE_1__ lavf_priv_t ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct stream*,int ,struct stream_avseek*) ;
 int FUNC_2 (struct stream*) ;

__attribute__((used)) static int64_t FUNC_3(void *VAR_3, int VAR_4, int64_t VAR_5, int VAR_6)
{
    struct demuxer *VAR_7 = VAR_3;
    lavf_priv_t *VAR_8 = VAR_7->priv;
    struct stream *VAR_9 = VAR_8->stream;

    struct stream_avseek VAR_10 = {
        .stream_index = VAR_4,
        .timestamp = VAR_5,
        .flags = VAR_6,
    };

    if (FUNC_1(VAR_9, VAR_1, &VAR_10) == VAR_2) {
        FUNC_2(VAR_9);
        return 0;
    }
    return FUNC_0(VAR_0);
}
