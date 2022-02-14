
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es7241_data {int fmt; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_2, struct es7241_data *VAR_3)
{
 bool VAR_4;





 VAR_4 = FUNC_0(VAR_2->of_node,
      "everest,sdout-pull-down");
 if (VAR_4)
  VAR_3->fmt = VAR_1;
 else
  VAR_3->fmt = VAR_0;
}
