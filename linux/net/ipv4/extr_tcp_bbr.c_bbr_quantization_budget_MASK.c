
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct bbr {scalar_t__ mode; scalar_t__ cycle_idx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 struct bbr* FUNC_1 (struct sock*) ;

__attribute__((used)) static u32 FUNC_2(struct sock *VAR_1, u32 VAR_2)
{
 struct bbr *VAR_3 = FUNC_1(VAR_1);


 VAR_2 += 3 * FUNC_0(VAR_1);


 VAR_2 = (VAR_2 + 1) & ~1U;


 if (VAR_3->mode == VAR_0 && VAR_3->cycle_idx == 0)
  VAR_2 += 2;

 return VAR_2;
}
