
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct harbor {int map; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct harbor*,int ,int) ;
 struct harbor* FUNC_2 (int) ;

struct harbor *
FUNC_3(void) {
 struct harbor * VAR_0 = FUNC_2(sizeof(*VAR_0));
 FUNC_1(VAR_0,0,sizeof(*VAR_0));
 VAR_0->map = FUNC_0();
 return VAR_0;
}
