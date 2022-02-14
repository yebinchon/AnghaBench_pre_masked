
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; } ;
struct TYPE_2__ {scalar_t__ lsap; int mac; } ;
struct llc_sock {TYPE_1__ laddr; } ;
struct llc_sap {int dummy; } ;
struct llc_addr {scalar_t__ lsap; int mac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct llc_sock* FUNC_1 (struct sock const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct llc_sap *VAR_1,
       const struct llc_addr *VAR_2,
       const struct sock *VAR_3)
{
     struct llc_sock *VAR_4 = FUNC_1(VAR_3);

     return VAR_3->sk_type == VAR_0 &&
   VAR_4->laddr.lsap == VAR_2->lsap &&
   FUNC_0(VAR_4->laddr.mac, VAR_2->mac);
}
