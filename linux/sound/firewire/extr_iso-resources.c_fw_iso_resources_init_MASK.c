
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int dummy; } ;
struct fw_iso_resources {unsigned long long channels_mask; int allocated; int mutex; struct fw_unit* unit; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct fw_iso_resources *VAR_0, struct fw_unit *VAR_1)
{
 VAR_0->channels_mask = ~0uLL;
 VAR_0->unit = VAR_1;
 FUNC_0(&VAR_0->mutex);
 VAR_0->allocated = 0;

 return 0;
}
