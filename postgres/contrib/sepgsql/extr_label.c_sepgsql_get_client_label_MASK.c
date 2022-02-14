
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* label; } ;
typedef TYPE_1__ pending_label ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;

char *
FUNC_2(void)
{

 if (VAR_1)
  return VAR_1;


 if (VAR_3)
 {
  pending_label *VAR_4 = FUNC_1(VAR_3);

  if (VAR_4->label)
   return VAR_4->label;
 }
 else if (VAR_0)
  return VAR_0;


 FUNC_0(VAR_2 != ((void*)0));
 return VAR_2;
}
