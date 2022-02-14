
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_ntfs_file {TYPE_1__* data; int ino; int inode_read; } ;
struct grub_ntfs_attr {int dummy; } ;
typedef int grub_size_t ;
typedef scalar_t__ grub_fshelp_node_t ;
typedef int grub_disk_addr_t ;
struct TYPE_2__ {int idx_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct grub_ntfs_attr*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,int,char*) ;
 int FUNC_2 (struct grub_ntfs_attr*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct grub_ntfs_attr*,struct grub_ntfs_file*) ;
 scalar_t__ FUNC_8 (struct grub_ntfs_file*,int ) ;
 int FUNC_9 (struct grub_ntfs_file*,char*,int (*) (char const*,int,scalar_t__,void*),void*) ;
 char* FUNC_10 (struct grub_ntfs_attr*,struct grub_ntfs_file*,int ) ;
 scalar_t__ FUNC_11 (struct grub_ntfs_attr*,char*,int,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct grub_ntfs_attr*,char*,char*,int ,int,int ,int ,int ,int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int) ;

__attribute__((used)) static int
FUNC_15 (grub_fshelp_node_t VAR_5,
         int (*VAR_6) (const char *VAR_7,
        enum grub_fshelp_filetype VAR_8,
        grub_fshelp_node_t VAR_9,
        void *VAR_10),
         void *VAR_11)
{
  unsigned char *VAR_12;
  struct grub_ntfs_attr VAR_13, *VAR_14;
  char *VAR_15, *VAR_16, *VAR_17;
  int VAR_18 = 0;
  grub_size_t VAR_19;
  struct grub_ntfs_file *VAR_20;

  VAR_20 = (struct grub_ntfs_file *) VAR_5;

  if (!VAR_20->inode_read)
    {
      if (FUNC_8 (VAR_20, VAR_20->ino))
 return 0;
    }

  VAR_16 = ((void*)0);
  VAR_17 = ((void*)0);

  VAR_14 = &VAR_13;
  FUNC_7 (VAR_14, VAR_20);
  while (1)
    {
      if ((VAR_15 = FUNC_0 (VAR_14, VAR_2)) == ((void*)0))
 {
   FUNC_3 (VAR_4, "no $INDEX_ROOT");
   goto done;
 }


      if ((FUNC_14 (VAR_15, 8) != 0x180400) ||
   (FUNC_14 (VAR_15, 0x18) != 0x490024) ||
   (FUNC_14 (VAR_15, 0x1C) != 0x300033))
 continue;
      VAR_15 += FUNC_13 (VAR_15, 0x14);
      if (*VAR_15 != 0x30)
 continue;
      break;
    }

  VAR_15 += 0x10;
  VAR_18 = FUNC_9 (VAR_20, VAR_15 + FUNC_13 (VAR_15, 0), VAR_6, VAR_11);
  if (VAR_18)
    goto done;

  VAR_12 = ((void*)0);
  VAR_19 = 0;
  FUNC_2 (VAR_14);
  FUNC_7 (VAR_14, VAR_20);
  while ((VAR_15 = FUNC_0 (VAR_14, VAR_0)) != ((void*)0))
    {
      int VAR_21;

      VAR_21 = (unsigned char) VAR_15[0xA];

      if ((VAR_15[9] == 4) &&
   (FUNC_14 (VAR_15, VAR_21) == 0x490024) &&
   (FUNC_14 (VAR_15, VAR_21 + 4) == 0x300033))
 {
          int VAR_22 = (VAR_15[8] == 0);

          VAR_19 = ((VAR_22) ? FUNC_14 (VAR_15, 0x10) :
                        FUNC_14 (VAR_15, 0x28));

          VAR_17 = FUNC_5 (VAR_19);
          if (VAR_17 == ((void*)0))
            goto done;

   if (VAR_22)
     {
              FUNC_6 (VAR_17, (char *) (VAR_15 + FUNC_13 (VAR_15, 0x14)),
                           VAR_19);
     }
          else
            {
              if (FUNC_12 (VAR_14, VAR_15, VAR_17, 0, VAR_19, 0, 0, 0, 0))
                {
                  FUNC_3 (VAR_4,
                              "fails to read non-resident $BITMAP");
                  goto done;
                }
              VAR_19 = FUNC_14 (VAR_15, 0x30);
            }

          VAR_12 = (unsigned char *) VAR_17;
   break;
 }
    }

  FUNC_2 (VAR_14);
  VAR_15 = FUNC_10 (VAR_14, VAR_20, VAR_1);
  while (VAR_15 != ((void*)0))
    {

      if ((FUNC_14 (VAR_15, 8) == 0x400401) &&
   (FUNC_14 (VAR_15, 0x40) == 0x490024) &&
   (FUNC_14 (VAR_15, 0x44) == 0x300033))
 break;
      VAR_15 = FUNC_0 (VAR_14, VAR_1);
    }

  if ((!VAR_15) && (VAR_12))
    {
      FUNC_3 (VAR_4, "$BITMAP without $INDEX_ALLOCATION");
      goto done;
    }

  if (VAR_12)
    {
      grub_disk_addr_t VAR_23, VAR_24;

      VAR_16 = FUNC_5 (VAR_20->data->idx_size << VAR_3);
      if (VAR_16 == ((void*)0))
 goto done;

      VAR_23 = 1;
      for (VAR_24 = 0; VAR_24 < (grub_disk_addr_t)VAR_19 * 8; VAR_24++)
 {
   if (*VAR_12 & VAR_23)
     {
       if ((FUNC_11
     (VAR_14, VAR_16, VAR_24 * (VAR_20->data->idx_size << VAR_3),
      (VAR_20->data->idx_size << VAR_3), 0, 0, 0, 0))
    || (FUNC_1 (VAR_20->data, VAR_16, VAR_20->data->idx_size, "INDX")))
  goto done;
       VAR_18 = FUNC_9 (VAR_20, &VAR_16[0x18 + FUNC_13 (VAR_16, 0x18)], VAR_6,
          VAR_11);
       if (VAR_18)
  goto done;
     }
   VAR_23 <<= 1;
   if (VAR_23 >= 0x100)
     {
       VAR_23 = 1;
       VAR_12++;
     }
 }
    }

done:
  FUNC_2 (VAR_14);
  FUNC_4 (VAR_16);
  FUNC_4 (VAR_17);

  return VAR_18;
}
