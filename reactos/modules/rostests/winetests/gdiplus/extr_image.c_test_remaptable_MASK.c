
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Argb; } ;
struct TYPE_7__ {int Argb; } ;
struct TYPE_9__ {TYPE_2__ newColor; TYPE_1__ oldColor; } ;
typedef int GpStatus ;
typedef int GpImageAttributes ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef TYPE_3__ ColorMap ;
typedef int ARGB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int,int,int ,int ,int *,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ,int ,int,int,int ,int ,int,int,int ,int *,int *,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,int **) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ,int,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int,int ,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_16(void)
{
    GpStatus VAR_9;
    GpImageAttributes *VAR_10;
    GpBitmap *VAR_11, *VAR_12;
    GpGraphics *VAR_13;
    ARGB VAR_14;
    ColorMap *VAR_15;

    VAR_15 = FUNC_0(sizeof(ColorMap));

    VAR_15->oldColor.Argb = 0xff00ff00;
    VAR_15->newColor.Argb = 0xffff00ff;

    VAR_9 = FUNC_12(((void*)0), VAR_2, VAR_7, 1, VAR_15);
    FUNC_14(VAR_4, VAR_9);

    VAR_9 = FUNC_4(&VAR_10);
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_12(VAR_10, VAR_2, VAR_7, 1, ((void*)0));
    FUNC_14(VAR_4, VAR_9);

    VAR_9 = FUNC_12(VAR_10, VAR_1, VAR_7, 1, VAR_15);
    FUNC_14(VAR_4, VAR_9);

    VAR_9 = FUNC_12(VAR_10, VAR_0, VAR_7, 1, VAR_15);
    FUNC_14(VAR_4, VAR_9);

    VAR_9 = FUNC_12(VAR_10, VAR_2, VAR_7, 0, VAR_15);
    FUNC_14(VAR_4, VAR_9);

    VAR_9 = FUNC_12(VAR_10, VAR_2, VAR_3, 0, ((void*)0));
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_12(VAR_10, VAR_2, VAR_7, 1, VAR_15);
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_3(1, 1, 0, VAR_6, ((void*)0), &VAR_11);
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_3(1, 1, 0, VAR_6, ((void*)0), &VAR_12);
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_2(VAR_11, 0, 0, 0xff00ff00);
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_10((GpImage*)VAR_12, &VAR_13);
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_8(VAR_13, (GpImage*)VAR_11, 0,0,1,1, 0,0,1,1,
 VAR_8, VAR_10, ((void*)0), ((void*)0));
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_1(VAR_12, 0, 0, &VAR_14);
    FUNC_14(VAR_5, VAR_9);
    FUNC_15(FUNC_13(0xffff00ff, VAR_14, 1), "Expected ffff00ff, got %.8x\n", VAR_14);

    VAR_9 = FUNC_11(VAR_10, VAR_2);
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_8(VAR_13, (GpImage*)VAR_11, 0,0,1,1, 0,0,1,1,
        VAR_8, VAR_10, ((void*)0), ((void*)0));
    FUNC_14(VAR_5, VAR_9);

    VAR_9 = FUNC_1(VAR_12, 0, 0, &VAR_14);
    FUNC_14(VAR_5, VAR_9);
    FUNC_15(FUNC_13(0xff00ff00, VAR_14, 1), "Expected ff00ff00, got %.8x\n", VAR_14);

    FUNC_5(VAR_13);
    FUNC_6((GpImage*)VAR_11);
    FUNC_6((GpImage*)VAR_12);
    FUNC_7(VAR_10);
    FUNC_9(VAR_15);
}
