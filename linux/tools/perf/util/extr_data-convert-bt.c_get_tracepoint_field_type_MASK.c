
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_format_field {unsigned long flags; int size; } ;
struct TYPE_2__ {struct bt_ctf_field_type* u32; struct bt_ctf_field_type* u64; struct bt_ctf_field_type* s32; struct bt_ctf_field_type* s64; struct bt_ctf_field_type* u64_hex; struct bt_ctf_field_type* string; } ;
struct ctf_writer {TYPE_1__ data; } ;
struct bt_ctf_field_type {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static struct bt_ctf_field_type*
FUNC_0(struct ctf_writer *VAR_4, struct tep_format_field *VAR_5)
{
 unsigned long VAR_6 = VAR_5->flags;

 if (VAR_6 & VAR_3)
  return VAR_4->data.string;

 if (!(VAR_6 & VAR_2)) {

  if (VAR_6 & VAR_0 || VAR_6 & VAR_1)
   return VAR_4->data.u64_hex;
 }

 if (VAR_6 & VAR_2) {
  if (VAR_5->size == 8)
   return VAR_4->data.s64;
  else
   return VAR_4->data.s32;
 }

 if (VAR_5->size == 8)
  return VAR_4->data.u64;
 else
  return VAR_4->data.u32;
}
