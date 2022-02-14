
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
typedef TYPE_1__ List ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

List *
FUNC_1(List *VAR_1, int VAR_2)
{
 if (VAR_2 <= 0)
  return VAR_0;


 if (VAR_2 < FUNC_0(VAR_1))
  VAR_1->length = VAR_2;
 return VAR_1;
}
