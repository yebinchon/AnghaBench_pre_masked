
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_list; void* state; } ;
typedef TYPE_1__* PredIterInfo ;
typedef int Node ;
typedef int ListCell ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static Node *
FUNC_2(PredIterInfo VAR_0)
{
 ListCell *VAR_1 = (ListCell *) VAR_0->state;
 Node *VAR_2;

 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_1);
 VAR_0->state = (void *) FUNC_1(VAR_0->state_list, VAR_1);
 return VAR_2;
}
