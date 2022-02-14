
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rate_sample {int dummy; } ;
struct bbr {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*,struct rate_sample const*) ;
 struct bbr* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1,
       const struct rate_sample *VAR_2)
{
 struct bbr *VAR_3 = FUNC_2(VAR_1);

 if (VAR_3->mode == VAR_0 && FUNC_1(VAR_1, VAR_2))
  FUNC_0(VAR_1);
}
