
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t counter; scalar_t__ current_entry; scalar_t__ entries; } ;
typedef TYPE_1__ RRDSET ;



__attribute__((used)) static inline size_t FUNC_0(RRDSET *VAR_0) {
    if(VAR_0->counter >= (size_t)VAR_0->entries) {



        return (size_t)VAR_0->current_entry;
    }



    return 0;
}
