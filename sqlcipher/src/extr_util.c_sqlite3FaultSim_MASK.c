
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* xTestCallback ) (int) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_0(int VAR_2){
  int (*VAR_3)(int) = VAR_1.xTestCallback;
  return VAR_3 ? VAR_3(VAR_2) : VAR_0;
}
