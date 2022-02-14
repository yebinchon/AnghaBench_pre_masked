
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_file {int size; struct grub_fb_data* data; TYPE_1__* device; } ;
struct grub_fb_data {struct fbm_file* ptr; scalar_t__ fb_list; } ;
struct fbm_file {int size; int data_size; int name; } ;
typedef int grub_err_t ;
struct TYPE_2__ {int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct grub_fb_data* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static grub_err_t
FUNC_3 (struct grub_file *VAR_3, const char *VAR_4)
{
  struct fbm_file *VAR_5;
  struct grub_fb_data *VAR_6;

  VAR_6 = FUNC_1 (VAR_3->device->disk);
  if (! VAR_6)
    return VAR_2;

  while (*VAR_4 == '/')
    VAR_4++;

  VAR_5 = (struct fbm_file *) VAR_6->fb_list;
  while (VAR_5->size)
    {
      if (! FUNC_2 (VAR_4, VAR_5->name))
 {
   VAR_3->data = VAR_6;
   VAR_6->ptr = VAR_5;
   VAR_3->size = VAR_5->data_size;
   return VAR_1;
 }

      VAR_5 = (struct fbm_file *) ((char *) VAR_5 + VAR_5->size + 2);
    }

  return FUNC_0 (VAR_0, "file not found");
}
