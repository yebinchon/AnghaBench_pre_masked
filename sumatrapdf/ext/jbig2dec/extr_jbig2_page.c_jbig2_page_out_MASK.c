
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int max_page_index; TYPE_1__* pages; } ;
struct TYPE_6__ {scalar_t__ state; int number; int * image; } ;
typedef int Jbig2Image ;
typedef TYPE_2__ Jbig2Ctx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int,char*,int ) ;
 int * FUNC_1 (TYPE_2__*,int *) ;

Jbig2Image *
FUNC_2(Jbig2Ctx *VAR_4)
{
    int VAR_5;


    for (VAR_5 = 0; VAR_5 < VAR_4->max_page_index; VAR_5++) {
        if (VAR_4->pages[VAR_5].state == VAR_0) {
            Jbig2Image *VAR_6 = VAR_4->pages[VAR_5].image;
            uint32_t VAR_7 = VAR_4->pages[VAR_5].number;

            if (VAR_6 == ((void*)0)) {
                FUNC_0(VAR_4, VAR_3, -1, "page %d returned with no associated image", VAR_7);
                continue;
            }

            VAR_4->pages[VAR_5].state = VAR_1;
            FUNC_0(VAR_4, VAR_2, -1, "page %d returned to the client", VAR_7);
            return FUNC_1(VAR_4, VAR_6);
        }
    }


    return ((void*)0);
}
