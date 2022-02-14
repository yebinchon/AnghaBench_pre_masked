
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t segment_index; size_t n_segments; int buf_wr_ix; int buf_rd_ix; int buf; size_t current_page; TYPE_1__* pages; TYPE_2__** segments; } ;
struct TYPE_9__ {int data_length; int number; } ;
struct TYPE_8__ {int state; int * image; } ;
typedef TYPE_2__ Jbig2Segment ;
typedef TYPE_3__ Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;

int
FUNC_2(Jbig2Ctx *VAR_3)
{
    int VAR_4;


    if (VAR_3->segment_index != VAR_3->n_segments) {
        Jbig2Segment *VAR_5 = VAR_3->segments[VAR_3->segment_index];




        if ((VAR_5->data_length & 0xffffffff) == 0xffffffff) {
            FUNC_0(VAR_3, VAR_2, VAR_5->number, "file has an invalid segment data length; trying to decode using the available data");
            VAR_5->data_length = VAR_3->buf_wr_ix - VAR_3->buf_rd_ix;
            VAR_4 = FUNC_1(VAR_3, VAR_5, VAR_3->buf + VAR_3->buf_rd_ix);
            VAR_3->buf_rd_ix += VAR_5->data_length;
            VAR_3->segment_index++;
            if (VAR_4 < 0) {
                return FUNC_0(VAR_3, VAR_2, VAR_5->number, "failed to parse segment");
            }
        }
    }


    if (VAR_3->pages[VAR_3->current_page].image == ((void*)0)) {
        return FUNC_0(VAR_3, VAR_1, -1, "page has no image, cannot be completed");
    }

    VAR_3->pages[VAR_3->current_page].state = VAR_0;
    return 0;
}
