
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int rows; int (* write ) (struct ui_browser*,struct rb_node*,int) ;struct rb_node* top; int entries; } ;
struct rb_node {int dummy; } ;


 struct rb_node* FUNC_0 (int ) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;
 int FUNC_2 (struct ui_browser*,struct rb_node*,int) ;
 int FUNC_3 (struct ui_browser*,int,int ) ;

unsigned int FUNC_4(struct ui_browser *VAR_0)
{
 struct rb_node *VAR_1;
 int VAR_2 = 0;

 if (VAR_0->top == ((void*)0))
                VAR_0->top = FUNC_0(VAR_0->entries);

 VAR_1 = VAR_0->top;

 while (VAR_1 != ((void*)0)) {
  FUNC_3(VAR_0, VAR_2, 0);
  VAR_0->write(VAR_0, VAR_1, VAR_2);
  if (++VAR_2 == VAR_0->rows)
   break;
  VAR_1 = FUNC_1(VAR_1);
 }

 return VAR_2;
}
