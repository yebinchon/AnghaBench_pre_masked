
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ac97_controller {int parent; int adap; int nr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 struct ac97_controller* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct ac97_controller *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_2(&VAR_0, VAR_2->nr);
 FUNC_0(&VAR_2->adap, "adapter unregistered by %s\n",
  FUNC_1(VAR_2->parent));
}
