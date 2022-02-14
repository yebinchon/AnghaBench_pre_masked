
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {void* entries; int nr_entries; int write; int seek; int refresh; } ;


 int FUNC_0 (struct ui_browser*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3, char * const VAR_4[])
{
 struct ui_browser VAR_5 = {
  .entries = (void *)VAR_4,
  .refresh = VAR_0,
  .seek = VAR_1,
  .write = VAR_2,
  .nr_entries = VAR_3,
 };

 return FUNC_0(&VAR_5);
}
