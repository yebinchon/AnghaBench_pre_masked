
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
typedef int storage_number ;
struct TYPE_5__ {TYPE_1__* rrdset; int * values; } ;
struct TYPE_4__ {size_t current_entry; } ;
typedef TYPE_2__ RRDDIM ;



__attribute__((used)) static void FUNC_0(RRDDIM *VAR_0, usec_t VAR_1, storage_number VAR_2) {
    (void)VAR_1;

    VAR_0->values[VAR_0->rrdset->current_entry] = VAR_2;
}
