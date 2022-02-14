
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct bbr {int mode; } ;


 int VAR_0 ;
 struct bbr* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1)
{
 struct bbr *VAR_2 = FUNC_0(VAR_1);

 VAR_2->mode = VAR_0;
}
