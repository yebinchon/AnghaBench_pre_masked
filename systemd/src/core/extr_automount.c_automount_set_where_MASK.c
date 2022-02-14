
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_6__ {scalar_t__ where; } ;
typedef TYPE_1__ Automount ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(Automount *VAR_0) {
        int VAR_1;

        FUNC_1(VAR_0);

        if (VAR_0->where)
                return 0;

        VAR_1 = FUNC_3(FUNC_0(VAR_0)->id, &VAR_0->where);
        if (VAR_1 < 0)
                return VAR_1;

        FUNC_2(VAR_0->where, 0);
        return 1;
}
