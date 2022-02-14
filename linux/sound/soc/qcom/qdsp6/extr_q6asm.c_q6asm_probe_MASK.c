
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6asm {int slock; int mem_wait; struct apr_device* adev; struct device* dev; int ainfo; } ;
struct device {int of_node; } ;
struct apr_device {int svc_id; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct q6asm*) ;
 struct q6asm* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *,struct device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct apr_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct q6asm *VAR_4;

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4(VAR_2->svc_id, &VAR_4->ainfo);

 VAR_4->dev = VAR_3;
 VAR_4->adev = VAR_2;
 FUNC_2(&VAR_4->mem_wait);
 FUNC_5(&VAR_4->slock);
 FUNC_0(VAR_3, VAR_4);

 return FUNC_3(VAR_3->of_node, ((void*)0), ((void*)0), VAR_3);
}
