
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ps; } ;
typedef TYPE_1__ proxy_data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(proxy_data * VAR_1, unsigned int VAR_2) {
 unsigned int VAR_3;
 int VAR_4 = 0;
 FUNC_0(VAR_1, VAR_2);
 for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if(VAR_1[VAR_3].ps == VAR_0)
   VAR_4++;
 return VAR_4;
}
