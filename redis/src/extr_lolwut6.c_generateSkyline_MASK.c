
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct skyscraper {int color; int xoff; int width; int height; int windows; } ;
struct TYPE_4__ {int width; int height; } ;
typedef TYPE_1__ lwCanvas ;


 int FUNC_0 (TYPE_1__*,struct skyscraper*) ;
 int FUNC_1 () ;

void FUNC_2(lwCanvas *VAR_0) {
    struct skyscraper VAR_1;




    for (int VAR_2 = 2; VAR_2 >= 1; VAR_2--) {
        VAR_1.color = VAR_2;
        for (int VAR_3 = -10; VAR_3 < VAR_0->width;) {
            VAR_3 += FUNC_1() % 8;
            VAR_1.xoff = VAR_3;
            VAR_1.width = 10 + FUNC_1()%9;
            if (VAR_2 == 2)
                VAR_1.height = VAR_0->height/2 + FUNC_1()%VAR_0->height/2;
            else
                VAR_1.height = VAR_0->height/2 + FUNC_1()%VAR_0->height/3;
            VAR_1.windows = 0;
            FUNC_0(VAR_0, &VAR_1);
            if (VAR_2 == 2)
                VAR_3 += VAR_1.width/2;
            else
                VAR_3 += VAR_1.width+1;
        }
    }


    VAR_1.color = 0;
    for (int VAR_4 = -10; VAR_4 < VAR_0->width;) {
        VAR_4 += FUNC_1() % 8;
        VAR_1.xoff = VAR_4;
        VAR_1.width = 5 + FUNC_1()%14;
        if (VAR_1.width % 4) VAR_1.width += (VAR_1.width % 3);
        VAR_1.height = VAR_0->height/3 + FUNC_1()%VAR_0->height/2;
        VAR_1.windows = 1;
        FUNC_0(VAR_0, &VAR_1);
        VAR_4 += VAR_1.width+5;
    }
}
