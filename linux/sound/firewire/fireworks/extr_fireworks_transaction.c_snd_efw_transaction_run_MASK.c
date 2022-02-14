
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction_queue {unsigned int size; scalar_t__ state; int list; struct fw_unit* unit; int wait; scalar_t__ seqnum; void* buf; } ;
struct snd_efw_transaction {int seqnum; } ;
struct fw_unit {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct fw_unit*,void*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ,int,int ) ;

int FUNC_11(struct fw_unit *VAR_9,
       const void *VAR_10, unsigned int VAR_11,
       void *VAR_12, unsigned int VAR_13)
{
 struct transaction_queue VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_14.unit = VAR_9;
 VAR_14.buf = VAR_12;
 VAR_14.size = VAR_13;
 VAR_14.seqnum = FUNC_0(((struct snd_efw_transaction *)VAR_10)->seqnum) + 1;
 VAR_14.state = VAR_6;
 FUNC_2(&VAR_14.wait);

 FUNC_8(&VAR_8);
 FUNC_3(&VAR_14.list, &VAR_7);
 FUNC_9(&VAR_8);

 VAR_15 = 0;
 do {
  VAR_16 = FUNC_7(VAR_14.unit, (void *)VAR_10, VAR_11);
  if (VAR_16 < 0)
   break;

  FUNC_10(VAR_14.wait, VAR_14.state != VAR_6,
       FUNC_5(VAR_0));

  if (VAR_14.state == VAR_5) {
   VAR_16 = VAR_14.size;
   break;
  } else if (VAR_14.state == VAR_4) {
   FUNC_6(VAR_2);
  } else if (++VAR_15 >= VAR_3) {
   FUNC_1(&VAR_14.unit->device, "EFW transaction timed out\n");
   VAR_16 = -VAR_1;
   break;
  }
 } while (1);

 FUNC_8(&VAR_8);
 FUNC_4(&VAR_14.list);
 FUNC_9(&VAR_8);

 return VAR_16;
}
