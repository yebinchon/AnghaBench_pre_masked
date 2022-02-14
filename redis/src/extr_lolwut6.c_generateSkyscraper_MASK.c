
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct skyscraper {int height; int xoff; int width; int color; scalar_t__ windows; } ;
struct TYPE_5__ {int height; } ;
typedef TYPE_1__ lwCanvas ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 () ;

void FUNC_3(lwCanvas *VAR_0, struct skyscraper *VAR_1) {
    int VAR_2 = VAR_0->height-1;
    int VAR_3 = VAR_2 - VAR_1->height + 1;
    for (int VAR_4 = VAR_2; VAR_4 >= VAR_3; VAR_4--) {
        for (int VAR_5 = VAR_1->xoff; VAR_5 < VAR_1->xoff+VAR_1->width; VAR_5++) {

            if (VAR_4 == VAR_3 && (VAR_5 <= VAR_1->xoff+1 || VAR_5 >= VAR_1->xoff+VAR_1->width-2))
                continue;
            int VAR_6 = VAR_1->color;



            if (VAR_1->windows &&
                VAR_5 > VAR_1->xoff+1 &&
                VAR_5 < VAR_1->xoff+VAR_1->width-2 &&
                VAR_4 > VAR_3+1 &&
                VAR_4 < VAR_2-1)
            {


                int VAR_7 = VAR_5 - (VAR_1->xoff+1);
                int VAR_8 = VAR_4 - (VAR_3+1);




                if (VAR_7/2 % 2 && VAR_8 % 2) {
                    do {
                        VAR_6 = 1 + FUNC_2() % 2;
                    } while (VAR_6 == VAR_1->color);


                    if (VAR_7 % 2) VAR_6 = FUNC_1(VAR_0,VAR_5-1,VAR_4);
                }
            }
            FUNC_0(VAR_0,VAR_5,VAR_4,VAR_6);
        }
    }
}
