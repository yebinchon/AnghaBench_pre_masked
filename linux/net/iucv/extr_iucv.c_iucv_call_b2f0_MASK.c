
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iprcode; } ;
union iucv_param {TYPE_1__ ctrl; } ;


 int FUNC_0 (int,union iucv_param*) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, union iucv_param *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2 == 1 ? VAR_1->ctrl.iprcode : VAR_2;
}
