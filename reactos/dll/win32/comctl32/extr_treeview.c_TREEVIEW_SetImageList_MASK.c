
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int normalImageWidth; int normalImageHeight; int stateImageWidth; int stateImageHeight; scalar_t__ uIndent; int root; int uItemHeight; int bHeightSet; void* himlState; void* himlNormal; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int LRESULT ;
typedef void* HIMAGELIST ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*,int*,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int,void*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;



__attribute__((used)) static LRESULT
FUNC_8(TREEVIEW_INFO *VAR_3, UINT VAR_4, HIMAGELIST VAR_5)
{
    HIMAGELIST VAR_6 = 0;
    int VAR_7 = VAR_3->normalImageWidth;
    int VAR_8 = VAR_3->normalImageHeight;

    FUNC_2("%u,%p\n", VAR_4, VAR_5);

    switch (VAR_4)
    {
    case 129:
 VAR_6 = VAR_3->himlNormal;
 VAR_3->himlNormal = VAR_5;

 if (VAR_5)
     FUNC_1(VAR_5, &VAR_3->normalImageWidth,
      &VAR_3->normalImageHeight);
 else
 {
     VAR_3->normalImageWidth = 0;
     VAR_3->normalImageHeight = 0;
 }

 break;

    case 128:
 VAR_6 = VAR_3->himlState;
 VAR_3->himlState = VAR_5;

 if (VAR_5)
     FUNC_1(VAR_5, &VAR_3->stateImageWidth,
      &VAR_3->stateImageHeight);
 else
 {
     VAR_3->stateImageWidth = 0;
     VAR_3->stateImageHeight = 0;
 }

 break;

    default:
        FUNC_0("unknown imagelist type %u\n", VAR_4);
    }

    if (VAR_7 != VAR_3->normalImageWidth ||
        VAR_8 != VAR_3->normalImageHeight)
    {
        BOOL VAR_9 = VAR_0;

        if (VAR_8 != VAR_3->normalImageHeight &&
            !VAR_3->bHeightSet)
        {
            VAR_3->uItemHeight = FUNC_4(VAR_3);
            VAR_9 = VAR_2;
        }

        if (VAR_3->normalImageWidth > VAR_1 &&
            VAR_3->normalImageWidth != VAR_3->uIndent)
        {
            VAR_3->uIndent = VAR_3->normalImageWidth;
            VAR_9 = VAR_2;
        }

        if (VAR_9)
            FUNC_5(VAR_3, ((void*)0));

       FUNC_7(VAR_3, VAR_3->root);
       FUNC_6(VAR_3);
    }

    FUNC_3(VAR_3, ((void*)0));

    return (LRESULT)VAR_6;
}
