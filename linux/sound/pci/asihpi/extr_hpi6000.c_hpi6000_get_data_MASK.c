
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
 int FUNC_0 (long) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct hpi_adapter_obj*,int ) ;
 scalar_t__ FUNC_2 (struct hpi_adapter_obj*,size_t,long,long*,long) ;
 int FUNC_3 (struct dsp_obj*) ;
 scalar_t__ FUNC_4 (struct hpi_adapter_obj*,size_t,int ) ;
 size_t FUNC_5 (struct hpi_adapter_obj*,size_t,int ) ;
 long FUNC_6 (struct dsp_obj*,int ) ;

__attribute__((used)) static short FUNC_7(struct hpi_adapter_obj *VAR_9, u16 VAR_10,
 struct hpi_message *VAR_11, struct hpi_response *VAR_12)
{
 struct hpi_hw_obj *VAR_13 = VAR_9->priv;
 struct dsp_obj *VAR_14 = &VAR_13->ado[VAR_10];
 u32 VAR_15 = 0;
 u16 VAR_16;
 u32 VAR_17, VAR_18;
 u32 *VAR_19 = (u32 *)VAR_11->u.d.u.data.pb_data;

 (void)VAR_12;


 while (VAR_15 < (VAR_11->u.d.u.data.data_size & ~3L)) {
  VAR_16 = FUNC_5(VAR_9, VAR_10, VAR_8);
  if (VAR_16 & VAR_6)
   return VAR_4;

  if (FUNC_4(VAR_9, VAR_10,
    VAR_7))
   return VAR_2;
  FUNC_3(VAR_14);

  VAR_16 = FUNC_5(VAR_9, VAR_10, VAR_7);

  if (VAR_16 & VAR_6)
   return VAR_1;


  do {
   VAR_18 = FUNC_6(VAR_14, FUNC_0(VAR_18));
   VAR_17 = FUNC_6(VAR_14, FUNC_0(VAR_17));
  } while (FUNC_1(VAR_9, VAR_0));


  {
   u32 VAR_20 = VAR_17;
   u32 VAR_21 = 512;
   while (VAR_20) {
    if (VAR_20 < VAR_21)
     VAR_21 = VAR_20;
    if (FUNC_2(VAR_9, VAR_10,
      VAR_18, VAR_19, VAR_21))
     return VAR_5;
    VAR_18 += VAR_21 * 4;
    VAR_19 += VAR_21;
    VAR_20 -= VAR_21;
   }
  }

  if (FUNC_4(VAR_9, VAR_10, VAR_8))
   return VAR_3;
  FUNC_3(VAR_14);

  VAR_15 += VAR_17 * 4;
 }
 return 0;
}
