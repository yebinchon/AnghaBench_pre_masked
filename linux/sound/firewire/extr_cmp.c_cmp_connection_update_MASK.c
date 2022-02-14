
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmp_connection {int connected; scalar_t__ direction; int mutex; int resources; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct cmp_connection*,int ,int ,int ) ;
 int VAR_4 ;

int FUNC_4(struct cmp_connection *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_5->mutex);

 if (!VAR_5->connected) {
  FUNC_2(&VAR_5->mutex);
  return 0;
 }

 VAR_6 = FUNC_0(&VAR_5->resources);
 if (VAR_6 < 0)
  goto err_unconnect;

 if (VAR_5->direction == VAR_0)
  VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4,
     VAR_1);
 else
  VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_4,
     VAR_1);

 if (VAR_6 < 0)
  goto err_unconnect;

 FUNC_2(&VAR_5->mutex);

 return 0;

err_unconnect:
 VAR_5->connected = 0;
 FUNC_2(&VAR_5->mutex);

 return VAR_6;
}
