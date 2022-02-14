
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct header_elem {scalar_t__ id; } ;
struct TYPE_5__ {int index_mode; int num_headers; struct header_elem* headers; scalar_t__ index_complete; } ;
typedef TYPE_1__ mkv_demuxer_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ demuxer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct header_elem*) ;

__attribute__((used)) static void FUNC_1(demuxer_t *VAR_1)
{
    mkv_demuxer_t *VAR_2 = VAR_1->priv;

    if (VAR_2->index_complete || VAR_2->index_mode != 1)
        return;

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_headers; VAR_3++) {
        struct header_elem *VAR_4 = &VAR_2->headers[VAR_3];

        if (VAR_4->id == VAR_0)
            FUNC_0(VAR_1, VAR_4);
    }
}
