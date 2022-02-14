
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct hpi_response_header {int dummy; } ;
struct hpi_response {int specific_error; int size; int error; } ;
struct TYPE_3__ {int size; } ;
struct hpi_message {int size; scalar_t__ function; TYPE_1__ response; } ;
struct hpi_hw_obj {struct bus_master_interface* p_interface_buffer; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct TYPE_4__ {struct hpi_message response_buffer; struct hpi_response message_buffer; } ;
struct bus_master_interface {TYPE_2__ u; int dsp_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_response*,struct hpi_message*,int) ;
 int VAR_11 ;
 int FUNC_3 (struct hpi_hw_obj*,int ) ;
 scalar_t__ FUNC_4 (struct hpi_hw_obj*,int ,scalar_t__) ;

__attribute__((used)) static u16 FUNC_5(struct hpi_adapter_obj *VAR_12,
 struct hpi_message *VAR_13, struct hpi_response *VAR_14)
{
 u32 VAR_15, VAR_16;
 struct hpi_hw_obj *VAR_17 = VAR_12->priv;
 struct bus_master_interface *VAR_18 = VAR_17->p_interface_buffer;
 u16 VAR_19 = 0;

 VAR_11++;
 if (VAR_13->size > sizeof(VAR_18->u.message_buffer)) {
  VAR_14->error = VAR_8;
  VAR_14->specific_error = sizeof(VAR_18->u.message_buffer);
  VAR_14->size = sizeof(struct hpi_response_header);
  FUNC_0(VAR_1,
   "message len %d too big for buffer %zd \n", VAR_13->size,
   sizeof(VAR_18->u.message_buffer));
  return 0;
 }




 if (!FUNC_4(VAR_17, VAR_3, VAR_6)) {
  FUNC_0(VAR_0, "timeout waiting for idle\n");
  return VAR_4;
 }

 FUNC_2(&VAR_18->u.message_buffer, VAR_13, VAR_13->size);

 FUNC_3(VAR_17, VAR_2);

 VAR_16 = FUNC_4(VAR_17, VAR_2, VAR_6);

 if (!VAR_16) {
  FUNC_0(VAR_1,
   "(%u) Timed out waiting for " "GET_RESP state [%x]\n",
   VAR_11, VAR_18->dsp_ack);
 } else {
  FUNC_0(VAR_10,
   "(%u) transition to GET_RESP after %u\n",
   VAR_11, VAR_6 - VAR_16);
 }

 VAR_15 = VAR_6;


 if (VAR_15) {
  if (VAR_18->u.response_buffer.response.size <= VAR_14->size)
   FUNC_2(VAR_14, &VAR_18->u.response_buffer,
    VAR_18->u.response_buffer.response.size);
  else {
   FUNC_0(VAR_1,
    "response len %d too big for buffer %d\n",
    VAR_18->u.response_buffer.response.size,
    VAR_14->size);
   FUNC_2(VAR_14, &VAR_18->u.response_buffer,
    sizeof(struct hpi_response_header));
   VAR_14->error = VAR_9;
   VAR_14->specific_error =
    VAR_18->u.response_buffer.response.size;
   VAR_14->size = sizeof(struct hpi_response_header);
  }
 }

 FUNC_3(VAR_17, VAR_3);

 if (!VAR_15 || !VAR_16) {
  FUNC_0(VAR_0, "something timed out!\n");
  return VAR_5;
 }


 if (VAR_13->function == VAR_7) {
  if (!FUNC_4(VAR_17, VAR_3, VAR_6)) {
   FUNC_0(VAR_0,
    "Timeout waiting for idle "
    "(on adapter_close)\n");
   return VAR_4;
  }
 }
 VAR_19 = FUNC_1(VAR_13, VAR_14);
 return VAR_19;
}
