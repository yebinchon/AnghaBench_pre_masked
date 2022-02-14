
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int message; } ;
struct Fortune {TYPE_1__ item; } ;


 int FUNC_0 (int ,int ,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
    const struct Fortune *VAR_2 = (const struct Fortune *)VAR_0;
    const struct Fortune *VAR_3 = (const struct Fortune *)VAR_1;
    size_t VAR_4 = FUNC_1(VAR_2->item.message);
    size_t VAR_5 = FUNC_1(VAR_3->item.message);

    if (!VAR_4 || !VAR_5)
        return VAR_4 > VAR_5;

    size_t VAR_6 = VAR_4 < VAR_5 ? VAR_4 : VAR_5;
    int VAR_7 = FUNC_0(VAR_2->item.message, VAR_3->item.message, VAR_6);
    if (VAR_7 == 0)
        return VAR_4 > VAR_5;

    return VAR_7 > 0;
}
