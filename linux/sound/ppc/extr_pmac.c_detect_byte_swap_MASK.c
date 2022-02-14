
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {scalar_t__ can_duplex; scalar_t__ can_byte_swap; TYPE_1__* node; } ;
struct device_node {struct device_node* parent; } ;
struct TYPE_2__ {struct device_node* parent; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_3(struct snd_pmac *VAR_0)
{
 struct device_node *VAR_1;


 for (VAR_1 = VAR_0->node->parent; VAR_1; VAR_1 = VAR_1->parent) {
  if (FUNC_2(VAR_1, "mac-io")) {
   if (FUNC_0(VAR_1, "Keylargo"))
    VAR_0->can_byte_swap = 0;
   break;
  }
 }


 if (FUNC_1("PowerBook3,1") ||
     FUNC_1("PowerBook2,1"))
  VAR_0->can_byte_swap = 0 ;

 if (FUNC_1("PowerBook2,1"))
  VAR_0->can_duplex = 0;
}
