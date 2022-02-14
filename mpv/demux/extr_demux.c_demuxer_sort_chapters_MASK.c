
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demux_chapter {int dummy; } ;
struct TYPE_3__ {scalar_t__ num_chapters; int chapters; } ;
typedef TYPE_1__ demuxer_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_1(demuxer_t *VAR_1)
{
    if (VAR_1->num_chapters) {
        FUNC_0(VAR_1->chapters, VAR_1->num_chapters,
            sizeof(struct demux_chapter), VAR_0);
    }
}
