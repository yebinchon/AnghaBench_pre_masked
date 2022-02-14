
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int dwStyle; scalar_t__ hwndSelf; int hwndNotify; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LPARAM ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2 (const TRACKBAR_INFO *VAR_3, UINT VAR_4)
{
    UINT VAR_5 = VAR_3->dwStyle & VAR_0 ? VAR_2 : VAR_1;

    FUNC_1("%x\n", VAR_4);

    FUNC_0 (VAR_3->hwndNotify, VAR_5, VAR_4, (LPARAM)VAR_3->hwndSelf);
}
