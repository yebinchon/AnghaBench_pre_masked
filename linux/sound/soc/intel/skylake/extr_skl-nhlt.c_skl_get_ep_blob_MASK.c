
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct skl_dev {struct nhlt_acpi_table* nhlt; } ;
struct nhlt_specific_cfg {int dummy; } ;
struct nhlt_fmt {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ caps; } ;
struct nhlt_endpoint {int length; TYPE_1__ config; } ;
struct nhlt_acpi_table {int endpoint_count; scalar_t__ desc; } ;
struct hdac_bus {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int ,int,int,int,int ,int,int) ;
 scalar_t__ FUNC_2 (struct device*,struct nhlt_endpoint*,int ,int,int,int) ;
 struct nhlt_specific_cfg* FUNC_3 (struct device*,struct nhlt_fmt*,int,int ,int,int) ;
 struct hdac_bus* FUNC_4 (struct skl_dev*) ;

struct nhlt_specific_cfg
*FUNC_5(struct skl_dev *VAR_0, u32 VAR_1, u8 VAR_2,
   u8 VAR_3, u8 VAR_4, u32 VAR_5,
   u8 VAR_6, u8 VAR_7)
{
 struct nhlt_fmt *VAR_8;
 struct nhlt_endpoint *VAR_9;
 struct hdac_bus *VAR_10 = FUNC_4(VAR_0);
 struct device *VAR_11 = VAR_10->dev;
 struct nhlt_specific_cfg *VAR_12;
 struct nhlt_acpi_table *VAR_13 = VAR_0->nhlt;
 u16 VAR_14 = (VAR_3 == 16) ? 16 : 32;
 u8 VAR_15;

 FUNC_1(VAR_11, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_14);

 VAR_9 = (struct nhlt_endpoint *)VAR_13->desc;

 FUNC_0(VAR_11, "endpoint count =%d\n", VAR_13->endpoint_count);

 for (VAR_15 = 0; VAR_15 < VAR_13->endpoint_count; VAR_15++) {
  if (FUNC_2(VAR_11, VAR_9, VAR_1, VAR_2,
      VAR_6, VAR_7)) {
   VAR_8 = (struct nhlt_fmt *)(VAR_9->config.caps +
       VAR_9->config.size);
   VAR_12 = FUNC_3(VAR_11, VAR_8, VAR_4,
       VAR_5, VAR_14, VAR_2);
   if (VAR_12)
    return VAR_12;
  }

  VAR_9 = (struct nhlt_endpoint *)((u8 *)VAR_9 + VAR_9->length);
 }

 return ((void*)0);
}
