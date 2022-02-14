
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {scalar_t__ navkeypressed; int use_navkeypressed; } ;
struct annotation {int max_jump_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct annotation* FUNC_0 (struct ui_browser*) ;

__attribute__((used)) static int FUNC_1(struct ui_browser *VAR_4, int VAR_5, bool VAR_6)
{
 struct annotation *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6 && (!VAR_4->use_navkeypressed || VAR_4->navkeypressed))
  return VAR_2;
 if (VAR_5 == VAR_7->max_jump_sources)
  return VAR_3;
 if (VAR_5 > 1)
  return VAR_0;
 return VAR_1;
}
