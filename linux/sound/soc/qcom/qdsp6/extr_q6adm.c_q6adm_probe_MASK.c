
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6adm {int copps_list_lock; int copps_list; int matrix_map_wait; int lock; int ainfo; struct device* dev; struct apr_device* apr; } ;
struct device {int of_node; } ;
struct apr_device {int svc_id; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,struct q6adm*) ;
 struct q6adm* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *,struct device*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct apr_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct q6adm *VAR_4;

 VAR_4 = FUNC_2(&VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->apr = VAR_2;
 FUNC_1(&VAR_2->dev, VAR_4);
 VAR_4->dev = VAR_3;
 FUNC_6(VAR_2->svc_id, &VAR_4->ainfo);
 FUNC_4(&VAR_4->lock);
 FUNC_3(&VAR_4->matrix_map_wait);

 FUNC_0(&VAR_4->copps_list);
 FUNC_7(&VAR_4->copps_list_lock);

 return FUNC_5(VAR_3->of_node, ((void*)0), ((void*)0), VAR_3);
}
