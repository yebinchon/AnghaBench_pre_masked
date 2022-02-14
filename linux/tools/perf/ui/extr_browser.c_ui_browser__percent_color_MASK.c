
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {scalar_t__ navkeypressed; int use_navkeypressed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;

__attribute__((used)) static int FUNC_0(struct ui_browser *VAR_6,
         double VAR_7, bool VAR_8)
{
 if (VAR_8 && (!VAR_6->use_navkeypressed || VAR_6->navkeypressed))
  return VAR_2;
 if (VAR_7 >= VAR_5)
  return VAR_3;
 if (VAR_7 >= VAR_4)
  return VAR_0;
 return VAR_1;
}
