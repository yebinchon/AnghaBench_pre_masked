
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {size_t current_page; TYPE_1__* pages; } ;
struct TYPE_9__ {scalar_t__ page_association; int number; } ;
struct TYPE_8__ {scalar_t__ number; int image; } ;
typedef TYPE_2__ Jbig2Segment ;
typedef TYPE_3__ Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

int
FUNC_3(Jbig2Ctx *VAR_3, Jbig2Segment *VAR_4, const uint8_t *VAR_5)
{
    uint32_t VAR_6 = VAR_3->pages[VAR_3->current_page].number;
    int VAR_7;

    if (VAR_4->page_association != VAR_6) {
        FUNC_1(VAR_3, VAR_1, VAR_4->number,
                    "end of page marker for page %d doesn't match current page number %d", VAR_4->page_association, VAR_6);
    }

    FUNC_1(VAR_3, VAR_0, VAR_4->number, "end of page %d", VAR_6);

    VAR_7 = FUNC_0(VAR_3);
    if (VAR_7 < 0)
        return FUNC_1(VAR_3, VAR_1, VAR_4->number, "failed to complete page");







    return 0;
}
