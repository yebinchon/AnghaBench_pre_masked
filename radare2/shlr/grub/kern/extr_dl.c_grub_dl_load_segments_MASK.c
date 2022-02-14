
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_obj_segment {scalar_t__ type; int offset; int size; int align; } ;
struct grub_obj_header {scalar_t__ init_func; scalar_t__ fini_func; struct grub_obj_segment* segments; } ;
typedef int grub_err_t ;
typedef TYPE_1__* grub_dl_t ;
typedef TYPE_2__* grub_dl_segment_t ;
struct TYPE_6__ {unsigned int section; struct TYPE_6__* next; int size; void* addr; } ;
struct TYPE_5__ {void (* init ) (TYPE_1__*) ;void (* fini ) () ;TYPE_2__* segment; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,char*,int) ;
 int FUNC_4 (void*,int ,int ) ;

__attribute__((used)) static grub_err_t
FUNC_5 (grub_dl_t VAR_4, struct grub_obj_header *VAR_5)
{
  unsigned VAR_6;
  struct grub_obj_segment *VAR_7;

  for (VAR_6 = 0, VAR_7 = &VAR_5->segments[0]; VAR_7->type != VAR_2; VAR_6++, VAR_7++)
    {
      grub_dl_segment_t VAR_8;
      void *VAR_9;

      VAR_8 = (grub_dl_segment_t) FUNC_1 (sizeof (*VAR_8));
      if (! VAR_8)
 return VAR_3;

      VAR_9 = FUNC_2 (VAR_7->align, VAR_7->size);
      if (! VAR_9)
 {
   FUNC_0 (VAR_8);
   return VAR_3;
 }

      FUNC_4 (VAR_9, 0, VAR_7->size);
      FUNC_3 (VAR_9, (char *) VAR_5 + VAR_7->offset,
     (VAR_7 + 1)->offset - VAR_7->offset);
      VAR_8->addr = VAR_9;

      VAR_8->size = VAR_7->size;
      VAR_8->section = VAR_6;
      VAR_8->next = VAR_4->segment;
      VAR_4->segment = VAR_8;

      if (! VAR_6)
 {
   if (VAR_5->init_func != VAR_1)
     VAR_4->init = (void (*) (grub_dl_t)) ((char *) VAR_9 + VAR_5->init_func);

   if (VAR_5->fini_func != VAR_1)
     VAR_4->fini = (void (*) (void)) ((char *) VAR_9 + VAR_5->fini_func);
 }
    }

  return VAR_0;
}
