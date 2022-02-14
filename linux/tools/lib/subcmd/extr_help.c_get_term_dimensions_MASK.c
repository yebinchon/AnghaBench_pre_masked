
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_row; int ws_col; } ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int ,struct winsize*) ;

__attribute__((used)) static void FUNC_3(struct winsize *VAR_1)
{
 char *VAR_2 = FUNC_1("LINES");

 if (VAR_2 != ((void*)0)) {
  VAR_1->ws_row = FUNC_0(VAR_2);
  VAR_2 = FUNC_1("COLUMNS");
  if (VAR_2 != ((void*)0)) {
   VAR_1->ws_col = FUNC_0(VAR_2);
   if (VAR_1->ws_row && VAR_1->ws_col)
    return;
  }
 }





 VAR_1->ws_row = 25;
 VAR_1->ws_col = 80;
}
