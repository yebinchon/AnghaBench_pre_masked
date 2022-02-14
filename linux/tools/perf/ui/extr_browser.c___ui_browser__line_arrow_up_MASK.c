
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ui_browser {scalar_t__ top_idx; int rows; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ui_browser*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct ui_browser *VAR_4,
     unsigned int VAR_5,
     u64 VAR_6, u64 VAR_7)
{
 unsigned int VAR_8, VAR_9;

 FUNC_2(1);

 if (VAR_6 < VAR_4->top_idx + VAR_4->rows) {
  VAR_8 = VAR_6 - VAR_4->top_idx;
  FUNC_4(VAR_4, VAR_8, VAR_5);
  FUNC_3(VAR_1);
  FUNC_4(VAR_4, VAR_8, VAR_5 + 1);
  FUNC_0(2);

  if (VAR_8-- == 0)
   goto out;
 } else
  VAR_8 = VAR_4->rows - 1;

 if (VAR_7 > VAR_4->top_idx)
  VAR_9 = VAR_7 - VAR_4->top_idx;
 else
  VAR_9 = 0;

 FUNC_4(VAR_4, VAR_9, VAR_5);
 FUNC_1(VAR_8 - VAR_9 + 1);

 FUNC_4(VAR_4, VAR_9, VAR_5);
 if (VAR_7 >= VAR_4->top_idx) {
  FUNC_3(VAR_3);
  FUNC_4(VAR_4, VAR_9, VAR_5 + 1);
  FUNC_3(VAR_0);
  FUNC_4(VAR_4, VAR_9, VAR_5 + 2);
  FUNC_3(VAR_2);
 }
out:
 FUNC_2(0);
}
