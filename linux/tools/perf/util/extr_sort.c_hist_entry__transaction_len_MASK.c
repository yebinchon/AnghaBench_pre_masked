
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; int skip_for_len; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(void)
{
 int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_0[VAR_1].name; VAR_1++) {
  if (!VAR_0[VAR_1].skip_for_len)
   VAR_2 += FUNC_0(VAR_0[VAR_1].name);
 }
 VAR_2 += 4;
 return VAR_2;
}
