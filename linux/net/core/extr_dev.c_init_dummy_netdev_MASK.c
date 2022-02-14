
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int state; int napi_list; int reg_state; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct net_device *VAR_4)
{





 FUNC_2(VAR_4, 0, sizeof(struct net_device));




 VAR_4->reg_state = VAR_0;


 FUNC_0(&VAR_4->napi_list);


 FUNC_3(VAR_1, &VAR_4->state);
 FUNC_3(VAR_2, &VAR_4->state);


 FUNC_1(VAR_4, &VAR_3);






 return 0;
}
