
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmp_connection {int connected; scalar_t__ direction; int mutex; int resources; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (struct cmp_connection*,int ,int ,int ) ;
 int VAR_6 ;

int FUNC_5(struct cmp_connection *VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_7->mutex);

 if (FUNC_0(VAR_7->connected)) {
  FUNC_3(&VAR_7->mutex);
  return -VAR_3;
 }

retry_after_bus_reset:
 if (VAR_7->direction == VAR_1)
  VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_6,
     VAR_0);
 else
  VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_6,
     VAR_0);

 if (VAR_8 == -VAR_2) {
  VAR_8 = FUNC_1(&VAR_7->resources);
  if (VAR_8 >= 0)
   goto retry_after_bus_reset;
 }
 if (VAR_8 >= 0)
  VAR_7->connected = 1;

 FUNC_3(&VAR_7->mutex);

 return VAR_8;
}
