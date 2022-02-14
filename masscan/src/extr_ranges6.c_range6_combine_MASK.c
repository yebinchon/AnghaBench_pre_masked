
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range6 {int end; int begin; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct Range6 *VAR_0, const struct Range6 VAR_1)
{
    if (FUNC_0(VAR_1.begin, VAR_0->begin))
        VAR_0->begin = VAR_1.begin;
    if (FUNC_0(VAR_0->end, VAR_1.end))
        VAR_0->end = VAR_1.end;
}
