
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct lp {int flag; } ;


 int VAR_0 ;
 struct lp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct lp *VAR_4 = FUNC_0(VAR_1);

 if (!(VAR_4->flag & VAR_0))
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
