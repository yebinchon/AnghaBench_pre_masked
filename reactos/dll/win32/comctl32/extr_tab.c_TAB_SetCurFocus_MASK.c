
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int uFocus; int iSelected; int uNumItem; int dwStyle; int hwnd; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int RECT ;
typedef int LRESULT ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,TYPE_1__*,int) ;

__attribute__((used)) static LRESULT FUNC_6 (TAB_INFO *VAR_5, INT VAR_6)
{
  FUNC_5("(%p %d)\n", VAR_5, VAR_6);

  if (VAR_6 < 0) {
      VAR_5->uFocus = -1;
      if (VAR_5->iSelected != -1) {
          VAR_5->iSelected = -1;
          FUNC_4(VAR_5, VAR_2);
          FUNC_3(VAR_5);
      }
  }
  else if (VAR_6 < VAR_5->uNumItem) {
    if (VAR_5->dwStyle & VAR_4) {

      if (VAR_5->uFocus != VAR_6) {
        INT VAR_7 = VAR_5->uFocus;
        RECT VAR_8;

        VAR_5->uFocus = VAR_6;

        if (VAR_7 != VAR_5->iSelected) {
          if (FUNC_2(VAR_5, VAR_7, &VAR_8, ((void*)0)))
            FUNC_0(VAR_5->hwnd, &VAR_8, VAR_0);
        }

        if (FUNC_2(VAR_5, VAR_6, &VAR_8, ((void*)0)))
            FUNC_0(VAR_5->hwnd, &VAR_8, VAR_0);

        FUNC_4(VAR_5, VAR_1);
      }
    } else {
      INT VAR_9 = VAR_5->uFocus;
      if (VAR_5->iSelected != VAR_6 || VAR_9 == -1 ) {
        VAR_5->uFocus = VAR_6;
        if (VAR_9 != -1) {
          if (!FUNC_4(VAR_5, VAR_3)) {
            VAR_5->iSelected = VAR_6;
            FUNC_4(VAR_5, VAR_2);
          }
          else
            VAR_5->iSelected = VAR_6;
          FUNC_1(VAR_5);
          FUNC_3(VAR_5);
        }
      }
    }
  }
  return 0;
}
