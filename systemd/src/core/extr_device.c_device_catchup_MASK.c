
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {scalar_t__ enumerated_found; scalar_t__ found; } ;
typedef TYPE_1__ Device ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(Unit *VAR_1) {
        Device *VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);


        if (VAR_2->enumerated_found == VAR_2->found)
                return;

        FUNC_2(VAR_2, VAR_2->enumerated_found, VAR_0);
}
