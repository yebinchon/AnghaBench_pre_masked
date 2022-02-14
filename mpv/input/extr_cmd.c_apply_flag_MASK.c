
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd {int flags; } ;
typedef int bstr ;
struct TYPE_2__ {int remove; int add; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct mp_cmd *VAR_1, bstr VAR_2)
{
    for (int VAR_3 = 0; VAR_0[VAR_3].name; VAR_3++) {
        if (FUNC_0(VAR_2, VAR_0[VAR_3].name)) {
            VAR_1->flags = (VAR_1->flags & ~VAR_0[VAR_3].remove) | VAR_0[VAR_3].add;
            return 1;
        }
    }
    return 0;
}
