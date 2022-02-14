
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef long u32 ;
typedef size_t u16 ;
struct hpi_response {int dummy; } ;
struct TYPE_5__ {long data_size; scalar_t__ pb_data; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_message {TYPE_4__ u; } ;
struct hpi_hw_obj {struct dsp_obj* ado; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct dsp_obj {int dummy; } ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 int FUNC_0 (long) ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct hpi_adapter_obj*,int ) ;
 scalar_t__ FUNC_2 (struct hpi_adapter_obj*,size_t,long,long*,long) ;
 int FUNC_3 (long,long) ;
 int FUNC_4 (struct dsp_obj*) ;
 scalar_t__ FUNC_5 (struct hpi_adapter_obj*,size_t,int ) ;
 size_t FUNC_6 (struct hpi_adapter_obj*,size_t,int ) ;
 long FUNC_7 (struct dsp_obj*,int ) ;

__attribute__((used)) static short FUNC_8(struct hpi_adapter_obj *VAR_11, u16 VAR_12,
 struct hpi_message *VAR_13, struct hpi_response *VAR_14)
{
 struct hpi_hw_obj *VAR_15 = VAR_11->priv;
 struct dsp_obj *VAR_16 = &VAR_15->ado[VAR_12];
 u32 VAR_17 = 0;
 u16 VAR_18;
 u32 VAR_19, VAR_20;
 u32 *VAR_21 = (u32 *)VAR_13->u.d.u.data.pb_data;
 u16 VAR_22 = 8;

 (void)VAR_14;


 while ((VAR_17 < (VAR_13->u.d.u.data.data_size & ~3L))
  && --VAR_22) {
  VAR_18 = FUNC_6(VAR_11, VAR_12, VAR_9);
  if (VAR_18 & VAR_8)
   return VAR_5;

  if (FUNC_5(VAR_11, VAR_12,
    VAR_10))
   return VAR_3;

  FUNC_4(VAR_16);

  VAR_18 = FUNC_6(VAR_11, VAR_12, VAR_10);

  if (VAR_18 & VAR_8)
   return VAR_1;

  do {

   VAR_20 = FUNC_7(VAR_16, FUNC_0(VAR_20));

   VAR_19 = FUNC_7(VAR_16, FUNC_0(VAR_19));
  } while (FUNC_1(VAR_11, VAR_0));

  if (!FUNC_3(VAR_20, VAR_19))
   return VAR_2;






  {
   u32 VAR_23 = VAR_19;
   u32 VAR_24 = 512;
   while (VAR_23) {
    if (VAR_23 < VAR_24)
     VAR_24 = VAR_23;
    if (FUNC_2(VAR_11, VAR_12,
      VAR_20, VAR_21, VAR_24))
     return VAR_7;
    VAR_20 += VAR_24 * 4;
    VAR_21 += VAR_24;
    VAR_23 -= VAR_24;
   }
  }

  if (FUNC_5(VAR_11, VAR_12, VAR_9))
   return VAR_4;

  FUNC_4(VAR_16);

  VAR_17 += VAR_19 * 4;
 }
 if (!VAR_22)
  return VAR_6;
 return 0;
}
