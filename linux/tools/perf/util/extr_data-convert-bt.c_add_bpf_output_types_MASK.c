
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bt_ctf_field_type* u32_hex; struct bt_ctf_field_type* u32; } ;
struct ctf_writer {TYPE_1__ data; } ;
struct bt_ctf_field_type {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;


 int FUNC_0 (struct bt_ctf_event_class*,struct bt_ctf_field_type*,char*) ;
 struct bt_ctf_field_type* FUNC_1 (struct bt_ctf_field_type*,char*) ;

__attribute__((used)) static int FUNC_2(struct ctf_writer *VAR_0,
    struct bt_ctf_event_class *VAR_1)
{
 struct bt_ctf_field_type *VAR_2 = VAR_0->data.u32;
 struct bt_ctf_field_type *VAR_3 = VAR_0->data.u32_hex;
 struct bt_ctf_field_type *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, "raw_len");
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_3, "raw_len");
 if (!VAR_4)
  return -1;

 return FUNC_0(VAR_1, VAR_4, "raw_data");
}
