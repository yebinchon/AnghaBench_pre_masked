
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int png_voidp ;
typedef int * png_structp ;
typedef int ** png_infopp ;
typedef int * png_infop ;
typedef scalar_t__ png_bytep ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ stride; scalar_t__ data; int width; } ;
typedef TYPE_1__ Jbig2Image ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (int **,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,scalar_t__,int,int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_7 ;

int
FUNC_12(Jbig2Image *VAR_8, FILE *VAR_9)
{
    uint32_t VAR_10;
    png_structp VAR_11;
    png_infop VAR_12;
    png_bytep VAR_13;

    VAR_11 = FUNC_2(VAR_4, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_11 == ((void*)0)) {
        FUNC_0(VAR_7, "unable to create png structure\n");
        return 2;
    }

    VAR_12 = FUNC_1(VAR_11);
    if (VAR_12 == ((void*)0)) {
        FUNC_0(VAR_7, "unable to create png info structure\n");
        FUNC_3(&VAR_11, (png_infopp) ((void*)0));
        return 3;
    }


    if (FUNC_11(FUNC_4(VAR_11))) {

        FUNC_0(VAR_7, "internal error in libpng saving file\n");
        FUNC_3(&VAR_11, &VAR_12);
        return 4;
    }





    FUNC_7(VAR_11, (png_voidp) VAR_9, VAR_6, VAR_5);


    FUNC_5(VAR_11, VAR_12, VAR_8->width, VAR_8->height, 1, VAR_0, VAR_3, VAR_1, VAR_2);
    FUNC_9(VAR_11, VAR_12);


    FUNC_6(VAR_11);


    VAR_13 = (png_bytep) VAR_8->data;
    for (VAR_10 = 0; VAR_10 < VAR_8->height; VAR_10++) {
        FUNC_10(VAR_11, VAR_13);
        VAR_13 += VAR_8->stride;
    }


    FUNC_8(VAR_11, VAR_12);
    FUNC_3(&VAR_11, &VAR_12);

    return 0;
}
