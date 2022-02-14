
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor_item {int result; struct descriptor_item* name; struct descriptor_item* next; struct descriptor_item* data; struct descriptor_item* items; } ;
struct descriptor {int result; struct descriptor* name; struct descriptor* next; struct descriptor* data; struct descriptor* items; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct descriptor_item*) ;

__attribute__((used)) static void
FUNC_2(struct descriptor *VAR_0)
{
 struct descriptor_item *VAR_1;

 for (VAR_1 = VAR_0->items; VAR_1;)
 {
  struct descriptor_item *VAR_2;

  FUNC_1(VAR_1->data);
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_1(VAR_2);
 }

 FUNC_1(VAR_0->name);
 FUNC_0(VAR_0->result);
 FUNC_1(VAR_0);
}
