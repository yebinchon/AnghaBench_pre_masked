
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct cfsrvl {TYPE_1__ dev_info; } ;
struct cflayer {int dummy; } ;


 struct cfsrvl* FUNC_0 (struct cflayer*) ;

bool FUNC_1(struct cflayer *VAR_0, int VAR_1)
{
 struct cfsrvl *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->dev_info.id == VAR_1;
}
