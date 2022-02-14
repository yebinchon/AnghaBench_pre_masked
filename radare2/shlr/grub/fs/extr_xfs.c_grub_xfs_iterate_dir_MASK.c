
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct grub_xfs_iterate_dir_closure {int (* hook ) (char const*,int,TYPE_9__*,void*) ;struct grub_fshelp_node* diro; void* closure; } ;
struct grub_xfs_dirblock_tail {int leaf_stale; int leaf_count; } ;
struct grub_xfs_dir_entry {size_t len; int name; } ;
struct grub_xfs_dir2_entry {size_t len; int inode; } ;
struct TYPE_14__ {int i8; int i4; } ;
struct TYPE_15__ {int count; TYPE_1__ parent; int smallino; } ;
struct TYPE_16__ {TYPE_2__ dirhead; struct grub_xfs_dir_entry* direntry; } ;
struct TYPE_17__ {TYPE_3__ dir; } ;
struct TYPE_21__ {int format; TYPE_4__ data; } ;
struct grub_fshelp_node {int ino; TYPE_8__ inode; } ;
typedef int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef int grub_uint16_t ;
typedef int grub_ssize_t ;
typedef TYPE_9__* grub_fshelp_node_t ;
struct TYPE_20__ {int size; } ;
struct TYPE_22__ {TYPE_7__ inode; TYPE_6__* data; } ;
struct TYPE_18__ {int log2_bsize; int log2_dirblk; } ;
struct TYPE_19__ {TYPE_5__ sblock; } ;


 int VAR_0 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;



 int FUNC_2 (int,char*,struct grub_xfs_iterate_dir_closure*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,int ,size_t) ;
 int FUNC_11 (TYPE_9__*,int ,int ,int ,int,int,char*) ;

__attribute__((used)) static int
FUNC_12 (grub_fshelp_node_t VAR_1,
         int (*VAR_2) (const char *VAR_3,
        enum grub_fshelp_filetype VAR_4,
        grub_fshelp_node_t VAR_5,
        void *VAR_6),
        void *VAR_7)
{
  struct grub_fshelp_node *VAR_8 = (struct grub_fshelp_node *) VAR_1;
  struct grub_xfs_iterate_dir_closure VAR_9;

  VAR_9.hook = VAR_2;
  VAR_9.closure = VAR_7;
  VAR_9.diro = VAR_8;
  switch (VAR_8->inode.format)
    {
    case 128:
      {
 struct grub_xfs_dir_entry *VAR_10 = &VAR_8->inode.data.dir.direntry[0];
 int VAR_11 = !VAR_8->inode.data.dir.dirhead.smallino;
 int VAR_12;
 grub_uint64_t VAR_13;



 if (VAR_11)
   {
     VAR_13 = FUNC_4 (VAR_8->inode.data.dir.dirhead.parent.i4);
     VAR_13 = FUNC_6 (VAR_13);

     VAR_10 = (struct grub_xfs_dir_entry *) ((char *) VAR_10 - 4);
   }
 else
   {
     VAR_13 = VAR_8->inode.data.dir.dirhead.parent.i8;
   }


 if (FUNC_2 (VAR_8->ino, ".", &VAR_9))
   return 1;

 if (FUNC_2 (VAR_13, "..", &VAR_9))
   return 1;

 for (VAR_12 = 0; VAR_12 < VAR_8->inode.data.dir.dirhead.count; VAR_12++)
   {
     grub_uint64_t VAR_14;
     void *VAR_15 = (((char *) VAR_10)
       + sizeof (struct grub_xfs_dir_entry)
       + VAR_10->len - 1);

  char VAR_16[VAR_10->len + 1];



     if (VAR_11)
       {
  VAR_14 = FUNC_4 (*(grub_uint32_t *) VAR_15);
  VAR_14 = FUNC_6 (VAR_14);
       }
     else
       VAR_14 = *(grub_uint64_t *) VAR_15;

     FUNC_10 (VAR_16, VAR_10->name, VAR_10->len);
     VAR_16[VAR_10->len] = '\0';
     if (FUNC_2 (VAR_14, VAR_16, &VAR_9))
       return 1;

     VAR_10 = ((struct grub_xfs_dir_entry *)
    (((char *) VAR_10)+ sizeof (struct grub_xfs_dir_entry) + VAR_10->len
     + ((VAR_11 ? sizeof (grub_uint32_t)
         : sizeof (grub_uint64_t))) - 1));
   }
 break;
      }

    case 130:
    case 129:
      {
 grub_ssize_t VAR_17;
 char *VAR_18;
 grub_uint64_t VAR_19;
        int VAR_20, VAR_21;

        VAR_21 = (VAR_1->data->sblock.log2_bsize
                       + VAR_1->data->sblock.log2_dirblk);
        VAR_20 = 1 << VAR_21;

 VAR_18 = FUNC_9 (VAR_20);
 if (! VAR_18)
   return 0;


 for (VAR_19 = 0;
      VAR_19 < (FUNC_5 (VAR_1->inode.size)
      >> VAR_21);
      VAR_19++)
   {


     int VAR_22 = 16;
     int VAR_23;
     int VAR_24 = (VAR_20
         - sizeof (struct grub_xfs_dirblock_tail));

     struct grub_xfs_dirblock_tail *VAR_25;
     VAR_25 = (struct grub_xfs_dirblock_tail *) &VAR_18[VAR_24];

     VAR_17 = FUNC_11 (VAR_1, 0, 0, 0,
       VAR_19 << VAR_21,
       VAR_20, VAR_18);
     if (VAR_17 != VAR_20)
       return 0;

     VAR_23 = (FUNC_4 (VAR_25->leaf_count)
         - FUNC_4 (VAR_25->leaf_stale));


     while (VAR_22 < (VAR_20
     - (int) sizeof (struct grub_xfs_dir2_entry)))
       {
  struct grub_xfs_dir2_entry *VAR_26;
  grub_uint16_t *VAR_27;
  char *VAR_28;

  VAR_26 = (struct grub_xfs_dir2_entry *) &VAR_18[VAR_22];
  VAR_27 = (grub_uint16_t *) VAR_26;

  if (*VAR_27 == 0XFFFF)
    {
      grub_uint16_t *VAR_29 = (grub_uint16_t *) (VAR_27 + 1);


      VAR_22 += FUNC_3 (*VAR_29);

      continue;
    }

  VAR_28 = &VAR_18[VAR_22 + sizeof (*VAR_26)];


  VAR_28[VAR_26->len] = '\0';

  if (FUNC_2 (VAR_26->inode, VAR_28, &VAR_9))
    {
      FUNC_8 (VAR_18);
      return 1;
    }



  VAR_23--;
  if (!VAR_23)
    break;


  VAR_22 = FUNC_0 (VAR_22, VAR_26->len);
  VAR_22 = FUNC_1 (VAR_22);
       }
   }
 FUNC_8 (VAR_18);
 break;
      }

    default:
      FUNC_7 (VAR_0,
    "XFS does not support inode format %d yet",
    VAR_8->inode.format);
    }
  return 0;
}
