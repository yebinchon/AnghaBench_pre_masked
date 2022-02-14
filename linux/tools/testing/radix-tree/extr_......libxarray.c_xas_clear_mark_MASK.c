
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xa_mark_t ;
struct xa_state {unsigned int xa_offset; int xa; struct xa_node* xa_node; } ;
struct xa_node {unsigned int offset; } ;


 scalar_t__ FUNC_0 (struct xa_node*,int ) ;
 int FUNC_1 (struct xa_node*,unsigned int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct xa_node* FUNC_4 (int ,struct xa_node*) ;
 scalar_t__ FUNC_5 (struct xa_state const*) ;

void FUNC_6(const struct xa_state *VAR_0, xa_mark_t VAR_1)
{
 struct xa_node *VAR_2 = VAR_0->xa_node;
 unsigned int VAR_3 = VAR_0->xa_offset;

 if (FUNC_5(VAR_0))
  return;

 while (VAR_2) {
  if (!FUNC_1(VAR_2, VAR_3, VAR_1))
   return;
  if (FUNC_0(VAR_2, VAR_1))
   return;

  VAR_3 = VAR_2->offset;
  VAR_2 = FUNC_4(VAR_0->xa, VAR_2);
 }

 if (FUNC_3(VAR_0->xa, VAR_1))
  FUNC_2(VAR_0->xa, VAR_1);
}
