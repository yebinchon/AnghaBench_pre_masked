
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * kswapd; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int ,TYPE_1__*,char*,int) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ VAR_2 ;

int FUNC_6(int VAR_3)
{
 pg_data_t *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;

 if (VAR_4->kswapd)
  return 0;

 VAR_4->kswapd = FUNC_4(VAR_1, VAR_4, "kswapd%d", VAR_3);
 if (FUNC_1(VAR_4->kswapd)) {

  FUNC_0(VAR_2 < VAR_0);
  FUNC_5("Failed to start kswapd on node %d\n", VAR_3);
  VAR_5 = FUNC_3(VAR_4->kswapd);
  VAR_4->kswapd = ((void*)0);
 }
 return VAR_5;
}
