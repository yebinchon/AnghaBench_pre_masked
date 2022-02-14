
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {unsigned long flags; int name; int arraylen; struct tep_format_field* next; } ;
struct ctf_writer {int dummy; } ;
struct bt_ctf_field_type {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct bt_ctf_field_type* FUNC_0 (struct bt_ctf_field_type*,int ) ;
 int FUNC_1 (struct bt_ctf_field_type*) ;
 int FUNC_2 (struct bt_ctf_event_class*,struct bt_ctf_field_type*,struct tep_format_field*) ;
 struct bt_ctf_field_type* FUNC_3 (struct ctf_writer*,struct tep_format_field*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ctf_writer *VAR_2,
           struct tep_format_field *VAR_3,
           struct bt_ctf_event_class *VAR_4)
{
 struct tep_format_field *VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next) {
  struct bt_ctf_field_type *VAR_7;
  unsigned long VAR_8 = VAR_5->flags;

  FUNC_4("  field '%s'\n", VAR_5->name);

  VAR_7 = FUNC_3(VAR_2, VAR_5);
  if (!VAR_7)
   return -1;






  if (VAR_8 & VAR_1)
   VAR_8 &= ~VAR_0;

  if (VAR_8 & VAR_0)
   VAR_7 = FUNC_0(VAR_7, VAR_5->arraylen);

  VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_5);

  if (VAR_8 & VAR_0)
   FUNC_1(VAR_7);

  if (VAR_6) {
   FUNC_5("Failed to add field '%s': %d\n",
     VAR_5->name, VAR_6);
   return -1;
  }
 }

 return 0;
}
