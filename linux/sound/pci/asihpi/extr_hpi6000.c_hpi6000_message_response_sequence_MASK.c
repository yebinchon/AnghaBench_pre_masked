
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct hpi_response {scalar_t__ size; } ;
struct hpi_message {scalar_t__ size; } ;
struct hpi_hw_obj {scalar_t__ message_buffer_address_on_dsp; scalar_t__ response_buffer_address_on_dsp; struct dsp_obj* ado; } ;
struct hpi_adapter_obj {scalar_t__ dsp_crashed; struct hpi_hw_obj* priv; } ;
struct dsp_obj {int dummy; } ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 short VAR_8 ;
 short VAR_9 ;
 short VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (struct hpi_adapter_obj*,int ) ;
 scalar_t__ FUNC_2 (struct hpi_adapter_obj*,size_t,scalar_t__,scalar_t__*,size_t) ;
 scalar_t__ FUNC_3 (struct hpi_adapter_obj*,size_t,scalar_t__,scalar_t__*,size_t) ;
 int FUNC_4 (struct dsp_obj*) ;
 scalar_t__ FUNC_5 (struct hpi_adapter_obj*,size_t,int ) ;
 size_t FUNC_6 (struct hpi_adapter_obj*,size_t,int ) ;
 scalar_t__ FUNC_7 (struct dsp_obj*,int ) ;
 size_t FUNC_8 (struct hpi_message*,struct hpi_response*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static short FUNC_9(struct hpi_adapter_obj *VAR_17,
 u16 VAR_18, struct hpi_message *VAR_19, struct hpi_response *VAR_20)
{
 struct hpi_hw_obj *VAR_21 = VAR_17->priv;
 struct dsp_obj *VAR_22 = &VAR_21->ado[VAR_18];
 u32 VAR_23;
 u16 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 *VAR_27;
 u16 VAR_28 = 0;

 VAR_24 = FUNC_6(VAR_17, VAR_18, VAR_13);
 if (VAR_24 & VAR_11) {
  VAR_17->dsp_crashed++;
  return VAR_7;
 }
 VAR_17->dsp_crashed = 0;


 if (VAR_21->message_buffer_address_on_dsp == 0) {
  VAR_23 = VAR_14;
  do {
   VAR_25 =
    FUNC_7(VAR_22,
    FUNC_0(VAR_15));
   VAR_21->message_buffer_address_on_dsp = VAR_25;
  } while (FUNC_1(VAR_17, VAR_0)
   && --VAR_23);
  if (!VAR_23)
   return VAR_1;
 } else
  VAR_25 = VAR_21->message_buffer_address_on_dsp;

 VAR_26 = VAR_19->size;


 VAR_27 = (u32 *)VAR_19;
 if (FUNC_3(VAR_17, VAR_18, VAR_25, VAR_27,
   (u16)VAR_26 / 4))
  return VAR_3;

 if (FUNC_5(VAR_17, VAR_18, VAR_12))
  return VAR_4;
 FUNC_4(VAR_22);

 VAR_24 = FUNC_6(VAR_17, VAR_18, VAR_12);
 if (VAR_24 & VAR_11)
  return VAR_5;


 if (VAR_21->response_buffer_address_on_dsp == 0) {
  VAR_23 = VAR_14;
  do {
   VAR_25 =
    FUNC_7(VAR_22,
    FUNC_0(VAR_16));
  } while (FUNC_1(VAR_17, VAR_0)
   && --VAR_23);
  VAR_21->response_buffer_address_on_dsp = VAR_25;

  if (!VAR_23)
   return VAR_8;
 } else
  VAR_25 = VAR_21->response_buffer_address_on_dsp;


 VAR_23 = VAR_14;
 do {
  VAR_26 = FUNC_7(VAR_22, FUNC_0(VAR_26));
 } while (FUNC_1(VAR_17, VAR_0) && --VAR_23);
 if (!VAR_23)
  return VAR_9;

 if (VAR_26 > VAR_20->size)
  return VAR_10;


 VAR_27 = (u32 *)VAR_20;
 if (FUNC_2(VAR_17, VAR_18, VAR_25, VAR_27,
   (u16)VAR_26 / 4))
  return VAR_2;


 if (FUNC_5(VAR_17, VAR_18, VAR_13))
  return VAR_6;
 FUNC_4(VAR_22);

 VAR_28 = FUNC_8(VAR_19, VAR_20);
 return VAR_28;
}
