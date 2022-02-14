
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* end; void* start; void* var; } ;
typedef TYPE_1__ zend_live_range ;
typedef void* uint32_t ;



__attribute__((used)) static void FUNC_0(zend_live_range *VAR_0, zend_live_range *VAR_1) {
 uint32_t VAR_2;
 VAR_2 = VAR_0->var;
 VAR_0->var = VAR_1->var;
 VAR_1->var = VAR_2;
 VAR_2 = VAR_0->start;
 VAR_0->start = VAR_1->start;
 VAR_1->start = VAR_2;
 VAR_2 = VAR_0->end;
 VAR_0->end = VAR_1->end;
 VAR_1->end = VAR_2;
}
