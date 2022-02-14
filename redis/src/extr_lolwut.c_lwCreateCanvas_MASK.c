
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; void* pixels; } ;
typedef TYPE_1__ lwCanvas ;


 int FUNC_0 (void*,int,int) ;
 void* FUNC_1 (int) ;

lwCanvas *FUNC_2(int VAR_0, int VAR_1, int VAR_2) {
    lwCanvas *VAR_3 = FUNC_1(sizeof(*VAR_3));
    VAR_3->width = VAR_0;
    VAR_3->height = VAR_1;
    VAR_3->pixels = FUNC_1(VAR_0*VAR_1);
    FUNC_0(VAR_3->pixels,VAR_2,VAR_0*VAR_1);
    return VAR_3;
}
