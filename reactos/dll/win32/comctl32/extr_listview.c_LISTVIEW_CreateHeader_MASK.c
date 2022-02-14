
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {int dwStyle; scalar_t__ himlSmall; scalar_t__ hwndHeader; scalar_t__ hFont; int hwndSelf; } ;
typedef int LPARAM ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef int INT ;
typedef scalar_t__ HINSTANCE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int *,int,int ,int ,int ,int ,int ,int *,scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static INT FUNC_5(LISTVIEW_INFO *VAR_14)
{
    DWORD VAR_15 = VAR_13 | VAR_7 | VAR_5 | VAR_4;
    HINSTANCE VAR_16;

    if (VAR_14->hwndHeader) return 0;

    FUNC_4("Creating header for list %p\n", VAR_14->hwndSelf);


    VAR_15 |= (VAR_9 & VAR_14->dwStyle) ? 0 : VAR_3;
    VAR_15 |= (VAR_8 & VAR_14->dwStyle) ? VAR_6 : 0;

    VAR_16 = (HINSTANCE)FUNC_1(VAR_14->hwndSelf, VAR_0);


    VAR_14->hwndHeader = FUNC_0(VAR_11, ((void*)0), VAR_15,
      0, 0, 0, 0, VAR_14->hwndSelf, ((void*)0), VAR_16, ((void*)0));
    if (!VAR_14->hwndHeader) return -1;


    FUNC_3(VAR_14->hwndHeader, VAR_2, VAR_10, 0);


    FUNC_3(VAR_14->hwndHeader, VAR_12, (WPARAM)VAR_14->hFont, VAR_10);


    if (VAR_14->himlSmall)
        FUNC_3(VAR_14->hwndHeader, VAR_1, 0, (LPARAM)VAR_14->himlSmall);

    FUNC_2(VAR_14);

    return 0;
}
