
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; char const* name; } ;
typedef TYPE_1__ test_enum ;



__attribute__((used)) static const char *FUNC_0(const test_enum *VAR_0, size_t VAR_1,
                             int VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_0[VAR_3].value == VAR_2) {
            return VAR_0[VAR_3].name;
        }
    }
    return "InvalidValue";
}
