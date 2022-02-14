
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xa_mark_t ;
struct xa_state {int xa_offset; int xa_node; int xa; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct xa_state const*) ;

bool FUNC_3(const struct xa_state *VAR_0, xa_mark_t VAR_1)
{
 if (FUNC_2(VAR_0))
  return 0;
 if (!VAR_0->xa_node)
  return FUNC_1(VAR_0->xa, VAR_1);
 return FUNC_0(VAR_0->xa_node, VAR_0->xa_offset, VAR_1);
}
