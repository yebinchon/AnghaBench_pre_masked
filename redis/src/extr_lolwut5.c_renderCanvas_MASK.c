
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sds ;
struct TYPE_4__ {int height; int width; } ;
typedef TYPE_1__ lwCanvas ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static sds FUNC_4(lwCanvas *VAR_0) {
    sds VAR_1 = FUNC_3();
    for (int VAR_2 = 0; VAR_2 < VAR_0->height; VAR_2 += 4) {
        for (int VAR_3 = 0; VAR_3 < VAR_0->width; VAR_3 += 2) {


            int VAR_4 = 0;
            if (FUNC_0(VAR_0,VAR_3,VAR_2)) VAR_4 |= (1<<0);
            if (FUNC_0(VAR_0,VAR_3,VAR_2+1)) VAR_4 |= (1<<1);
            if (FUNC_0(VAR_0,VAR_3,VAR_2+2)) VAR_4 |= (1<<2);
            if (FUNC_0(VAR_0,VAR_3+1,VAR_2)) VAR_4 |= (1<<3);
            if (FUNC_0(VAR_0,VAR_3+1,VAR_2+1)) VAR_4 |= (1<<4);
            if (FUNC_0(VAR_0,VAR_3+1,VAR_2+2)) VAR_4 |= (1<<5);
            if (FUNC_0(VAR_0,VAR_3,VAR_2+3)) VAR_4 |= (1<<6);
            if (FUNC_0(VAR_0,VAR_3+1,VAR_2+3)) VAR_4 |= (1<<7);
            char VAR_5[3];
            FUNC_1(VAR_4,VAR_5);
            VAR_1 = FUNC_2(VAR_1,VAR_5,3);
        }
        if (VAR_2 != VAR_0->height-1) VAR_1 = FUNC_2(VAR_1,"\n",1);
    }
    return VAR_1;
}
