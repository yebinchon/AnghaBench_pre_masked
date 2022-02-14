
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* config ) (void*,void*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*,void*) ;

int FUNC_1(void *VAR_2, void *VAR_3) {
 if (!VAR_1) {
  return VAR_0;
 }
 return VAR_1->config (VAR_2, VAR_3);
}
