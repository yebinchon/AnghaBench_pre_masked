
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd28623_priv {int supplies; int reset_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bd28623_priv *VAR_0)
{
 FUNC_1(VAR_0->reset_gpio, 1);

 FUNC_2(FUNC_0(VAR_0->supplies), VAR_0->supplies);
}
