
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int cost; int credit; scalar_t__ credit_cap; } ;
struct dsthash_ent {TYPE_1__ rateinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static u32 FUNC_2(unsigned int VAR_2, struct dsthash_ent *VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_2);
 VAR_4 = VAR_4 * VAR_3->rateinfo.cost;

 if (FUNC_0(VAR_4 > VAR_0 * VAR_1))
  VAR_4 = VAR_0 * VAR_1;

 if (VAR_3->rateinfo.credit < VAR_4 && VAR_3->rateinfo.credit_cap) {
  VAR_3->rateinfo.credit_cap--;
  VAR_3->rateinfo.credit = VAR_0 * VAR_1;
 }
 return (u32) VAR_4;
}
