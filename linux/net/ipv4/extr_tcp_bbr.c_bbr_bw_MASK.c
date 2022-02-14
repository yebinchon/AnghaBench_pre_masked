
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct bbr {int lt_bw; scalar_t__ lt_use_bw; } ;


 int FUNC_0 (struct sock const*) ;
 struct bbr* FUNC_1 (struct sock const*) ;

__attribute__((used)) static u32 FUNC_2(const struct sock *VAR_0)
{
 struct bbr *VAR_1 = FUNC_1(VAR_0);

 return VAR_1->lt_use_bw ? VAR_1->lt_bw : FUNC_0(VAR_0);
}
