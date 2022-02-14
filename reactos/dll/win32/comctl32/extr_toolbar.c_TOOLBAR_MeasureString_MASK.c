
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int cy; int cx; } ;
struct TYPE_15__ {int bottom; int right; } ;
struct TYPE_14__ {int fsState; int fsStyle; } ;
struct TYPE_13__ {scalar_t__ nMaxTextRows; int dwExStyle; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef TYPE_3__ RECT ;
typedef int * LPWSTR ;
typedef TYPE_4__* LPSIZE ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int,TYPE_3__*,int) ;
 int FUNC_1 (int ,int *,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (TYPE_1__ const*,TYPE_2__ const*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const TOOLBAR_INFO *VAR_8, const TBUTTON_INFO *VAR_9,
        HDC VAR_10, LPSIZE VAR_11)
{
    RECT VAR_12;

    VAR_11->cx = 0;
    VAR_11->cy = 0;

    if (VAR_8->nMaxTextRows > 0 &&
        !(VAR_9->fsState & VAR_6) &&
        (!(VAR_8->dwExStyle & VAR_7) ||
        (VAR_9->fsStyle & VAR_1)) )
    {
        LPWSTR VAR_13 = FUNC_3(VAR_8, VAR_9);

 if(VAR_13 != ((void*)0)) {

     FUNC_1 (VAR_10, VAR_13, FUNC_5 (VAR_13), VAR_11);


            FUNC_2(&VAR_12, 0, 0, VAR_11->cx, VAR_11->cy);


     FUNC_0 (VAR_10, VAR_13, -1, &VAR_12, VAR_5 | VAR_4 |
         VAR_2 | ((VAR_9->fsStyle & VAR_0) ?
      VAR_3 : 0));


     VAR_11->cx = VAR_12.right;
     VAR_11->cy = VAR_12.bottom;
 }
    }

    FUNC_4("string size %d x %d!\n", VAR_11->cx, VAR_11->cy);
}
