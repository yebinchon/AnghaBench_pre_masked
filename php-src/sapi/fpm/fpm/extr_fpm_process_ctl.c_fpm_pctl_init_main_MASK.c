
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int argc; int * argv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3()
{
 int VAR_5;

 VAR_3 = VAR_1.argc;
 VAR_4 = FUNC_1(sizeof(char *) * (VAR_3 + 1));

 if (!VAR_4) {
  return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4[VAR_5] = FUNC_2(VAR_1.argv[VAR_5]);

  if (!VAR_4[VAR_5]) {
   return -1;
  }
 }

 VAR_4[VAR_5] = 0;

 if (0 > FUNC_0(VAR_0, VAR_2, 0)) {
  return -1;
 }
 return 0;
}
