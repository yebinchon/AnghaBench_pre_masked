
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int allocated; scalar_t__* data; } ;
struct sltg_typelib {TYPE_1__ name_table; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__*,int,int) ;
 int FUNC_3 (scalar_t__*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__* FUNC_5 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_6(struct sltg_typelib *VAR_0, const char *VAR_1)
{
    int VAR_2 = VAR_0->name_table.size;
    int VAR_3 = VAR_0->name_table.size + FUNC_4(VAR_1) + 1 + 8;
    int VAR_4;

    FUNC_0("add_name: %s\n", VAR_1);

    VAR_4 = (VAR_3 + 0x1f) & ~0x1f;
    if (VAR_4 - VAR_3 < 4)
        VAR_3 = VAR_4;
    else
        VAR_3 = (VAR_3 + 1) & ~1;

    if (VAR_3 > VAR_0->name_table.allocated)
    {
        VAR_0->name_table.allocated = FUNC_1(VAR_0->name_table.allocated * 2, VAR_3);
        VAR_0->name_table.data = FUNC_5(VAR_0->name_table.data, VAR_0->name_table.allocated);
    }

    FUNC_2(VAR_0->name_table.data + VAR_0->name_table.size, 0xff, 8);
    FUNC_3(VAR_0->name_table.data + VAR_0->name_table.size + 8, VAR_1);
    VAR_0->name_table.size = VAR_3;
    VAR_0->name_table.data[VAR_0->name_table.size - 1] = 0;

    return VAR_2;
}
