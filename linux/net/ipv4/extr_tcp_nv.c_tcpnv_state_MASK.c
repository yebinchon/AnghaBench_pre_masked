
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tcpnv {int nv_reset; int cwnd_growth_factor; scalar_t__ nv_allow_cwnd_growth; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tcpnv* FUNC_0 (struct sock*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct tcpnv*,struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_5, u8 VAR_6)
{
 struct tcpnv *VAR_7 = FUNC_0(VAR_5);

 if (VAR_6 == VAR_2 && VAR_7->nv_reset) {
  FUNC_1(VAR_7, VAR_5);
 } else if (VAR_6 == VAR_1 || VAR_6 == VAR_0 ||
  VAR_6 == VAR_3) {
  VAR_7->nv_reset = 1;
  VAR_7->nv_allow_cwnd_growth = 0;
  if (VAR_6 == VAR_1) {

   if (VAR_7->cwnd_growth_factor > 0)
    VAR_7->cwnd_growth_factor = 0;

   if (VAR_4 > 0 &&
       VAR_7->cwnd_growth_factor > -8)
    VAR_7->cwnd_growth_factor--;
  }
 }
}
