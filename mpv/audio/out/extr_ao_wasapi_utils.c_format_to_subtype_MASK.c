
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mp_format; int const* subtype; } ;
typedef int GUID ;


 int const VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const GUID *FUNC_0(int VAR_2)
{
    for (int VAR_3 = 0; VAR_1[VAR_3].mp_format; VAR_3++) {
        if (VAR_2 == VAR_1[VAR_3].mp_format)
            return VAR_1[VAR_3].subtype;
    }
    return &VAR_0;
}
