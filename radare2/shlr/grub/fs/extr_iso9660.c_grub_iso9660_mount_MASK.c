
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct grub_iso9660_susp_entry {int len; scalar_t__ sig; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ magic; } ;
struct grub_iso9660_primary_voldesc {int* escape; TYPE_1__ voldesc; } ;
struct grub_iso9660_dir {int namelen; int len; } ;
struct TYPE_5__ {int first_sector; } ;
struct TYPE_6__ {TYPE_2__ rootdir; } ;
struct grub_iso9660_data {int joliet; TYPE_3__ voldesc; int susp_skip; int disk; } ;
typedef int rootdir ;
typedef int grub_disk_t ;


 int * FUNC_0 (struct grub_iso9660_susp_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int,int,int,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct grub_iso9660_data*) ;
 scalar_t__ FUNC_5 (struct grub_iso9660_data*,int,int,int,int ,struct grub_iso9660_data*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 struct grub_iso9660_data* FUNC_9 (int) ;
 int VAR_5 ;

__attribute__((used)) static struct grub_iso9660_data *
FUNC_10 (grub_disk_t VAR_6)
{
  struct grub_iso9660_data *VAR_7 = 0;
  struct grub_iso9660_dir VAR_8;
  int VAR_9;
  int VAR_10;
  char *VAR_11;
  struct grub_iso9660_susp_entry *VAR_12;
  struct grub_iso9660_primary_voldesc VAR_13;
  int VAR_14;

  VAR_7 = FUNC_9 (sizeof (struct grub_iso9660_data));
  if (! VAR_7)
    return 0;

  VAR_7->disk = VAR_6;

  VAR_14 = 16;
  do
    {
      int VAR_15 = 0;


      if (FUNC_2 (VAR_6, VAR_14 << VAR_1, 0,
     sizeof (struct grub_iso9660_primary_voldesc),
     (char *) &VAR_13))
        {
          FUNC_3 (VAR_0, "not a ISO9660 filesystem");
          goto fail;
        }

      if (FUNC_8 ((char *) VAR_13.voldesc.magic, "CD001", 5) != 0)
        {
          FUNC_3 (VAR_0, "not a ISO9660 filesystem");
          goto fail;
        }

      if (VAR_13.voldesc.type == VAR_3)
        VAR_15 = 1;
      else if ((VAR_13.voldesc.type == VAR_4) &&
               (VAR_13.escape[0] == 0x25) && (VAR_13.escape[1] == 0x2f) &&
               ((VAR_13.escape[2] == 0x40) ||
                (VAR_13.escape[2] == 0x43) ||
                (VAR_13.escape[2] == 0x45)))
        {
          VAR_15 = 1;
          VAR_7->joliet = 1;
        }

      if (VAR_15)
        FUNC_7((char *) &VAR_7->voldesc, (char *) &VAR_13,
                    sizeof (struct grub_iso9660_primary_voldesc));

      VAR_14++;
    } while (VAR_13.voldesc.type != VAR_2);



  if (FUNC_2 (VAR_6,
        (FUNC_6 (VAR_7->voldesc.rootdir.first_sector)
         << VAR_1), 0,
        sizeof (VAR_8), (char *) &VAR_8))
    {
      FUNC_3 (VAR_0, "not a ISO9660 filesystem");
      goto fail;
    }

  VAR_9 = (sizeof (VAR_8) + VAR_8.namelen
      + (VAR_8.namelen % 2) - 1);
  VAR_10 = VAR_8.len - VAR_9;


  VAR_11 = FUNC_1 (1, VAR_10 + 1024);
  if (! VAR_11)
    goto fail;

  ut32 VAR_16 = FUNC_6 (VAR_7->voldesc.rootdir.first_sector) << VAR_1;
  if (FUNC_2 (VAR_6, VAR_16, VAR_9, VAR_10, VAR_11)) {
      FUNC_3 (VAR_0, "not a ISO9660 filesystem");
      goto fail;
    }


  VAR_12 = (struct grub_iso9660_susp_entry *) VAR_11;


  if (FUNC_8 ((char *) VAR_12->sig, "SP", 2) == 0)
    {



      VAR_7->susp_skip = FUNC_0(VAR_12)[2];
      VAR_12 = (struct grub_iso9660_susp_entry *) ((char *) VAR_12 + VAR_12->len);



      if (FUNC_5 (VAR_7,
         (FUNC_6 (VAR_7->voldesc.rootdir.first_sector)
          << VAR_1),
         VAR_9, VAR_10, VAR_5, VAR_7))
 goto fail;
    }


  return VAR_7;

 fail:
  FUNC_4 (VAR_7);
  return 0;
}
