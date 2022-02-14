
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int stride; int data; } ;
typedef TYPE_1__ Jbig2Image ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,int,int,int *) ;

int
FUNC_2(Jbig2Image *VAR_0, FILE *VAR_1)
{

    FUNC_0(VAR_1, "P4\n%d %d\n", VAR_0->width, VAR_0->height);




    FUNC_1(VAR_0->data, 1, VAR_0->height * VAR_0->stride, VAR_1);


    return 0;
}
