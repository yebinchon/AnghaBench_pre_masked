
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
typedef long u32 ;
typedef short u16 ;
struct hpi_hw_obj {struct bus_master_interface* p_interface_buffer; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct TYPE_2__ {int * b_data; } ;
struct bus_master_interface {long transfer_size_in_bytes; int dsp_ack; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;
 short VAR_7 ;
 short VAR_8 ;
 int FUNC_1 (void*,void*,long) ;
 int FUNC_2 (struct hpi_hw_obj*,int) ;
 long FUNC_3 (struct hpi_hw_obj*,int,long) ;

__attribute__((used)) static short FUNC_4(struct hpi_adapter_obj *VAR_9, u8 *VAR_10,
 u32 VAR_11, int VAR_12)
{
 struct hpi_hw_obj *VAR_13 = VAR_9->priv;
 u32 VAR_14 = 0;
 u16 VAR_15 = 0;
 u32 VAR_16;
 struct bus_master_interface *VAR_17 = VAR_13->p_interface_buffer;

 if (!VAR_10)
  return VAR_8;

 VAR_11 &= ~3L;


 if (!FUNC_3(VAR_13, VAR_3, VAR_6))
  return VAR_7;

 while (VAR_14 < VAR_11) {
  u32 VAR_18 = VAR_11 - VAR_14;

  if (VAR_18 > VAR_5)
   VAR_18 = VAR_5;

  if (VAR_12 == VAR_4)
   FUNC_1((void *)&VAR_17->u.b_data[0],
    &VAR_10[VAR_14], VAR_18);

  VAR_17->transfer_size_in_bytes = VAR_18;


  VAR_17->dsp_ack = VAR_3;
  FUNC_2(VAR_13, VAR_12);

  VAR_16 = FUNC_3(VAR_13, VAR_12, VAR_6);
  FUNC_0(VAR_0, "spun %d times for data xfer of %d\n",
   VAR_6 - VAR_16, VAR_18);

  if (!VAR_16) {

   FUNC_0(VAR_1,
    "Timed out waiting for " "state %d got %d\n",
    VAR_12, VAR_17->dsp_ack);

   break;
  }
  if (VAR_12 == VAR_2)
   FUNC_1(&VAR_10[VAR_14],
    (void *)&VAR_17->u.b_data[0], VAR_18);

  VAR_14 += VAR_18;
 }
 if (VAR_17->dsp_ack != VAR_12)
  FUNC_0(VAR_0, "interface->dsp_ack=%d, expected %d\n",
   VAR_17->dsp_ack, VAR_12);


 FUNC_2(VAR_13, VAR_3);

 return VAR_15;
}
