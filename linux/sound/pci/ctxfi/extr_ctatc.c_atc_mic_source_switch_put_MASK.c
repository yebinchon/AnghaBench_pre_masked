
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int (* mic_source_switch_put ) (struct hw*,int) ;} ;
struct ct_atc {struct hw* hw; } ;


 int FUNC_0 (struct hw*,int) ;

__attribute__((used)) static int FUNC_1(struct ct_atc *VAR_0, int VAR_1)
{
 struct hw *VAR_2 = VAR_0->hw;

 return VAR_2->mic_source_switch_put(VAR_2, VAR_1);
}
