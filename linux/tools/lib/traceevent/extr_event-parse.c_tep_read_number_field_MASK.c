
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_format_field {int size; int offset; TYPE_1__* event; } ;
struct TYPE_2__ {int tep; } ;


 unsigned long long FUNC_0 (int ,void const*,int) ;

int FUNC_1(struct tep_format_field *VAR_0, const void *VAR_1,
     unsigned long long *VAR_2)
{
 if (!VAR_0)
  return -1;
 switch (VAR_0->size) {
 case 1:
 case 2:
 case 4:
 case 8:
  *VAR_2 = FUNC_0(VAR_0->event->tep,
      VAR_1 + VAR_0->offset, VAR_0->size);
  return 0;
 default:
  return -1;
 }
}
