
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dice {int notification_bits; int hwdep_wait; int clock_accepted; int lock; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fw_card*,struct fw_request*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fw_card *VAR_5, struct fw_request *VAR_6,
         int VAR_7, int VAR_8, int VAR_9,
         int VAR_10, unsigned long long VAR_11,
         void *VAR_12, size_t VAR_13, void *VAR_14)
{
 struct snd_dice *VAR_15 = VAR_14;
 u32 VAR_16;
 unsigned long VAR_17;

 if (VAR_7 != VAR_4) {
  FUNC_2(VAR_5, VAR_6, VAR_3);
  return;
 }
 if ((VAR_11 & 3) != 0) {
  FUNC_2(VAR_5, VAR_6, VAR_1);
  return;
 }

 VAR_16 = FUNC_0(VAR_12);

 FUNC_3(&VAR_15->lock, VAR_17);
 VAR_15->notification_bits |= VAR_16;
 FUNC_4(&VAR_15->lock, VAR_17);

 FUNC_2(VAR_5, VAR_6, VAR_2);

 if (VAR_16 & VAR_0)
  FUNC_1(&VAR_15->clock_accepted);
 FUNC_5(&VAR_15->hwdep_wait);
}
