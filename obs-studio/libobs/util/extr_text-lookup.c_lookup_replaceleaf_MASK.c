
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_node {struct text_leaf* leaf; } ;
struct text_leaf {int dummy; } ;


 int FUNC_0 (struct text_leaf*) ;

__attribute__((used)) static inline void FUNC_1(struct text_node *VAR_0,
          struct text_leaf *VAR_1)
{
 FUNC_0(VAR_0->leaf);
 VAR_0->leaf = VAR_1;
}
