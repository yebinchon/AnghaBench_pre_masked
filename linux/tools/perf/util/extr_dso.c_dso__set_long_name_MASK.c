
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct dso {int long_name_allocated; char const* long_name; int long_name_len; struct rb_root* root; int rb_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rb_root*,struct dso*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,struct rb_root*) ;
 int FUNC_4 (char const*) ;

void FUNC_5(struct dso *VAR_0, const char *VAR_1, bool VAR_2)
{
 struct rb_root *VAR_3 = VAR_0->root;

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_0->long_name_allocated)
  FUNC_2((char *)VAR_0->long_name);

 if (VAR_3) {
  FUNC_3(&VAR_0->rb_node, VAR_3);




  FUNC_0(&VAR_0->rb_node);
  VAR_0->root = ((void*)0);
 }

 VAR_0->long_name = VAR_1;
 VAR_0->long_name_len = FUNC_4(VAR_1);
 VAR_0->long_name_allocated = VAR_2;

 if (VAR_3)
  FUNC_1(VAR_3, VAR_0, ((void*)0));
}
