
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int flags; scalar_t__ stage; int id; int lParam; int wParam; int message; } ;
typedef int WPARAM ;
typedef int UINT ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(UINT VAR_5, WPARAM VAR_6, LPARAM VAR_7, struct message *VAR_8)
{
    VAR_8->message = VAR_0;
    VAR_8->flags = VAR_3|VAR_4|VAR_2|VAR_1;
    VAR_8->wParam = VAR_6;
    VAR_8->lParam = VAR_7;
    VAR_8->id = VAR_5;
    VAR_8->stage = 0;
}
