
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct TYPE_2__ {int rb_root; } ;


 int FUNC_0 (int) ;
 struct rb_node* FUNC_1 (int *) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 struct rb_node *VAR_2;
 int VAR_3 = 0;
 for (VAR_2 = FUNC_1(&VAR_0.rb_root); VAR_2; VAR_2 = FUNC_2(VAR_2))
  VAR_3++;

 FUNC_0(VAR_3 != VAR_1);
}
