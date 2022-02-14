
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ iBitmap; } ;
struct TYPE_12__ {int nNumBitmaps; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef scalar_t__ INT ;
typedef int IMAGE_LIST_TYPE ;
typedef int * HIMAGELIST ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__ const*,int ) ;
 int * FUNC_3 (TYPE_1__ const*,int ) ;
 int FUNC_4 (TYPE_1__ const*,scalar_t__) ;
 int * FUNC_5 (TYPE_1__ const*,int ) ;
 int FUNC_6 (scalar_t__) ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int ,int ) ;

__attribute__((used)) static HIMAGELIST
FUNC_12 (const TOOLBAR_INFO *VAR_2, TBUTTON_INFO *VAR_3,
                                IMAGE_LIST_TYPE VAR_4, INT * VAR_5)
{
    HIMAGELIST VAR_6;

    if (!FUNC_9(VAR_2,VAR_3->iBitmap)) {
 if (VAR_3->iBitmap == VAR_1) return ((void*)0);
 FUNC_11("bitmap for ID %d, index %d is not valid, number of bitmaps in imagelist: %d\n",
     FUNC_6(VAR_3->iBitmap), FUNC_7(VAR_3->iBitmap), VAR_2->nNumBitmaps);
 return ((void*)0);
    }

    if ((*VAR_5 = FUNC_8(VAR_2, VAR_3)) < 0) {
 if ((*VAR_5 == VAR_0) ||
     (*VAR_5 == VAR_1)) return ((void*)0);
 FUNC_0("TBN_GETDISPINFO returned invalid index %d\n",
     *VAR_5);
 return ((void*)0);
    }

    switch(VAR_4)
    {
    case 130:
        VAR_6 = FUNC_2(VAR_2, FUNC_4(VAR_2, VAR_3->iBitmap));
        break;
    case 128:
        VAR_6 = FUNC_5(VAR_2, FUNC_4(VAR_2, VAR_3->iBitmap));
        break;
    case 129:
        VAR_6 = FUNC_3(VAR_2, FUNC_4(VAR_2, VAR_3->iBitmap));
        break;
    default:
        VAR_6 = ((void*)0);
        FUNC_1("Shouldn't reach here\n");
    }

    if (!VAR_6)
       FUNC_10("no image list\n");

    return VAR_6;
}
