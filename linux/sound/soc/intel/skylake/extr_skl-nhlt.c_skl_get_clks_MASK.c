
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct skl_ssp_clk {int dummy; } ;
struct skl_dev {scalar_t__ nhlt; } ;
struct nhlt_fmt {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ caps; } ;
struct nhlt_endpoint {scalar_t__ linktype; int length; TYPE_1__ config; int virtual_bus_id; } ;
struct nhlt_acpi_table {int endpoint_count; scalar_t__ desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skl_dev*,struct skl_ssp_clk*,struct nhlt_fmt*,int ) ;
 int FUNC_1 (struct skl_dev*,struct skl_ssp_clk*,struct nhlt_fmt*,int ) ;

void FUNC_2(struct skl_dev *VAR_1, struct skl_ssp_clk *VAR_2)
{
 struct nhlt_acpi_table *VAR_3 = (struct nhlt_acpi_table *)VAR_1->nhlt;
 struct nhlt_endpoint *VAR_4;
 struct nhlt_fmt *VAR_5;
 int VAR_6;
 u8 VAR_7;

 VAR_4 = (struct nhlt_endpoint *)VAR_3->desc;
 for (VAR_6 = 0; VAR_6 < VAR_3->endpoint_count; VAR_6++) {
  if (VAR_4->linktype == VAR_0) {
   VAR_7 = VAR_4->virtual_bus_id;

   VAR_5 = (struct nhlt_fmt *)(VAR_4->config.caps
     + VAR_4->config.size);

   FUNC_1(VAR_1, VAR_2, VAR_5, VAR_7);
   FUNC_0(VAR_1, VAR_2, VAR_5, VAR_7);
  }
  VAR_4 = (struct nhlt_endpoint *)((u8 *)VAR_4 + VAR_4->length);
 }
}
