
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int term; int parentWriter; scalar_t__ has_parent; } ;
typedef TYPE_1__ LeafWriter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(LeafWriter *VAR_0){
  if( VAR_0->has_parent ) FUNC_1(&VAR_0->parentWriter);
  FUNC_0(&VAR_0->term);
  FUNC_0(&VAR_0->data);
}
