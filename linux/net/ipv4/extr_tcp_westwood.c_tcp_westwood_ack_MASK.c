
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct westwood {int bk; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 struct westwood* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct westwood*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, u32 VAR_2)
{
 if (VAR_2 & VAR_0) {
  struct westwood *VAR_3 = FUNC_0(VAR_1);

  FUNC_4(VAR_1);
  VAR_3->bk += FUNC_2(VAR_1);

  FUNC_1(VAR_3);
  return;
 }

 FUNC_3(VAR_1);
}
