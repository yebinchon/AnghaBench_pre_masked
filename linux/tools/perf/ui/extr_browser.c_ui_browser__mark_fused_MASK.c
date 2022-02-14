
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {unsigned int top_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ui_browser*,unsigned int,unsigned int) ;

void FUNC_4(struct ui_browser *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, bool VAR_5)
{
 unsigned int VAR_6;

 if (VAR_4 >= VAR_2->top_idx)
  VAR_6 = VAR_4 - VAR_2->top_idx;
 else
  return;

 FUNC_1(1);

 if (VAR_5) {
  FUNC_3(VAR_2, VAR_6, VAR_3 - 1);
  FUNC_2(VAR_1);
  FUNC_3(VAR_2, VAR_6, VAR_3);
  FUNC_0(2);
  FUNC_3(VAR_2, VAR_6 + 1, VAR_3 - 1);
  FUNC_2(VAR_0);
 } else {
  FUNC_3(VAR_2, VAR_6, VAR_3 - 1);
  FUNC_2(VAR_0);
  FUNC_3(VAR_2, VAR_6, VAR_3);
  FUNC_0(2);
 }

 FUNC_1(0);
}
