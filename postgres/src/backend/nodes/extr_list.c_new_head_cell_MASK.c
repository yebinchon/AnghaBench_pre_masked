
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int max_length; int * elements; } ;
typedef int ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_2(List *VAR_0)
{

 if (VAR_0->length >= VAR_0->max_length)
  FUNC_0(VAR_0, VAR_0->length + 1);

 FUNC_1(&VAR_0->elements[1], &VAR_0->elements[0],
   VAR_0->length * sizeof(ListCell));
 VAR_0->length++;
}
