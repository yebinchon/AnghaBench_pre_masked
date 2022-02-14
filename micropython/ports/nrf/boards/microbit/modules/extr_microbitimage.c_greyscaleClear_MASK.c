
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int byte_data; } ;
typedef TYPE_1__ greyscale_t ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(greyscale_t * VAR_0) {
    FUNC_0(&VAR_0->byte_data, 0, (VAR_0->width*VAR_0->height+1)>>1);
}
