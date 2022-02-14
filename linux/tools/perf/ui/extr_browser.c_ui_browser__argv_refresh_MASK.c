
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {unsigned int top_idx; unsigned int nr_entries; unsigned int rows; int (* write ) (struct ui_browser*,char**,unsigned int) ;int (* filter ) (struct ui_browser*,char*) ;int * entries; int * top; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ui_browser*,char*) ;
 int FUNC_2 (struct ui_browser*,char**,unsigned int) ;
 int FUNC_3 (struct ui_browser*,unsigned int,int ) ;

unsigned int FUNC_4(struct ui_browser *VAR_1)
{
 unsigned int VAR_2 = 0, VAR_3 = VAR_1->top_idx;
 char **VAR_4;

 if (VAR_1->top == ((void*)0))
  VAR_1->top = VAR_1->entries;

 VAR_4 = (char **)VAR_1->top;
 while (VAR_3 < VAR_1->nr_entries &&
        VAR_2 < (unsigned)VAR_0 - 1) {
  FUNC_0(VAR_4 < (char **)VAR_1->entries + VAR_1->nr_entries);
  if (!VAR_1->filter || !VAR_1->filter(VAR_1, *VAR_4)) {
   FUNC_3(VAR_1, VAR_2, 0);
   VAR_1->write(VAR_1, VAR_4, VAR_2);
   if (++VAR_2 == VAR_1->rows)
    break;
  }

  ++VAR_3;
  ++VAR_4;
 }

 return VAR_2;
}
