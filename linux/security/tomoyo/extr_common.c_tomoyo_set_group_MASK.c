
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int acl_group_index; } ;
struct tomoyo_io_buffer {scalar_t__ type; TYPE_1__ r; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tomoyo_io_buffer*,char*,int ) ;
 int FUNC_1 (struct tomoyo_io_buffer*) ;
 int FUNC_2 (struct tomoyo_io_buffer*,char const*) ;

__attribute__((used)) static void FUNC_3(struct tomoyo_io_buffer *VAR_1,
        const char *VAR_2)
{
 if (VAR_1->type == VAR_0) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, "acl_group %u ",
     VAR_1->r.acl_group_index);
 }
 FUNC_2(VAR_1, VAR_2);
}
