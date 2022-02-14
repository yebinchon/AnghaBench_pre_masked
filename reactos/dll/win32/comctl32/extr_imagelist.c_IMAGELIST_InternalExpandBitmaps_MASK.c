
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cCurImage; scalar_t__ cMaxImage; scalar_t__ cGrow; int flags; char* has_alpha; scalar_t__ hbmMask; int hdcMask; scalar_t__ hbmImage; int hdcImage; } ;
struct TYPE_8__ {scalar_t__ cx; scalar_t__ cy; } ;
typedef TYPE_1__ SIZE ;
typedef scalar_t__ INT ;
typedef TYPE_2__* HIMAGELIST ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;


 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int VAR_0 ;
 char* FUNC_7 (int ,int ,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (char*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(HIMAGELIST VAR_3, INT VAR_4)
{
    HDC VAR_5;
    HBITMAP VAR_6, VAR_7;
    INT VAR_8;
    SIZE VAR_9;

    FUNC_10("%p has allocated %d, max %d, grow %d images\n", VAR_3, VAR_3->cCurImage, VAR_3->cMaxImage, VAR_3->cGrow);

    if (VAR_3->cCurImage + VAR_4 < VAR_3->cMaxImage)
        return;

    VAR_8 = VAR_3->cMaxImage + FUNC_13(VAR_4, VAR_3->cGrow) + 1;

    FUNC_12(VAR_3, VAR_8, &VAR_9);

    FUNC_10("Create expanded bitmaps : himl=%p x=%d y=%d count=%d\n", VAR_3, VAR_9.cx, VAR_9.cy, VAR_8);
    VAR_5 = FUNC_2 (0);

    VAR_6 = FUNC_8(VAR_5, VAR_3, VAR_8);

    if (VAR_6 == 0)
        FUNC_5("creating new image bitmap (x=%d y=%d)!\n", VAR_9.cx, VAR_9.cy);

    if (VAR_3->cCurImage)
    {
        VAR_7 = FUNC_9 (VAR_5, VAR_6);
        FUNC_0 (VAR_5, 0, 0, VAR_9.cx, VAR_9.cy,
                VAR_3->hdcImage, 0, 0, VAR_2);
        FUNC_9 (VAR_5, VAR_7);
    }
    FUNC_9 (VAR_3->hdcImage, VAR_6);
    FUNC_4 (VAR_3->hbmImage);
    VAR_3->hbmImage = VAR_6;

    if (VAR_3->flags & VAR_1)
    {
        VAR_6 = FUNC_1 (VAR_9.cx, VAR_9.cy, 1, 1, ((void*)0));

        if (VAR_6 == 0)
            FUNC_5("creating new mask bitmap!\n");

 if(VAR_3->cCurImage)
 {
     VAR_7 = FUNC_9 (VAR_5, VAR_6);
     FUNC_0 (VAR_5, 0, 0, VAR_9.cx, VAR_9.cy,
      VAR_3->hdcMask, 0, 0, VAR_2);
     FUNC_9 (VAR_5, VAR_7);
 }
        FUNC_9 (VAR_3->hdcMask, VAR_6);
        FUNC_4 (VAR_3->hbmMask);
        VAR_3->hbmMask = VAR_6;
    }

    if (VAR_3->has_alpha)
    {
        char *VAR_10 = FUNC_7( FUNC_6(), VAR_0, VAR_3->has_alpha, VAR_8 );
        if (VAR_10) VAR_3->has_alpha = VAR_10;
        else
        {
            FUNC_11( VAR_3->has_alpha );
            VAR_3->has_alpha = ((void*)0);
        }
    }

    VAR_3->cMaxImage = VAR_8;

    FUNC_3 (VAR_5);
}
