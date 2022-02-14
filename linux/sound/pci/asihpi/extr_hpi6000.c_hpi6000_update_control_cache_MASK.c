
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct hpi_message {int dummy; } ;
struct hpi_hw_obj {int * control_cache; struct dsp_obj* ado; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct dsp_obj {int control_cache_address_on_dsp; int control_cache_length_on_dsp; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct hpi_adapter_obj*,int ) ;
 scalar_t__ FUNC_2 (struct hpi_adapter_obj*,size_t const,int,int*,int) ;
 int FUNC_3 (struct dsp_obj*,int ) ;
 int FUNC_4 (struct dsp_obj*,int ) ;
 int FUNC_5 (struct dsp_obj*,int ,int ) ;
 int FUNC_6 (struct hpi_adapter_obj*) ;
 int FUNC_7 (struct hpi_adapter_obj*) ;

__attribute__((used)) static short FUNC_8(struct hpi_adapter_obj *VAR_11,
 struct hpi_message *VAR_12)
{
 const u16 VAR_13 = 0;
 struct hpi_hw_obj *VAR_14 = VAR_11->priv;
 struct dsp_obj *VAR_15 = &VAR_14->ado[VAR_13];
 u32 VAR_16;
 u32 VAR_17;
 u16 VAR_18;

 FUNC_6(VAR_11);

 VAR_16 = VAR_6;
 do {
  VAR_17 =
   FUNC_3((struct dsp_obj *)VAR_15,
   FUNC_0(VAR_8));
 } while (FUNC_1(VAR_11, VAR_0) && --VAR_16);
 if (!VAR_16) {
  VAR_18 = VAR_4;
  goto unlock;
 }

 if (VAR_17) {

  u32 VAR_19;
  u32 VAR_20;

  VAR_16 = VAR_6;
  if (VAR_15->control_cache_address_on_dsp == 0) {
   do {
    VAR_19 =
     FUNC_3((struct dsp_obj *)VAR_15,
     FUNC_0(VAR_7));

    VAR_20 = FUNC_3((struct dsp_obj *)VAR_15,
     FUNC_0
     (VAR_9));
   } while (FUNC_1(VAR_11, VAR_0)
    && --VAR_16);
   if (!VAR_16) {
    VAR_18 = VAR_2;
    goto unlock;
   }
   VAR_15->control_cache_address_on_dsp = VAR_19;
   VAR_15->control_cache_length_on_dsp = VAR_20;
  } else {
   VAR_19 = VAR_15->control_cache_address_on_dsp;
   VAR_20 = VAR_15->control_cache_length_on_dsp;
  }

  if (FUNC_2(VAR_11, VAR_13, VAR_19,
    (u32 *)&VAR_14->control_cache[0],
    VAR_20 / sizeof(u32))) {
   VAR_18 = VAR_5;
   goto unlock;
  }
  do {
   FUNC_5((struct dsp_obj *)VAR_15,
    FUNC_0(VAR_8), 0);

   FUNC_4(VAR_15, FUNC_0(VAR_10));
  } while (FUNC_1(VAR_11, VAR_1)
   && --VAR_16);
  if (!VAR_16) {
   VAR_18 = VAR_3;
   goto unlock;
  }

 }
 VAR_18 = 0;

unlock:
 FUNC_7(VAR_11);
 return VAR_18;
}
