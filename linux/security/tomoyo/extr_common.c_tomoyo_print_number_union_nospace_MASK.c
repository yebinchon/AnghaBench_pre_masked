
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tomoyo_number_union {unsigned long* values; int* value_type; TYPE_2__* group; } ;
struct tomoyo_io_buffer {int dummy; } ;
typedef int buffer ;
struct TYPE_4__ {TYPE_1__* group_name; } ;
struct TYPE_3__ {char* name; } ;




 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (struct tomoyo_io_buffer*,char*,char*) ;
 int FUNC_2 (struct tomoyo_io_buffer*,char*) ;

__attribute__((used)) static void FUNC_3
(struct tomoyo_io_buffer *VAR_0, const struct tomoyo_number_union *VAR_1)
{
 if (VAR_1->group) {
  FUNC_2(VAR_0, "@");
  FUNC_2(VAR_0, VAR_1->group->group_name->name);
 } else {
  int VAR_2;
  unsigned long VAR_3 = VAR_1->values[0];
  const unsigned long VAR_4 = VAR_1->values[1];
  u8 VAR_5 = VAR_1->value_type[0];
  const u8 VAR_6 = VAR_1->value_type[1];
  char VAR_7[128];

  VAR_7[0] = '\0';
  for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
   switch (VAR_5) {
   case 129:
    FUNC_0(VAR_7, sizeof(VAR_7),
       "0x%lX", VAR_3);
    break;
   case 128:
    FUNC_0(VAR_7, sizeof(VAR_7),
       "0%lo", VAR_3);
    break;
   default:
    FUNC_0(VAR_7, sizeof(VAR_7), "%lu",
       VAR_3);
    break;
   }
   if (VAR_3 == VAR_4 && VAR_5 == VAR_6)
    break;
   FUNC_0(VAR_7, sizeof(VAR_7), "-");
   VAR_5 = VAR_6;
   VAR_3 = VAR_4;
  }
  FUNC_1(VAR_0, "%s", VAR_7);
 }
}
