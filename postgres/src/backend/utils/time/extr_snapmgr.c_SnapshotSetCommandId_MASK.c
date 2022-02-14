
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* curcid; } ;
struct TYPE_3__ {void* curcid; } ;
typedef void* CommandId ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_0(CommandId VAR_3)
{
 if (!VAR_1)
  return;

 if (VAR_0)
  VAR_0->curcid = VAR_3;
 if (VAR_2)
  VAR_2->curcid = VAR_3;

}
