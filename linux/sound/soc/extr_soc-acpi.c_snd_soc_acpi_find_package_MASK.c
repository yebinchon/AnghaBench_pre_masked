
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
union acpi_object {TYPE_2__ package; } ;
typedef int u32 ;
struct snd_soc_acpi_package_context {int data_valid; scalar_t__ length; int state; int format; int name; } ;
struct TYPE_3__ {scalar_t__ functional; scalar_t__ present; } ;
struct acpi_device {TYPE_1__ status; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct acpi_device**) ;
 int FUNC_2 (int ,int ,int *,struct acpi_buffer*,int ) ;
 int FUNC_3 (union acpi_object*,int ,int ) ;
 int FUNC_4 (union acpi_object*) ;

__attribute__((used)) static acpi_status FUNC_5(acpi_handle VAR_4, u32 VAR_5,
          void *VAR_6, void **VAR_7)
{
 struct acpi_device *VAR_8;
 acpi_status VAR_9 = VAR_3;
 struct snd_soc_acpi_package_context *VAR_10 = VAR_6;

 VAR_10->data_valid = 0;

 if (FUNC_1(VAR_4, &VAR_8))
  return VAR_3;

 if (VAR_8->status.present && VAR_8->status.functional) {
  struct acpi_buffer VAR_11 = {VAR_0, ((void*)0)};
  union acpi_object *VAR_12 = ((void*)0);

  VAR_9 = FUNC_2(VAR_4, VAR_10->name,
      ((void*)0), &VAR_11,
      VAR_1);
  if (FUNC_0(VAR_9))
   return VAR_3;

  VAR_12 = VAR_11.pointer;
  if (!VAR_12 || VAR_12->package.count != VAR_10->length) {
   FUNC_4(VAR_11.pointer);
   return VAR_3;
  }

  VAR_9 = FUNC_3(VAR_12,
     VAR_10->format, VAR_10->state);
  if (FUNC_0(VAR_9)) {
   FUNC_4(VAR_11.pointer);
   return VAR_3;
  }

  FUNC_4(VAR_11.pointer);
  VAR_10->data_valid = 1;
  return VAR_2;
 }

 return VAR_3;
}
