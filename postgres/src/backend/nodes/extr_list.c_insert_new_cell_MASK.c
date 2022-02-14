
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int max_length; int * elements; } ;
typedef int ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static ListCell *
FUNC_3(List *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 >= 0 && VAR_1 <= VAR_0->length);


 if (VAR_0->length >= VAR_0->max_length)
  FUNC_1(VAR_0, VAR_0->length + 1);

 if (VAR_1 < VAR_0->length)
  FUNC_2(&VAR_0->elements[VAR_1 + 1], &VAR_0->elements[VAR_1],
    (VAR_0->length - VAR_1) * sizeof(ListCell));
 VAR_0->length++;

 return &VAR_0->elements[VAR_1];
}
