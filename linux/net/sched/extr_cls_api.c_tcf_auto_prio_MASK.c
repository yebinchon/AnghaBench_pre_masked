
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {scalar_t__ prio; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline u32 FUNC_2(struct tcf_proto *VAR_0)
{
 u32 VAR_1 = FUNC_1(0xC0000000U, 0U);

 if (VAR_0)
  VAR_1 = VAR_0->prio - 1;

 return FUNC_0(VAR_1);
}
