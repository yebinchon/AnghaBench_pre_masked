
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned short vs; unsigned short va; } ;
typedef TYPE_1__ ax25_cb ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned short) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(ax25_cb *VAR_0, unsigned short VAR_1)
{
 if (VAR_0->vs == VAR_1) {
  FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_0);
  FUNC_5(VAR_0);
  FUNC_4(VAR_0);
  return 1;
 } else {
  if (VAR_0->va != VAR_1) {
   FUNC_2(VAR_0, VAR_1);
   FUNC_1(VAR_0);
   FUNC_3(VAR_0);
   return 1;
  }
 }
 return 0;
}
