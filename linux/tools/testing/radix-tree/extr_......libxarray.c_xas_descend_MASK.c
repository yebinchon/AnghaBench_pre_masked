
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {unsigned int xa_offset; int xa; struct xa_node* xa_node; int xa_index; } ;
struct xa_node {int dummy; } ;


 unsigned int FUNC_0 (int ,struct xa_node*) ;
 void* FUNC_1 (int ,struct xa_node*,unsigned int) ;
 scalar_t__ FUNC_2 (void*) ;
 unsigned int FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(struct xa_state *VAR_0, struct xa_node *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0->xa_index, VAR_1);
 void *VAR_3 = FUNC_1(VAR_0->xa, VAR_1, VAR_2);

 VAR_0->xa_node = VAR_1;
 if (FUNC_2(VAR_3)) {
  VAR_2 = FUNC_3(VAR_3);
  VAR_3 = FUNC_1(VAR_0->xa, VAR_1, VAR_2);
 }

 VAR_0->xa_offset = VAR_2;
 return VAR_3;
}
