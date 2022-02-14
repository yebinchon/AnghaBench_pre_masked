
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Range6 {int begin; int end; } ;
struct TYPE_4__ {int member_1; int member_0; } ;
typedef TYPE_1__ const ipv6address ;


 scalar_t__ FUNC_0 (TYPE_1__ const,int ) ;
 TYPE_1__ const FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const struct Range6 VAR_0, const struct Range6 VAR_1)
{
    static const ipv6address VAR_2 = {0, 0};
    ipv6address VAR_3 = FUNC_1(VAR_0.end);
    ipv6address VAR_4 = FUNC_1(VAR_1.end);


    if (FUNC_0(VAR_2, VAR_0.end) && FUNC_0(VAR_3, VAR_1.begin))
        return 0;


    if (FUNC_0(VAR_2, VAR_1.end) && FUNC_0(VAR_4, VAR_0.begin))
        return 0;

    return 1;
}
