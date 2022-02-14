
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;


 int FUNC_0 (struct rb_node*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static int FUNC_2(struct rb_node *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_0; VAR_0 = FUNC_1(VAR_0))
  VAR_1 += !FUNC_0(VAR_0);
 return VAR_1;
}
