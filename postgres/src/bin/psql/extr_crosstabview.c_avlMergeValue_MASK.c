
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; char* sort_value; int rank; } ;
typedef TYPE_1__ pivot_field ;
struct TYPE_7__ {int root; int count; } ;
typedef TYPE_2__ avl_tree ;


 int FUNC_0 (TYPE_2__*,int *,TYPE_1__) ;

__attribute__((used)) static void
FUNC_1(avl_tree *VAR_0, char *VAR_1, char *VAR_2)
{
 pivot_field VAR_3;

 VAR_3.name = VAR_1;
 VAR_3.rank = VAR_0->count;
 VAR_3.sort_value = VAR_2;
 FUNC_0(VAR_0, &VAR_0->root, VAR_3);
}
