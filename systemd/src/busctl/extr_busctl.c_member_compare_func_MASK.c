
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; struct TYPE_7__ const* type; int interface; } ;
typedef TYPE_1__ Member ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const Member *VAR_0, const Member *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_0->type);
        FUNC_0(VAR_1->type);

        VAR_2 = FUNC_2(VAR_0->interface, VAR_1->interface);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_0->type, VAR_1->type);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_2(VAR_0->name, VAR_1->name);
}
