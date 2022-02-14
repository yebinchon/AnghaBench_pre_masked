
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* open ) (char const*) ;} ;


 TYPE_1__* VAR_0 ;
 void* FUNC_0 (char const*) ;

void *FUNC_1(const char *VAR_1) {
 if (!VAR_0) {
  return ((void*)0);
 }
 return VAR_0->open (VAR_1);
}
