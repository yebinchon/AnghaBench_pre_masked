
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6afe {int port_list_lock; int port_list; struct device* dev; int lock; struct apr_device* apr; int ainfo; } ;
struct device {int of_node; } ;
struct apr_device {int svc_id; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,struct q6afe*) ;
 struct q6afe* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *,struct device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct apr_device *VAR_2)
{
 struct q6afe *VAR_3;
 struct device *VAR_4 = &VAR_2->dev;

 VAR_3 = FUNC_2(VAR_4, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_5(VAR_2->svc_id, &VAR_3->ainfo);
 VAR_3->apr = VAR_2;
 FUNC_3(&VAR_3->lock);
 VAR_3->dev = VAR_4;
 FUNC_0(&VAR_3->port_list);
 FUNC_6(&VAR_3->port_list_lock);

 FUNC_1(VAR_4, VAR_3);

 return FUNC_4(VAR_4->of_node, ((void*)0), ((void*)0), VAR_4);
}
