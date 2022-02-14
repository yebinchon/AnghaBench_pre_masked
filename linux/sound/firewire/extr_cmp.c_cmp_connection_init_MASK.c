
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct fw_unit {int dummy; } ;
struct cmp_connection {int direction; int connected; unsigned int pcr_index; unsigned int max_speed; int last_pcr_value; int mutex; int resources; } ;
typedef enum cmp_direction { ____Placeholder_cmp_direction } cmp_direction ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct fw_unit*) ;
 int FUNC_3 (struct cmp_connection*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fw_unit*,int ,int ,int *,int,int ) ;

int FUNC_6(struct cmp_connection *VAR_8,
   struct fw_unit *VAR_9,
   enum cmp_direction VAR_10,
   unsigned int VAR_11)
{
 __be32 VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_8->direction = VAR_10;
 VAR_14 = FUNC_5(VAR_9, VAR_7,
     FUNC_3(VAR_8), &VAR_12, 4, 0);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_13 = FUNC_0(VAR_12);

 if (VAR_11 >= (VAR_13 & VAR_1))
  return -VAR_0;

 VAR_14 = FUNC_2(&VAR_8->resources, VAR_9);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_8->connected = 0;
 FUNC_4(&VAR_8->mutex);
 VAR_8->last_pcr_value = FUNC_1(0x80000000);
 VAR_8->pcr_index = VAR_11;
 VAR_8->max_speed = (VAR_13 & VAR_2) >> VAR_3;
 if (VAR_8->max_speed == VAR_6)
  VAR_8->max_speed += (VAR_13 & VAR_4) >> VAR_5;

 return 0;
}
