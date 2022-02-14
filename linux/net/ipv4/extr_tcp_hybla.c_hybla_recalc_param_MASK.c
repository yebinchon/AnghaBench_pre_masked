
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct hybla {int rho_3ls; int rho; int rho2_7ls; int rho2; } ;
struct TYPE_2__ {int srtt_us; } ;


 int VAR_0 ;
 struct hybla* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int,unsigned int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_3 (struct sock *VAR_3)
{
 struct hybla *VAR_4 = FUNC_0(VAR_3);

 VAR_4->rho_3ls = FUNC_1(VAR_2,
       FUNC_2(VAR_3)->srtt_us / (VAR_1 * VAR_0),
       8U);
 VAR_4->rho = VAR_4->rho_3ls >> 3;
 VAR_4->rho2_7ls = (VAR_4->rho_3ls * VAR_4->rho_3ls) << 1;
 VAR_4->rho2 = VAR_4->rho2_7ls >> 7;
}
