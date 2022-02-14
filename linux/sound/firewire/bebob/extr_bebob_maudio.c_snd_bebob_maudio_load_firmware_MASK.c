
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fw_unit {int device; } ;
struct fw_device {int max_speed; int generation; int node_id; int card; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct fw_device* FUNC_2 (struct fw_unit*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct fw_unit*,int ,int*,int) ;

int FUNC_7(struct fw_unit *VAR_11)
{
 struct fw_device *VAR_12 = FUNC_2(VAR_11);
 int VAR_13, VAR_14;
 u64 VAR_15;
 __le32 *VAR_16;


 VAR_13 = FUNC_6(VAR_11, VAR_5,
       &VAR_15, sizeof(u64));
 if (VAR_13 < 0)
  return VAR_13;




 if (VAR_15 < 0x3230303730343031LL) {
  FUNC_1(&VAR_11->device,
   "Use firmware version 5058 or later\n");
  return -VAR_3;
 }

 VAR_16 = FUNC_5(3, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_16[0] = FUNC_0(VAR_6);
 VAR_16[1] = FUNC_0(VAR_7);
 VAR_16[2] = FUNC_0(VAR_8);

 VAR_14 = FUNC_3(VAR_12->card, VAR_10,
       VAR_12->node_id, VAR_12->generation,
       VAR_12->max_speed, VAR_0,
       VAR_16, 3 * sizeof(*VAR_16));
 FUNC_4(VAR_16);
 if (VAR_14 != VAR_9) {
  FUNC_1(&VAR_11->device,
   "Failed to send a cue to load firmware\n");
  VAR_13 = -VAR_1;
 }

 return VAR_13;
}
