
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct siphash {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__ const* interface; struct TYPE_5__ const* name; struct TYPE_5__ const* type; } ;
typedef TYPE_1__ Member ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,struct siphash*) ;
 int FUNC_2 (int*,struct siphash*) ;

__attribute__((used)) static void FUNC_3(const Member *VAR_0, struct siphash *VAR_1) {
        uint64_t VAR_2 = 1;

        FUNC_0(VAR_0);
        FUNC_0(VAR_0->type);

        FUNC_1(VAR_0->type, VAR_1);

        VAR_2 += !!VAR_0->name + !!VAR_0->interface;

        FUNC_2(&VAR_2, VAR_1);

        if (VAR_0->name)
                FUNC_1(VAR_0->name, VAR_1);

        if (VAR_0->interface)
                FUNC_1(VAR_0->interface, VAR_1);
}
