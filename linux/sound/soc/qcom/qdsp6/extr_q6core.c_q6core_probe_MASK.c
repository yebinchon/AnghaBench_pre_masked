
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct apr_device {int dev; } ;
struct TYPE_4__ {int wait; struct apr_device* adev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct apr_device *VAR_3)
{
 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_3->dev, VAR_2);

 FUNC_3(&VAR_2->lock);
 VAR_2->adev = VAR_3;
 FUNC_1(&VAR_2->wait);
 return 0;
}
