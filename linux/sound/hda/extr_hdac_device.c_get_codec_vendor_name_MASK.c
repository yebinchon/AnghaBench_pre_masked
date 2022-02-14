
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hdac_device {int vendor_id; int vendor_name; } ;
struct hda_vendor_id {scalar_t__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hda_vendor_id* VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hdac_device *VAR_3)
{
 const struct hda_vendor_id *VAR_4;
 u16 VAR_5 = VAR_3->vendor_id >> 16;

 for (VAR_4 = VAR_2; VAR_4->id; VAR_4++) {
  if (VAR_4->id == VAR_5) {
   VAR_3->vendor_name = FUNC_1(VAR_4->name, VAR_1);
   return VAR_3->vendor_name ? 0 : -VAR_0;
  }
 }

 VAR_3->vendor_name = FUNC_0(VAR_1, "Generic %04x", VAR_5);
 return VAR_3->vendor_name ? 0 : -VAR_0;
}
