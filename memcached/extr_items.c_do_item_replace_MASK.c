
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int it_flags; int nbytes; int nkey; } ;
typedef TYPE_1__ item ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int const) ;
 int FUNC_4 (TYPE_1__*,int const) ;

int FUNC_5(item *VAR_1, item *VAR_2, const uint32_t VAR_3) {
    FUNC_1(FUNC_0(VAR_1), VAR_1->nkey, VAR_1->nbytes,
                           FUNC_0(VAR_2), VAR_2->nkey, VAR_2->nbytes);
    FUNC_2((VAR_1->it_flags & VAR_0) == 0);

    FUNC_4(VAR_1, VAR_3);
    return FUNC_3(VAR_2, VAR_3);
}
