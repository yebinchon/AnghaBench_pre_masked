
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5651_priv {int bp_work; int jack_detect_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct rt5651_priv *VAR_1 = VAR_0;

 FUNC_1(&VAR_1->jack_detect_work);
 FUNC_0(&VAR_1->bp_work);
}
