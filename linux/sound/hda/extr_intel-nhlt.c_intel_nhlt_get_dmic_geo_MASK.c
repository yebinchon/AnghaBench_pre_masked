
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nhlt_vendor_dmic_array_config {unsigned int nb_mics; } ;
struct TYPE_2__ {scalar_t__ caps; } ;
struct nhlt_endpoint {scalar_t__ linktype; int length; TYPE_1__ config; } ;
struct nhlt_dmic_array_config {int array_type; } ;
struct nhlt_acpi_table {scalar_t__ endpoint_count; scalar_t__ desc; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;






 int FUNC_0 (struct device*,char*,int) ;

int FUNC_1(struct device *VAR_3, struct nhlt_acpi_table *VAR_4)
{
 struct nhlt_endpoint *VAR_5;
 struct nhlt_dmic_array_config *VAR_6;
 struct nhlt_vendor_dmic_array_config *VAR_7;
 unsigned int VAR_8 = 0;
 u8 VAR_9;

 if (!VAR_4)
  return 0;

 VAR_5 = (struct nhlt_endpoint *)VAR_4->desc;

 for (VAR_9 = 0; VAR_9 < VAR_4->endpoint_count; VAR_9++) {
  if (VAR_5->linktype == VAR_2) {
   VAR_6 = (struct nhlt_dmic_array_config *)
     (VAR_5->config.caps);
   switch (VAR_6->array_type) {
   case 132:
   case 133:
    VAR_8 = VAR_0;
    break;

   case 131:
   case 129:
   case 130:
    VAR_8 = VAR_1;
    break;
   case 128:
    VAR_7 = (struct nhlt_vendor_dmic_array_config *)VAR_6;
    VAR_8 = VAR_7->nb_mics;
    break;
   default:
    FUNC_0(VAR_3, "undefined DMIC array_type 0x%0x\n",
      VAR_6->array_type);
   }
  }
  VAR_5 = (struct nhlt_endpoint *)((u8 *)VAR_5 + VAR_5->length);
 }

 return VAR_8;
}
