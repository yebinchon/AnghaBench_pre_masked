
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int hwnd; TYPE_2__* ofnA; TYPE_1__* ofnW; } ;
struct TYPE_6__ {int nMaxFileTitle; scalar_t__* lpstrFileTitle; } ;
struct TYPE_5__ {int * lpstrFileTitle; } ;
typedef TYPE_1__* LPOPENFILENAMEW ;
typedef TYPE_2__* LPOPENFILENAMEA ;
typedef int LPARAM ;
typedef int LONG ;
typedef TYPE_3__ FD31_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int *,int,scalar_t__*,int,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(const FD31_DATA *VAR_4)
{
  LONG VAR_5;
  LPOPENFILENAMEW VAR_6 = VAR_4->ofnW;
  LPOPENFILENAMEA VAR_7 = VAR_4->ofnA;

  if (VAR_6->lpstrFileTitle != ((void*)0))
  {
    VAR_5 = FUNC_0(VAR_4->hwnd, VAR_3, VAR_1, 0, 0);
    FUNC_0(VAR_4->hwnd, VAR_3, VAR_2, VAR_5,
                             (LPARAM)VAR_6->lpstrFileTitle );
    if (VAR_7)
    {
        if (!FUNC_1( VAR_0, 0, VAR_6->lpstrFileTitle, -1,
                                  VAR_7->lpstrFileTitle, VAR_7->nMaxFileTitle, ((void*)0), ((void*)0) ))
            VAR_7->lpstrFileTitle[VAR_7->nMaxFileTitle-1] = 0;
    }
  }
}
