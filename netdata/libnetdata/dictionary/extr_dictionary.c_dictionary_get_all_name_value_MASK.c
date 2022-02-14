
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int root; } ;
struct TYPE_7__ {TYPE_1__ values_index; } ;
typedef TYPE_2__ DICTIONARY ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int (*) (char*,void*,void*),void*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(DICTIONARY *VAR_0, int (*VAR_1)(char *VAR_2, void *VAR_3, void *VAR_4), void *VAR_5) {
    int VAR_6 = 0;

    FUNC_0(VAR_0);

    if(FUNC_3(VAR_0->values_index.root))
        VAR_6 = FUNC_2(VAR_0->values_index.root, VAR_1, VAR_5);

    FUNC_1(VAR_0);

    return VAR_6;
}
