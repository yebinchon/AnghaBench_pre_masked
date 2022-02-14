
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_9pfs_dataring {int work; int wq; TYPE_1__* priv; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct xen_9pfs_dataring *VAR_3 = VAR_2;

 if (!VAR_3 || !VAR_3->priv->client) {

  return VAR_0;
 }

 FUNC_1(&VAR_3->wq);
 FUNC_0(&VAR_3->work);

 return VAR_0;
}
