
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fw_unit {int device; } ;
struct fw_device {int generation; int max_speed; int node_id; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int ) ;
 struct fw_device* FUNC_1 (struct fw_unit*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ,int,int ,int ,void*,size_t) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;

int FUNC_7(struct fw_unit *VAR_8, int VAR_9,
         u64 VAR_10, void *VAR_11, size_t VAR_12,
         unsigned int VAR_13)
{
 struct fw_device *VAR_14 = FUNC_1(VAR_8);
 int VAR_15, VAR_16, VAR_17 = 0;

 VAR_15 = VAR_13 & VAR_4;
 for (;;) {
  if (!(VAR_13 & VAR_3)) {
   VAR_15 = VAR_14->generation;
   FUNC_6();
  }
  VAR_16 = FUNC_3(VAR_14->card, VAR_9,
        VAR_14->node_id, VAR_15,
        VAR_14->max_speed, VAR_10,
        VAR_11, VAR_12);

  if (VAR_16 == VAR_6)
   return 0;

  if (VAR_16 == VAR_7 && (VAR_13 & VAR_3))
   return -VAR_0;

  if (FUNC_5(VAR_16) || ++VAR_17 >= 3) {
   if (!(VAR_13 & VAR_5))
    FUNC_0(&VAR_8->device,
     "transaction failed: %s\n",
     FUNC_2(VAR_16));
   return -VAR_1;
  }

  FUNC_4(VAR_2);
 }
}
