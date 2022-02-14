
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range {scalar_t__ begin; scalar_t__ end; } ;



int
FUNC_0(struct Range VAR_0)
{
    return VAR_0.begin <= VAR_0.end;
}
