
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6copp {int refcount; int copp_idx; int afe_port; } ;
struct q6adm {int dev; } ;
struct device {int parent; } ;


 int FUNC_0 (int ,char*,int) ;
 struct q6adm* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct q6adm*,struct q6copp*,int ,int ) ;
 int VAR_0 ;

int FUNC_4(struct device *VAR_1, struct q6copp *VAR_2)
{
 struct q6adm *VAR_3 = FUNC_1(VAR_1->parent);
 int VAR_4 = 0;

 VAR_4 = FUNC_3(VAR_3, VAR_2, VAR_2->afe_port, VAR_2->copp_idx);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "Failed to close copp %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_2(&VAR_2->refcount, VAR_0);

 return 0;
}
