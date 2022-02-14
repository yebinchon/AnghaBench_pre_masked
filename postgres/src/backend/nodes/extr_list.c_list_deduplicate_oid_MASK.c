
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int length; TYPE_1__* elements; } ;
struct TYPE_7__ {scalar_t__ oid_value; } ;
typedef TYPE_1__ ListCell ;
typedef TYPE_2__ List ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(List *VAR_0)
{
 int VAR_1;

 FUNC_0(FUNC_1(VAR_0));
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 > 1)
 {
  ListCell *VAR_2 = VAR_0->elements;
  int VAR_3 = 0;

  for (int VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
  {
   if (VAR_2[VAR_3].oid_value != VAR_2[VAR_4].oid_value)
    VAR_2[++VAR_3].oid_value = VAR_2[VAR_4].oid_value;
  }
  VAR_0->length = VAR_3 + 1;
 }
 FUNC_2(VAR_0);
}
