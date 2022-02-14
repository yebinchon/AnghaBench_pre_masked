
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_format_field {char* name; unsigned long flags; char* alias; unsigned int offset; unsigned int size; unsigned int arraylen; TYPE_1__* event; } ;
struct perf_sample {void* raw_data; } ;
struct ctf_writer {int dummy; } ;
struct bt_ctf_field_type {int dummy; } ;
struct bt_ctf_field {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;
struct bt_ctf_event {int dummy; } ;
struct TYPE_2__ {int tep; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long long,unsigned int) ;
 struct bt_ctf_field_type* FUNC_1 (struct bt_ctf_event_class*,char const*) ;
 int FUNC_2 (struct bt_ctf_event*,char const*,struct bt_ctf_field*) ;
 struct bt_ctf_field* FUNC_3 (struct bt_ctf_field*,unsigned int) ;
 struct bt_ctf_field* FUNC_4 (struct bt_ctf_field_type*) ;
 int FUNC_5 (struct bt_ctf_field*) ;
 int FUNC_6 (struct bt_ctf_field*,int ) ;
 int FUNC_7 (struct bt_ctf_field_type*) ;
 int FUNC_8 (struct bt_ctf_field*,unsigned long long) ;
 struct bt_ctf_field_type* FUNC_9 (struct ctf_writer*,struct tep_format_field*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (struct bt_ctf_field*,void*) ;
 unsigned long long FUNC_12 (int ,void*,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct ctf_writer *VAR_4,
          struct bt_ctf_event_class *VAR_5,
          struct bt_ctf_event *VAR_6,
          struct perf_sample *VAR_7,
          struct tep_format_field *VAR_8)
{
 struct bt_ctf_field_type *VAR_9;
 struct bt_ctf_field *VAR_10;
 struct bt_ctf_field *VAR_11;
 const char *VAR_12 = VAR_8->name;
 void *VAR_13 = VAR_7->raw_data;
 unsigned long VAR_14 = VAR_8->flags;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_12 = VAR_8->alias;
 VAR_17 = VAR_8->offset;
 VAR_18 = VAR_8->size;
 if (VAR_14 & VAR_3)
  VAR_14 &= ~VAR_0;

 if (VAR_14 & VAR_1) {
  unsigned long long VAR_20;

  VAR_20 = FUNC_12(VAR_8->event->tep,
       VAR_13 + VAR_17, VAR_18);
  VAR_17 = VAR_20;
  VAR_18 = VAR_17 >> 16;
  VAR_17 &= 0xffff;
 }

 if (VAR_14 & VAR_0) {

  VAR_9 = FUNC_1(
    VAR_5, VAR_12);
  VAR_10 = FUNC_4(VAR_9);
  FUNC_7(VAR_9);
  if (!VAR_10) {
   FUNC_10("Failed to create array type %s\n", VAR_12);
   return -1;
  }

  VAR_18 = VAR_8->size / VAR_8->arraylen;
  VAR_15 = VAR_8->arraylen;
 } else {
  VAR_15 = 1;
  VAR_10 = ((void*)0);
 }

 VAR_9 = FUNC_9(VAR_4, VAR_8);

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  if (VAR_14 & VAR_0)
   VAR_11 = FUNC_3(VAR_10, VAR_16);
  else
   VAR_11 = FUNC_4(VAR_9);

  if (!VAR_11) {
   FUNC_10("failed to create a field %s\n", VAR_12);
   return -1;
  }

  if (VAR_14 & VAR_3)
   VAR_19 = FUNC_11(VAR_11, VAR_13 + VAR_17 + VAR_16 * VAR_18);
  else {
   unsigned long long VAR_21;

   VAR_21 = FUNC_12(
     VAR_8->event->tep,
     VAR_13 + VAR_17 + VAR_16 * VAR_18, VAR_18);

   if (!(VAR_14 & VAR_2))
    VAR_19 = FUNC_8(
      VAR_11, VAR_21);
   else
    VAR_19 = FUNC_6(
      VAR_11, FUNC_0(VAR_21, VAR_18));
  }

  if (VAR_19) {
   FUNC_10("failed to set file value %s\n", VAR_12);
   goto err_put_field;
  }
  if (!(VAR_14 & VAR_0)) {
   VAR_19 = FUNC_2(VAR_6, VAR_12, VAR_11);
   if (VAR_19) {
    FUNC_10("failed to set payload %s\n", VAR_12);
    goto err_put_field;
   }
  }
  FUNC_5(VAR_11);
 }
 if (VAR_14 & VAR_0) {
  VAR_19 = FUNC_2(VAR_6, VAR_12, VAR_10);
  if (VAR_19) {
   FUNC_10("Failed add payload array %s\n", VAR_12);
   return -1;
  }
  FUNC_5(VAR_10);
 }
 return 0;

err_put_field:
 FUNC_5(VAR_11);
 return -1;
}
