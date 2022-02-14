
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {struct capabilities (* capabilities ) (struct hw*) ;} ;
struct ct_atc {struct hw* hw; } ;
struct capabilities {int dummy; } ;


 struct capabilities FUNC_0 (struct hw*) ;

__attribute__((used)) static struct capabilities FUNC_1(struct ct_atc *VAR_0)
{
 struct hw *VAR_1 = VAR_0->hw;

 return VAR_1->capabilities(VAR_1);
}
