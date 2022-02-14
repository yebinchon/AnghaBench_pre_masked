
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct grub_obj_header {scalar_t__ magic; scalar_t__ version; int mod_deps; } ;
typedef scalar_t__ grub_size_t ;
typedef TYPE_1__* grub_dl_t ;
struct TYPE_12__ {int ref_count; struct TYPE_12__* init; struct TYPE_12__* name; scalar_t__ fini; scalar_t__ segment; scalar_t__ dep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct grub_obj_header*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct grub_obj_header*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,char*,TYPE_1__*,...) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int) ;
 TYPE_1__* FUNC_10 (char*) ;

grub_dl_t
FUNC_11 (void *VAR_3, grub_size_t VAR_4)
{
  struct grub_obj_header *VAR_5;
  grub_dl_t VAR_6;
  char *VAR_7;

  FUNC_7 ("modules", "module at %p, size 0x%lx\n", VAR_3,
  (unsigned long) VAR_4);

  VAR_5 = VAR_3;
  if ((VAR_5->magic != VAR_1) ||
      (VAR_5->version != VAR_2))
    {
      FUNC_8 (VAR_0, "invalid object file");
      return 0;
    }

  VAR_6 = (grub_dl_t) FUNC_9 (sizeof (*VAR_6));
  if (! VAR_6)
    return 0;

  VAR_7 = (char *) VAR_3 + VAR_5->mod_deps;

  VAR_6->name = FUNC_10 (VAR_7);
  VAR_6->ref_count = 1;
  VAR_6->dep = 0;
  VAR_6->segment = 0;
  VAR_6->init = 0;
  VAR_6->fini = 0;

  FUNC_7 ("modules", "relocating to %p\n", VAR_6);
  if (FUNC_4 (VAR_6, VAR_7)
      || FUNC_3 (VAR_6, VAR_5)
      || FUNC_5 (VAR_6, VAR_5))
    {
      VAR_6->fini = 0;
      FUNC_6 (VAR_6);
      return 0;
    }

  FUNC_2 (VAR_6);

  FUNC_7 ("modules", "module name: %s\n", VAR_6->name);
  FUNC_7 ("modules", "init function: %p\n", VAR_6->init);
  FUNC_1 (VAR_6);

  if (FUNC_0 (VAR_6))
    {
      FUNC_6 (VAR_6);
      return 0;
    }

  return VAR_6;
}
