
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; scalar_t__ sk_state; } ;
struct TYPE_2__ {scalar_t__ lsap; int mac; } ;
struct llc_sock {TYPE_1__ laddr; } ;
struct llc_sap {int dummy; } ;
struct llc_addr {scalar_t__ lsap; int mac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct llc_sock* FUNC_1 (struct sock const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct llc_sap *VAR_2,
          const struct llc_addr *VAR_3,
          const struct sock *VAR_4)
{
 struct llc_sock *VAR_5 = FUNC_1(VAR_4);

 return VAR_4->sk_type == VAR_0 && VAR_4->sk_state == VAR_1 &&
  VAR_5->laddr.lsap == VAR_3->lsap &&
  FUNC_0(VAR_5->laddr.mac, VAR_3->mac);
}
