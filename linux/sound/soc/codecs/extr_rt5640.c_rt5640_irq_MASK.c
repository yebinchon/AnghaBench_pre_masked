
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5640_priv {int jack_work; scalar_t__ jack; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct rt5640_priv *VAR_4 = VAR_3;

 if (VAR_4->jack)
  FUNC_0(VAR_1, &VAR_4->jack_work);

 return VAR_0;
}
