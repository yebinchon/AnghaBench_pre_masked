
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listbox_stat {void* selcount; void* caret; void* anchor; void* selected; } ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (HWND VAR_4, struct listbox_stat *VAR_5)
{
  VAR_5->selected = FUNC_0(VAR_4, VAR_2, 0, 0);
  VAR_5->anchor = FUNC_0(VAR_4, VAR_0, 0, 0);
  VAR_5->caret = FUNC_0(VAR_4, VAR_1, 0, 0);
  VAR_5->selcount = FUNC_0(VAR_4, VAR_3, 0, 0);
}
