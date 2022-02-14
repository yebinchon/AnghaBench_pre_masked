
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rt5645_priv {int jack_detect_work; } ;


 int VAR_0 ;
 struct rt5645_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 struct rt5645_priv* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct rt5645_priv *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_0);

 FUNC_2(VAR_2,
     &VAR_4->jack_detect_work, FUNC_1(5));
}
