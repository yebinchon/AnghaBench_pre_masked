
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int select_type ;
struct TYPE_4__ {scalar_t__ ps; } ;
typedef TYPE_1__ proxy_data ;



 scalar_t__ VAR_0 ;

 unsigned int FUNC_0 () ;

__attribute__((used)) static proxy_data *FUNC_1(select_type VAR_1, proxy_data * VAR_2, unsigned int VAR_3, unsigned int *VAR_4) {
 unsigned int VAR_5 = 0, VAR_6 = 0;
 if(*VAR_4 >= VAR_3)
  return ((void*)0);
 switch (VAR_1) {
  case 128:
   do {
    VAR_6++;
    VAR_5 = FUNC_0() % VAR_3;
   } while(VAR_2[VAR_5].ps != VAR_0 && VAR_6 < VAR_3 * 100);
   break;
  case 129:
   for(VAR_5 = *VAR_4; VAR_5 < VAR_3; VAR_5++) {
    if(VAR_2[VAR_5].ps == VAR_0) {
     *VAR_4 = VAR_5;
     break;
    }
   }
  default:
   break;
 }
 if(VAR_5 >= VAR_3)
  VAR_5 = 0;
 return (VAR_2[VAR_5].ps == VAR_0) ? &VAR_2[VAR_5] : ((void*)0);
}
