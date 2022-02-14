
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int num_entries; TYPE_1__* entries; } ;
struct mp_filter {struct priv* priv; } ;
struct TYPE_2__ {int print; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_entries; VAR_2++)
        FUNC_0(VAR_1->entries[VAR_2].print);
    VAR_1->num_entries = 0;
}
