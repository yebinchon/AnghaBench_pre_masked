
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_stream {int eof; int refreshing; int eager; int selected; scalar_t__ type; size_t index; int still_image; TYPE_1__* sh; } ;
struct demux_internal {int num_streams; int blocked; int num_ranges; struct demux_cached_range** ranges; TYPE_2__** streams; } ;
struct demux_cached_range {int * streams; } ;
struct TYPE_4__ {struct demux_stream* ds; } ;
struct TYPE_3__ {int attached_picture; int still_image; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct demux_stream*,int) ;
 int FUNC_2 (struct demux_internal*) ;
 int FUNC_3 (struct demux_cached_range*) ;
 int FUNC_4 (struct demux_stream*) ;

__attribute__((used)) static void FUNC_5(struct demux_internal *VAR_1,
                                          struct demux_stream *VAR_2)
{
    VAR_2->eof = 0;
    VAR_2->refreshing = 0;




    bool VAR_3 = 0;
    bool VAR_4 = 0;

    for (int VAR_5 = 0; VAR_5 < VAR_1->num_streams; VAR_5++) {
        struct demux_stream *VAR_6 = VAR_1->streams[VAR_5]->ds;

        VAR_6->still_image = VAR_6->sh->still_image;
        VAR_6->eager = VAR_6->selected && !VAR_6->sh->attached_picture;
        if (VAR_6->eager && !VAR_6->still_image)
            VAR_3 |= VAR_6->type != VAR_0;
        VAR_4 |= VAR_6->selected;
    }



    if (VAR_3) {
        for (int VAR_7 = 0; VAR_7 < VAR_1->num_streams; VAR_7++) {
            struct demux_stream *VAR_8 = VAR_1->streams[VAR_7]->ds;

            if (VAR_8->type == VAR_0)
                VAR_8->eager = 0;
        }
    }

    if (!VAR_4)
        VAR_1->blocked = 0;

    FUNC_1(VAR_2, 1);





    for (int VAR_9 = 0; VAR_9 < VAR_1->num_ranges; VAR_9++) {
        struct demux_cached_range *VAR_10 = VAR_1->ranges[VAR_9];

        if (!VAR_2->selected)
            FUNC_0(VAR_10->streams[VAR_2->index]);

        FUNC_3(VAR_10);
    }

    FUNC_2(VAR_1);

    FUNC_4(VAR_2);
}
