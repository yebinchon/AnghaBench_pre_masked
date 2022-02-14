
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int max_page_index; TYPE_1__* pages; } ;
struct TYPE_6__ {int number; int state; int * image; } ;
typedef int Jbig2Image ;
typedef TYPE_2__ Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int,char*,...) ;
 int FUNC_1 (TYPE_2__*,int *) ;

void
FUNC_2(Jbig2Ctx *VAR_3, Jbig2Image *VAR_4)
{
    int VAR_5;

    if (VAR_4 == ((void*)0))
        return;


    for (VAR_5 = 0; VAR_5 < VAR_3->max_page_index; VAR_5++) {
        if (VAR_3->pages[VAR_5].image == VAR_4) {
            FUNC_1(VAR_3, VAR_4);
            VAR_3->pages[VAR_5].state = VAR_0;
            FUNC_0(VAR_3, VAR_1, -1, "page %d released by the client", VAR_3->pages[VAR_5].number);
            return;
        }
    }


    FUNC_0(VAR_3, VAR_2, -1, "failed to release unknown page");
}
