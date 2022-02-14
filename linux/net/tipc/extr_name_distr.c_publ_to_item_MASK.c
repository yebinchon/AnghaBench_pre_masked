
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct publication {int key; int port; int upper; int lower; int type; } ;
struct distr_item {void* key; void* port; void* upper; void* lower; void* type; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct distr_item *VAR_0, struct publication *VAR_1)
{
 VAR_0->type = FUNC_0(VAR_1->type);
 VAR_0->lower = FUNC_0(VAR_1->lower);
 VAR_0->upper = FUNC_0(VAR_1->upper);
 VAR_0->port = FUNC_0(VAR_1->port);
 VAR_0->key = FUNC_0(VAR_1->key);
}
