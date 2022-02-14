
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct nhlt_resource_desc {scalar_t__ length; int min_addr; } ;
struct TYPE_4__ {int signature; } ;
struct nhlt_acpi_table {TYPE_2__ header; } ;
struct device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_2 (int ,int *,int,int,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (struct nhlt_acpi_table*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

struct nhlt_acpi_table *FUNC_9(struct device *VAR_4)
{
 acpi_handle VAR_5;
 union acpi_object *VAR_6;
 struct nhlt_resource_desc *VAR_7;
 struct nhlt_acpi_table *VAR_8 = ((void*)0);

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5) {
  FUNC_4(VAR_4, "Didn't find ACPI_HANDLE\n");
  return ((void*)0);
 }

 VAR_6 = FUNC_2(VAR_5, &VAR_3, 1, 1, ((void*)0));

 if (!VAR_6)
  return ((void*)0);

 if (VAR_6->type != VAR_0) {
  FUNC_3(VAR_4, "No NHLT table found\n");
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_7 = (struct nhlt_resource_desc *)VAR_6->buffer.pointer;
 if (VAR_7->length)
  VAR_8 = (struct nhlt_acpi_table *)
   FUNC_5(VAR_7->min_addr, VAR_7->length,
     VAR_1);
 FUNC_0(VAR_6);
 if (VAR_8 &&
     (FUNC_8(VAR_8->header.signature,
       VAR_2,
       FUNC_7(VAR_2)) != 0)) {
  FUNC_6(VAR_8);
  FUNC_4(VAR_4, "NHLT ACPI header signature incorrect\n");
  return ((void*)0);
 }
 return VAR_8;
}
