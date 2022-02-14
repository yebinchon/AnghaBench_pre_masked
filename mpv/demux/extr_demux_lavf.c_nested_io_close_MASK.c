
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demuxer {TYPE_1__* priv; } ;
struct AVFormatContext {struct demuxer* opaque; } ;
struct TYPE_3__ {int num_nested; int (* default_io_close ) (struct AVFormatContext*,int *) ;TYPE_2__* nested; } ;
typedef TYPE_1__ lavf_priv_t ;
struct TYPE_4__ {int * id; } ;
typedef int AVIOContext ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (struct AVFormatContext*,int *) ;

__attribute__((used)) static void FUNC_2(struct AVFormatContext *VAR_0, AVIOContext *VAR_1)
{
    struct demuxer *VAR_2 = VAR_0->opaque;
    lavf_priv_t *VAR_3 = VAR_2->priv;

    for (int VAR_4 = 0; VAR_4 < VAR_3->num_nested; VAR_4++) {
        if (VAR_3->nested[VAR_4].id == VAR_1) {
            FUNC_0(VAR_3->nested, VAR_3->num_nested, VAR_4);
            break;
        }
    }


    VAR_3->default_io_close(VAR_0, VAR_1);
}
