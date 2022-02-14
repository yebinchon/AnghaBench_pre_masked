
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_mpoa_qos {scalar_t__ ipaddr; struct atm_mpoa_qos* next; } ;
typedef scalar_t__ __be32 ;


 struct atm_mpoa_qos* VAR_0 ;

struct atm_mpoa_qos *FUNC_0(__be32 VAR_1)
{
 struct atm_mpoa_qos *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2) {
  if (VAR_2->ipaddr == VAR_1)
   break;
  VAR_2 = VAR_2->next;
 }

 return VAR_2;
}
