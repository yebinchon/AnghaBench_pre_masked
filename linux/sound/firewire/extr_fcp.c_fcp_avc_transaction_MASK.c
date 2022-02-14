
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_unit {int device; } ;
struct fcp_transaction {unsigned int response_size; unsigned int response_match_bytes; scalar_t__ state; int deferrable; int list; struct fw_unit* unit; int wait; void* response_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fw_unit*,int,scalar_t__,void*,unsigned int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,int,int ) ;

int FUNC_10(struct fw_unit *VAR_14,
   const void *VAR_15, unsigned int VAR_16,
   void *VAR_17, unsigned int VAR_18,
   unsigned int VAR_19)
{
 struct fcp_transaction VAR_20;
 int VAR_21, VAR_22, VAR_23 = 0;

 VAR_20.unit = VAR_14;
 VAR_20.response_buffer = VAR_17;
 VAR_20.response_size = VAR_18;
 VAR_20.response_match_bytes = VAR_19;
 VAR_20.state = VAR_9;
 FUNC_1(&VAR_20.wait);

 if (*(const u8 *)VAR_15 == 0x00 || *(const u8 *)VAR_15 == 0x03)
  VAR_20.deferrable = 1;

 FUNC_7(&VAR_13);
 FUNC_2(&VAR_20.list, &VAR_12);
 FUNC_8(&VAR_13);

 for (;;) {
  VAR_21 = VAR_16 == 4 ? VAR_11
       : VAR_10;
  VAR_22 = FUNC_6(VAR_20.unit, VAR_21,
      VAR_1 + VAR_0,
      (void *)VAR_15, VAR_16, 0);
  if (VAR_22 < 0)
   break;
deferred:
  FUNC_9(VAR_20.wait, VAR_20.state != VAR_9,
       FUNC_4(VAR_5));

  if (VAR_20.state == VAR_8) {







   VAR_20.state = VAR_9;
   goto deferred;
  } else if (VAR_20.state == VAR_7) {
   VAR_22 = VAR_20.response_size;
   break;
  } else if (VAR_20.state == VAR_6) {
   FUNC_5(VAR_3);
  } else if (++VAR_23 >= VAR_4) {
   FUNC_0(&VAR_20.unit->device, "FCP command timed out\n");
   VAR_22 = -VAR_2;
   break;
  }
 }

 FUNC_7(&VAR_13);
 FUNC_3(&VAR_20.list);
 FUNC_8(&VAR_13);

 return VAR_22;
}
