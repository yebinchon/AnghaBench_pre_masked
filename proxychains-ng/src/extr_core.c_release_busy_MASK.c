
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ps; } ;
typedef TYPE_1__ proxy_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(proxy_data * VAR_2, unsigned int VAR_3) {
 unsigned int VAR_4;
 for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if(VAR_2[VAR_4].ps == VAR_0)
   VAR_2[VAR_4].ps = VAR_1;
 return;
}
