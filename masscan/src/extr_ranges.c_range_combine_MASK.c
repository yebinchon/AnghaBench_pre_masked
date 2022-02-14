
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range {scalar_t__ begin; scalar_t__ end; } ;



__attribute__((used)) static void
FUNC_0(struct Range *VAR_0, struct Range VAR_1)
{
    if (VAR_0->begin > VAR_1.begin)
        VAR_0->begin = VAR_1.begin;
    if (VAR_0->end < VAR_1.end)
        VAR_0->end = VAR_1.end;
}
