
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rtype; int size; int* data; } ;
struct TYPE_4__ {TYPE_1__ output; } ;
struct uhid_event {TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct uhid_event *VAR_2)
{

 if (VAR_2->u.output.rtype != VAR_0)
  return;

 if (VAR_2->u.output.size != 2)
  return;

 if (VAR_2->u.output.data[0] != 0x2)
  return;


 FUNC_0(VAR_1, "LED output report received with flags %x\n",
  VAR_2->u.output.data[1]);
}
