
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int is_delete; TYPE_2__* ns; } ;
struct tomoyo_io_buffer {TYPE_1__ w; int write_buf; } ;
struct tomoyo_acl_param {int const is_delete; int data; TYPE_2__* ns; } ;
struct TYPE_4__ {int * acl_group; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned int FUNC_0 (int ,char**,int) ;
 char** VAR_4 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 char** VAR_5 ;
 int FUNC_2 (struct tomoyo_acl_param*) ;
 int FUNC_3 (TYPE_2__*,int *,char*,int const) ;
 int FUNC_4 (struct tomoyo_acl_param*,size_t) ;
 int FUNC_5 (struct tomoyo_acl_param*,size_t) ;

__attribute__((used)) static int FUNC_6(struct tomoyo_io_buffer *VAR_6)
{
 const bool VAR_7 = VAR_6->w.is_delete;
 struct tomoyo_acl_param VAR_8 = {
  .ns = VAR_6->w.ns,
  .is_delete = VAR_7,
  .data = VAR_6->write_buf,
 };
 u8 VAR_9;

 if (FUNC_1(&VAR_8.data, "aggregator "))
  return FUNC_2(&VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  if (FUNC_1(&VAR_8.data, VAR_5[VAR_9]))
   return FUNC_5(&VAR_8, VAR_9);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  if (FUNC_1(&VAR_8.data, VAR_4[VAR_9]))
   return FUNC_4(&VAR_8, VAR_9);
 if (FUNC_1(&VAR_8.data, "acl_group ")) {
  unsigned int VAR_10;
  char *VAR_11;

  VAR_10 = FUNC_0(VAR_8.data, &VAR_11, 10);
  if (VAR_10 < VAR_1 && *VAR_11++ == ' ')
   return FUNC_3
    (VAR_6->w.ns, &VAR_6->w.ns->acl_group[VAR_10],
     VAR_11, VAR_7);
 }
 return -VAR_0;
}
