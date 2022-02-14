
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_nfit_control_region {int vendor_id; int revision_id; int valid_fields; int manufacturing_location; int manufacturing_date; scalar_t__ device_id; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct acpi_nfit_control_region *VAR_0)
{
 VAR_0->vendor_id = 0xabcd;
 VAR_0->device_id = 0;
 VAR_0->revision_id = 1;
 VAR_0->valid_fields = 1;
 VAR_0->manufacturing_location = 0xa;
 VAR_0->manufacturing_date = FUNC_0(2016);
}
