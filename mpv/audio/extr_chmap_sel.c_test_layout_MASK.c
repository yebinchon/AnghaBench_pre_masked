
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {scalar_t__ allow_any; } ;
struct mp_chmap {int dummy; } ;


 int FUNC_0 (struct mp_chmap*) ;
 scalar_t__ FUNC_1 (struct mp_chmap_sel const*,struct mp_chmap*) ;
 scalar_t__ FUNC_2 (struct mp_chmap_sel const*,struct mp_chmap*) ;
 scalar_t__ FUNC_3 (struct mp_chmap_sel const*,struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_4(const struct mp_chmap_sel *VAR_0, struct mp_chmap *VAR_1)
{
    if (!FUNC_0(VAR_1))
        return 0;

    return VAR_0->allow_any || FUNC_3(VAR_0, VAR_1) || FUNC_2(VAR_0, VAR_1) ||
           FUNC_1(VAR_0, VAR_1);
}
