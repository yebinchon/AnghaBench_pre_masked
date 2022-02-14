
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipmask; } ;
union iucv_param {TYPE_1__ set_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,union iucv_param*) ;
 int VAR_2 ;
 union iucv_param** VAR_3 ;
 int FUNC_2 (union iucv_param*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_4)
{
 int VAR_5 = FUNC_3();
 union iucv_param *VAR_6;
 VAR_6 = VAR_3[VAR_5];
 FUNC_2(VAR_6, 0, sizeof(union iucv_param));
 VAR_6->set_mask.ipmask = 0xf8;
 FUNC_1(VAR_1, VAR_6);
 FUNC_2(VAR_6, 0, sizeof(union iucv_param));
 VAR_6->set_mask.ipmask = 0xf8;
 FUNC_1(VAR_0, VAR_6);

 FUNC_0(VAR_5, &VAR_2);
}
