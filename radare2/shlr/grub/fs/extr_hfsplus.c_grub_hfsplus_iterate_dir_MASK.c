
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; int parent; } ;
struct grub_hfsplus_key_internal {TYPE_1__ catkey; } ;
struct grub_hfsplus_iterate_dir_closure {int (* hook ) (char const*,int,TYPE_3__*,void*) ;int ret; void* closure; TYPE_3__* dir; } ;
struct grub_hfsplus_btnode {int dummy; } ;
typedef TYPE_3__* grub_fshelp_node_t ;
struct TYPE_9__ {TYPE_2__* data; int fileid; } ;
struct TYPE_8__ {int catalog_tree; } ;


 int FUNC_0 (struct grub_hfsplus_btnode*) ;
 int FUNC_1 (int *,struct grub_hfsplus_btnode*,int,int ,struct grub_hfsplus_iterate_dir_closure*) ;
 scalar_t__ FUNC_2 (int *,struct grub_hfsplus_key_internal*,int ,struct grub_hfsplus_btnode**,int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3 (grub_fshelp_node_t VAR_2,
     int (*VAR_3) (const char *VAR_4,
           enum grub_fshelp_filetype VAR_5,
           grub_fshelp_node_t VAR_6,
           void *VAR_7),
     void *VAR_8)
{
  struct grub_hfsplus_key_internal VAR_9;
  struct grub_hfsplus_btnode *VAR_10 = ((void*)0);
  int VAR_11 = 0;
  struct grub_hfsplus_iterate_dir_closure VAR_12;


  VAR_9.catkey.parent = VAR_2->fileid;
  VAR_9.catkey.name = "";


  if (FUNC_2 (&VAR_2->data->catalog_tree, &VAR_9,
     VAR_0, &VAR_10, &VAR_11))
    return 0;

  VAR_12.dir = VAR_2;
  VAR_12.hook = VAR_3;
  VAR_12.closure = VAR_8;
  VAR_12.ret = 0;

  FUNC_1 (&VAR_2->data->catalog_tree, VAR_10, VAR_11,
       VAR_1, &VAR_12);

  FUNC_0 (VAR_10);

  return VAR_12.ret;
}
