
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nested_stream {scalar_t__ last_bytes; TYPE_1__* id; } ;
struct demuxer {TYPE_2__* priv; } ;
struct TYPE_4__ {int num_nested; struct nested_stream* nested; } ;
typedef TYPE_2__ lavf_priv_t ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ bytes_read; } ;


 int FUNC_0 (struct demuxer*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct demuxer *VAR_0)
{
    lavf_priv_t *VAR_1 = VAR_0->priv;

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_nested; VAR_2++) {
        struct nested_stream *VAR_3 = &VAR_1->nested[VAR_2];






        int64_t VAR_4 = VAR_3->id->bytes_read;
        int64_t VAR_5 = VAR_4 - VAR_3->last_bytes;
        VAR_3->last_bytes = VAR_4;
        FUNC_0(VAR_0, VAR_5);

    }
}
