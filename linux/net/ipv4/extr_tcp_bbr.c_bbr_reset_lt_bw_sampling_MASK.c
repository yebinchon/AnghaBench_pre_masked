
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct bbr {int lt_is_sampling; scalar_t__ lt_use_bw; scalar_t__ lt_bw; } ;


 int FUNC_0 (struct sock*) ;
 struct bbr* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct bbr *VAR_1 = FUNC_1(VAR_0);

 VAR_1->lt_bw = 0;
 VAR_1->lt_use_bw = 0;
 VAR_1->lt_is_sampling = 0;
 FUNC_0(VAR_0);
}
