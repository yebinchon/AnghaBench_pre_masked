
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_1__* VAR_2 ;

void
FUNC_3(int VAR_3)
{
 if (!FUNC_1(VAR_3))
  FUNC_2(VAR_1, "invalid database encoding: %d", VAR_3);

 VAR_0 = &VAR_2[VAR_3];
 FUNC_0(VAR_0->encoding == VAR_3);
}
