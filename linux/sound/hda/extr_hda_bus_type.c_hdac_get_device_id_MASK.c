
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_driver {struct hda_device_id* id_table; } ;
struct hdac_device {scalar_t__ vendor_id; scalar_t__ revision_id; } ;
struct hda_device_id {scalar_t__ vendor_id; scalar_t__ rev_id; } ;



const struct hda_device_id *
FUNC_0(struct hdac_device *VAR_0, struct hdac_driver *VAR_1)
{
 if (VAR_1->id_table) {
  const struct hda_device_id *VAR_2 = VAR_1->id_table;

  while (VAR_2->vendor_id) {
   if (VAR_0->vendor_id == VAR_2->vendor_id &&
    (!VAR_2->rev_id || VAR_2->rev_id == VAR_0->revision_id))
    return VAR_2;
   VAR_2++;
  }
 }

 return ((void*)0);
}
