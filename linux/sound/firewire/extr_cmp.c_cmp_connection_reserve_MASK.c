
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int unit; int allocated; } ;
struct cmp_connection {int mutex; int speed; TYPE_2__ resources; int max_speed; } ;
struct TYPE_3__ {int max_speed; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,unsigned int,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct cmp_connection *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3;

 FUNC_4(&VAR_1->mutex);

 if (FUNC_0(VAR_1->resources.allocated)) {
  VAR_3 = -VAR_0;
  goto end;
 }

 VAR_1->speed = FUNC_3(VAR_1->max_speed,
         FUNC_2(VAR_1->resources.unit)->max_speed);

 VAR_3 = FUNC_1(&VAR_1->resources, VAR_2,
     VAR_1->speed);
end:
 FUNC_5(&VAR_1->mutex);

 return VAR_3;
}
