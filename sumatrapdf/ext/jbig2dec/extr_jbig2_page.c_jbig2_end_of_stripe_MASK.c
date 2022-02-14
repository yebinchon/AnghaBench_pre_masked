
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {size_t current_page; TYPE_2__* pages; } ;
struct TYPE_8__ {scalar_t__ end_row; } ;
struct TYPE_7__ {int data_length; int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2Page ;
typedef TYPE_3__ Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (int const*) ;

int
FUNC_2(Jbig2Ctx *VAR_3, Jbig2Segment *VAR_4, const uint8_t *VAR_5)
{
    Jbig2Page *VAR_6 = &VAR_3->pages[VAR_3->current_page];
    uint32_t VAR_7;

    if (VAR_4->data_length < 4)
        return FUNC_0(VAR_3, VAR_0, VAR_4->number, "segment too short");
    VAR_7 = FUNC_1(VAR_5);
    if (VAR_7 < VAR_6->end_row) {
        FUNC_0(VAR_3, VAR_2, VAR_4->number,
                    "end of stripe segment with non-positive end row advance (new end row %d vs current end row %d)", VAR_7, VAR_6->end_row);
    } else {
        FUNC_0(VAR_3, VAR_1, VAR_4->number, "end of stripe: advancing end row from %u to %u", VAR_6->end_row, VAR_7);
    }

    VAR_6->end_row = VAR_7;

    return 0;
}
