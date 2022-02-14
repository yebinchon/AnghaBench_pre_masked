
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_delete; } ;
struct tomoyo_io_buffer {char* write_buf; TYPE_1__ w; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct tomoyo_io_buffer *VAR_1)
{
 char *VAR_2 = VAR_1->write_buf;

 if (!FUNC_0(VAR_2, "manage_by_non_root")) {
  VAR_0 = !VAR_1->w.is_delete;
  return 0;
 }
 return FUNC_1(VAR_2, VAR_1->w.is_delete);
}
