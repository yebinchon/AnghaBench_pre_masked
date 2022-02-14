
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct adm6996_priv {int reg_mutex; } ;


 int FUNC_0 (struct adm6996_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 struct adm6996_priv* FUNC_4 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_5(struct switch_dev *VAR_0)
{
 struct adm6996_priv *VAR_1 = FUNC_4(VAR_0);

 FUNC_3("reset\n");

 FUNC_1(&VAR_1->reg_mutex);
 FUNC_0 (VAR_1);
 FUNC_2(&VAR_1->reg_mutex);
 return 0;
}
