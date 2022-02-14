
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct rb_node* rb_node; } ;
struct TYPE_4__ {TYPE_1__ rb_root; } ;
struct rblist {int (* node_cmp ) (struct rb_node*,void const*) ;int nr_entries; TYPE_2__ entries; struct rb_node* (* node_new ) (struct rblist*,void const*) ;} ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;


 int FUNC_0 (struct rb_node*,TYPE_2__*,int) ;
 int FUNC_1 (struct rb_node*,struct rb_node*,struct rb_node**) ;
 int FUNC_2 (struct rb_node*,void const*) ;
 struct rb_node* FUNC_3 (struct rblist*,void const*) ;

__attribute__((used)) static struct rb_node *FUNC_4(struct rblist *VAR_0,
      const void *VAR_1,
      bool VAR_2)
{
 struct rb_node **VAR_3 = &VAR_0->entries.rb_root.rb_node;
 struct rb_node *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 bool VAR_6 = 1;

 while (*VAR_3 != ((void*)0)) {
  int VAR_7;

  VAR_4 = *VAR_3;

  VAR_7 = VAR_0->node_cmp(VAR_4, VAR_1);
  if (VAR_7 > 0)
   VAR_3 = &(*VAR_3)->rb_left;
  else if (VAR_7 < 0) {
   VAR_3 = &(*VAR_3)->rb_right;
   VAR_6 = 0;
  }
  else
   return VAR_4;
 }

 if (VAR_2) {
  VAR_5 = VAR_0->node_new(VAR_0, VAR_1);
  if (VAR_5) {
   FUNC_1(VAR_5, VAR_4, VAR_3);
   FUNC_0(VAR_5,
            &VAR_0->entries, VAR_6);
   ++VAR_0->nr_entries;
  }
 }

 return VAR_5;
}
