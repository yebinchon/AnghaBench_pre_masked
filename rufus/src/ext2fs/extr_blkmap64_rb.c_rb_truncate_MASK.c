
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct rb_node {int dummy; } ;
struct bmap_rb_extent {int start; int count; } ;
typedef int __u64 ;


 int FUNC_0 (struct bmap_rb_extent**) ;
 int FUNC_1 (struct rb_node*,struct rb_root*) ;
 struct rb_node* FUNC_2 (struct rb_root*) ;
 struct bmap_rb_extent* FUNC_3 (struct rb_node*) ;

__attribute__((used)) static void FUNC_4(__u64 VAR_0, struct rb_root *VAR_1)
{
 struct bmap_rb_extent *VAR_2;
 struct rb_node *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 while (VAR_3) {
  VAR_2 = FUNC_3(VAR_3);

  if ((VAR_2->start + VAR_2->count - 1) <= VAR_0)
   break;
  else if (VAR_2->start > VAR_0) {
   FUNC_1(VAR_3, VAR_1);
   FUNC_0(&VAR_2);
   VAR_3 = FUNC_2(VAR_1);
   continue;
  } else
   VAR_2->count = VAR_0 - VAR_2->start + 1;
 }
}
