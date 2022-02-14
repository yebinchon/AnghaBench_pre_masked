
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ level; int expanded; } ;
struct TYPE_5__ {int hwnd; } ;
typedef TYPE_1__ Pane ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef TYPE_2__ Entry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(Pane* VAR_7, Entry* VAR_8)
{
        int VAR_9;

        if (!VAR_8) return;
        VAR_9 = FUNC_0(VAR_7->hwnd, VAR_3, 0, (LPARAM)VAR_8);

 FUNC_1(VAR_7->hwnd, VAR_5);


 for(;;) {
  LRESULT VAR_10 = FUNC_0(VAR_7->hwnd, VAR_4, VAR_9+1, 0);
  Entry* VAR_11 = (Entry*) VAR_10;

  if (VAR_10==VAR_2 || !VAR_11 || VAR_11->level<=VAR_8->level)
   break;

  FUNC_0(VAR_7->hwnd, VAR_1, VAR_9+1, 0);
 }

 VAR_8->expanded = VAR_0;

 FUNC_1(VAR_7->hwnd, VAR_6);
}
