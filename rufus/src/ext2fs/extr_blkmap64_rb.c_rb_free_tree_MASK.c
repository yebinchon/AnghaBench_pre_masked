
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct rb_node {int dummy; } ;
struct bmap_rb_extent {int dummy; } ;


 int FUNC_0 (struct bmap_rb_extent**) ;
 int FUNC_1 (struct rb_node*,struct rb_root*) ;
 struct rb_node* FUNC_2 (struct rb_root*) ;
 struct rb_node* FUNC_3 (struct rb_node*) ;
 struct bmap_rb_extent* FUNC_4 (struct rb_node*) ;

__attribute__((used)) static void FUNC_5(struct rb_root *VAR_0)
{
 struct bmap_rb_extent *VAR_1;
 struct rb_node *VAR_2, *VAR_3;

 for (VAR_2 = FUNC_2(VAR_0); VAR_2; VAR_2 = VAR_3) {
  VAR_3 = FUNC_3(VAR_2);
  VAR_1 = FUNC_4(VAR_2);
  FUNC_1(VAR_2, VAR_0);
  FUNC_0(&VAR_1);
 }
}
