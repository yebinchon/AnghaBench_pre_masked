
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct sk_buff *VAR_3, bool VAR_4)
{
 if (VAR_4)
  return VAR_3->ip_summed != VAR_1 &&
         VAR_3->ip_summed != VAR_2;

 return VAR_3->ip_summed == VAR_0;
}
