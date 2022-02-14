
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_detail {int * pipefs; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct cache_detail *VAR_0)
{
 if (VAR_0->pipefs) {
  FUNC_0(VAR_0->pipefs);
  VAR_0->pipefs = ((void*)0);
 }
}
