
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct bbr {int cycle_idx; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int VAR_2 ;
 struct bbr* FUNC_1 (struct sock*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_3)
{
 struct bbr *VAR_4 = FUNC_1(VAR_3);

 VAR_4->mode = VAR_0;
 VAR_4->cycle_idx = VAR_1 - 1 - FUNC_2(VAR_2);
 FUNC_0(VAR_3);
}
