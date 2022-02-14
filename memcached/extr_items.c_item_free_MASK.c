
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int it_flags; size_t slabs_clsid; scalar_t__ refcount; } ;
typedef TYPE_1__ item ;


 int FUNC_0 (TYPE_1__*,float) ;
 int VAR_0 ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (TYPE_1__*,size_t,unsigned int) ;
 TYPE_1__** VAR_2 ;

void FUNC_5(item *VAR_3) {
    size_t VAR_4 = FUNC_2(VAR_3);
    unsigned int VAR_5;
    FUNC_3((VAR_3->it_flags & VAR_0) == 0);
    FUNC_3(VAR_3 != VAR_1[VAR_3->slabs_clsid]);
    FUNC_3(VAR_3 != VAR_2[VAR_3->slabs_clsid]);
    FUNC_3(VAR_3->refcount == 0);


    VAR_5 = FUNC_1(VAR_3);
    FUNC_0(VAR_3, 'F');
    FUNC_4(VAR_3, VAR_4, VAR_5);
}
