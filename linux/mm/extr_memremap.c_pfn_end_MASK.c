
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long start; } ;
struct dev_pagemap {struct resource res; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct resource const*) ;

__attribute__((used)) static unsigned long FUNC_1(struct dev_pagemap *VAR_1)
{
 const struct resource *VAR_2 = &VAR_1->res;

 return (VAR_2->start + FUNC_0(VAR_2)) >> VAR_0;
}
