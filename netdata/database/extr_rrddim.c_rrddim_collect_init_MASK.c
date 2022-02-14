
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rrdset; int * values; } ;
struct TYPE_4__ {size_t current_entry; } ;
typedef TYPE_2__ RRDDIM ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(RRDDIM *VAR_1) {
    VAR_1->values[VAR_1->rrdset->current_entry] = VAR_0;
}
