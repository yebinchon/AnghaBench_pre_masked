
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; } ;
struct sk_buff {scalar_t__ dev; } ;
struct TYPE_2__ {scalar_t__ lsap; } ;
struct llc_sock {scalar_t__ dev; TYPE_1__ laddr; } ;
struct llc_sap {int dummy; } ;
struct llc_addr {scalar_t__ lsap; } ;


 scalar_t__ VAR_0 ;
 struct llc_sock* FUNC_0 (struct sock const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct llc_sap *VAR_1,
       const struct llc_addr *VAR_2,
       const struct sk_buff *VAR_3,
       const struct sock *VAR_4)
{
     struct llc_sock *VAR_5 = FUNC_0(VAR_4);

     return VAR_4->sk_type == VAR_0 &&
   VAR_5->laddr.lsap == VAR_2->lsap &&
   VAR_5->dev == VAR_3->dev;
}
