
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {unsigned long slabs; unsigned long order; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct slabinfo *VAR_1)
{
 return VAR_1->slabs * (VAR_0 << VAR_1->order);
}
