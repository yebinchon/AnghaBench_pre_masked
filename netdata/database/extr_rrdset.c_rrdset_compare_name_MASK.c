
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hash_name; int name; } ;
typedef TYPE_1__ RRDSET ;


 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(void* VAR_0, void* VAR_1) {
    RRDSET *VAR_2 = FUNC_0(VAR_0);
    RRDSET *VAR_3 = FUNC_0(VAR_1);



    if(VAR_2->hash_name < VAR_3->hash_name) return -1;
    else if(VAR_2->hash_name > VAR_3->hash_name) return 1;
    else return FUNC_1(VAR_2->name, VAR_3->name);
}
