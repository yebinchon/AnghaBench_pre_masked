
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; scalar_t__ owner; } ;
typedef TYPE_1__ vncBuffer ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(vncBuffer * VAR_0)
{
 if (VAR_0->owner)
  FUNC_0(VAR_0->data);
 FUNC_0(VAR_0);
}
