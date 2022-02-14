
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc {int msr; unsigned int conj; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rsc *VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = 0; (VAR_2 < 8) && (!(VAR_1->msr & (0x1 << VAR_2))); )
  VAR_2++;
 VAR_1->conj += (VAR_0 >> VAR_2);
 return VAR_1->conj;
}
