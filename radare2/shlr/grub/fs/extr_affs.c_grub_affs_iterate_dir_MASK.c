
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct grub_affs_iterate_dir_closure {int (* hook ) (char const*,int,TYPE_1__*,void*) ;int * node; int * hashtable; struct grub_affs_file* file; struct grub_affs_data* data; void* closure; } ;
struct grub_affs_file {char* name; size_t namelen; int next; int size; int type; } ;
struct grub_affs_data {int htsize; int blocksize; int disk; } ;
typedef scalar_t__ grub_uint64_t ;
typedef int grub_uint32_t ;
typedef TYPE_1__* grub_fshelp_node_t ;
typedef int file ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ block; scalar_t__ parent; struct grub_affs_data* data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,scalar_t__,int,struct grub_affs_iterate_dir_closure*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5 (grub_fshelp_node_t VAR_11,
         int (*VAR_12) (const char *VAR_13,
        enum grub_fshelp_filetype VAR_14,
        grub_fshelp_node_t VAR_15, void *VAR_16),
         void *VAR_17)
{
  int VAR_18;
  struct grub_affs_file VAR_19;
  struct grub_affs_data *VAR_20 = VAR_11->data;
  grub_uint32_t *VAR_21;
  struct grub_affs_iterate_dir_closure VAR_22;

  VAR_22.hook = VAR_12;
  VAR_22.closure = VAR_17;
  VAR_22.node = 0;
  VAR_22.data = VAR_20;
  VAR_22.file = &VAR_19;

  VAR_21 = FUNC_4 (VAR_20->htsize * sizeof (*VAR_21));
  VAR_22.hashtable = VAR_21;
  if (!VAR_21)
    return 1;

  FUNC_2 (VAR_20->disk, VAR_11->block, VAR_4,
    VAR_20->htsize * sizeof (*VAR_21), (char *) VAR_21);
  if (VAR_10)
    goto fail;


  if (FUNC_0 (".", VAR_11->block, VAR_11->size, VAR_6, &VAR_22))
    return 1;
  if (FUNC_0 ("..", VAR_11->parent ? VAR_11->parent : VAR_11->block,
        VAR_11->size, VAR_6, &VAR_22))
    return 1;

  for (VAR_18 = 0; VAR_18 < VAR_20->htsize; VAR_18++)
    {
      enum grub_fshelp_filetype VAR_23;
      grub_uint64_t VAR_24;

      if (!VAR_21[VAR_18])
 continue;



      VAR_24 = FUNC_1 (VAR_21[VAR_18]);

      while (VAR_24)
 {
   FUNC_2 (VAR_20->disk, VAR_24 + VAR_20->blocksize - 1,
     VAR_20->blocksize * VAR_5
     - VAR_3,
     sizeof (VAR_19), (char *) &VAR_19);
   if (VAR_10)
     goto fail;

   VAR_19.name[VAR_19.namelen] = '\0';

   if ((int) FUNC_1 (VAR_19.type) == VAR_0)
     VAR_23 = VAR_7;
   else if (FUNC_1 (VAR_19.type) == VAR_1)
     VAR_23 = VAR_6;
   else if (FUNC_1 (VAR_19.type) == VAR_2)
     VAR_23 = VAR_8;
   else
     VAR_23 = VAR_9;

   if (FUNC_0 ((char *) (VAR_19.name), VAR_24,
         FUNC_1 (VAR_19.size), VAR_23, &VAR_22))
     return 1;

   VAR_24 = FUNC_1 (VAR_19.next);
 }
    }

  FUNC_3 (VAR_21);
  return 0;

 fail:
  FUNC_3 (VAR_22.node);
  FUNC_3 (VAR_21);
  return 0;
}
