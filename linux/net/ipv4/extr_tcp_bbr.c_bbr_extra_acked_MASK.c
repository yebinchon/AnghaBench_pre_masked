
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct bbr {int * extra_acked; } ;


 struct bbr* FUNC_0 (struct sock const*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u16 FUNC_2(const struct sock *VAR_0)
{
 struct bbr *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->extra_acked[0], VAR_1->extra_acked[1]);
}
