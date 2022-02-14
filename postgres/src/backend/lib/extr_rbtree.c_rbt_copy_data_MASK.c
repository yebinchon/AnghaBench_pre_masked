
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ node_size; } ;
typedef TYPE_1__ RBTree ;
typedef int RBTNode ;


 int FUNC_0 (int *,int const*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(RBTree *VAR_0, RBTNode *VAR_1, const RBTNode *VAR_2)
{
 FUNC_0(VAR_1 + 1, VAR_2 + 1, VAR_0->node_size - sizeof(RBTNode));
}
