
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ncsi_channel {TYPE_1__* modes; } ;
struct TYPE_2__ {int* data; } ;


 size_t VAR_0 ;

bool FUNC_0(struct ncsi_channel *VAR_1)
{
 return !!(VAR_1->modes[VAR_0].data[2] & 0x1);
}
