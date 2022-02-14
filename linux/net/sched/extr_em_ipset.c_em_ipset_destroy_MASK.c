
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_set_info {int index; } ;
struct tcf_ematch {scalar_t__ data; int net; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct tcf_ematch *VAR_0)
{
 const struct xt_set_info *VAR_1 = (const void *) VAR_0->data;
 if (VAR_1) {
  FUNC_0(VAR_0->net, VAR_1->index);
  FUNC_1((void *) VAR_0->data);
 }
}
