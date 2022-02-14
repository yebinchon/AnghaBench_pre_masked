
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tomoyo_name_union {TYPE_3__* filename; TYPE_2__* group; } ;
struct tomoyo_io_buffer {int dummy; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {TYPE_1__* group_name; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (struct tomoyo_io_buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct tomoyo_io_buffer *VAR_0,
        const struct tomoyo_name_union *VAR_1)
{
 if (VAR_1->group) {
  FUNC_0(VAR_0, "@");
  FUNC_0(VAR_0, VAR_1->group->group_name->name);
 } else {
  FUNC_0(VAR_0, "\"");
  FUNC_0(VAR_0, VAR_1->filename->name);
  FUNC_0(VAR_0, "\"");
 }
}
