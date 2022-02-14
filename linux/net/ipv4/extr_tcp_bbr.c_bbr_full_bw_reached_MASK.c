
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct bbr {int full_bw_reached; } ;


 struct bbr* FUNC_0 (struct sock const*) ;

__attribute__((used)) static bool FUNC_1(const struct sock *VAR_0)
{
 const struct bbr *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->full_bw_reached;
}
