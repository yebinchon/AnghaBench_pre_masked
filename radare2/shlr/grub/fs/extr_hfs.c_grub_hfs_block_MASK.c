
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct grub_hfs_extent_key {void* first_block; int fileid; scalar_t__ forktype; } ;
struct TYPE_6__ {int first_block; } ;
struct grub_hfs_data {int ext_root; TYPE_1__ sblock; } ;
typedef TYPE_2__* grub_hfs_datarecord_t ;
typedef int dr ;
typedef int cache_dr ;
struct TYPE_7__ {int count; int first_block; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct grub_hfs_data*,char*,int ,int,char*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static unsigned int
FUNC_5 (struct grub_hfs_data *VAR_2, grub_hfs_datarecord_t VAR_3,
  int VAR_4, int VAR_5, int VAR_6)
{
  grub_hfs_datarecord_t VAR_7;
  int VAR_8 = 0;
  struct grub_hfs_extent_key VAR_9;

  int VAR_10 = 0;
  static int VAR_11 = 0;
  static int VAR_12 = 0;
  static grub_hfs_datarecord_t VAR_13;

  FUNC_4 (VAR_7, VAR_3, sizeof (VAR_7));

  VAR_9.forktype = 0;
  VAR_9.fileid = FUNC_2 (VAR_4);

  if (VAR_6 && VAR_11 == VAR_4 && VAR_5 > VAR_12)
    {
      VAR_8 = VAR_12;
      VAR_9.first_block = FUNC_1 (VAR_8);
      FUNC_4 (VAR_7, VAR_13, sizeof (VAR_13));
    }

  for (;;)
    {
      int VAR_14;


      for (VAR_14 = 0; VAR_14 < 3; VAR_14++)
 {

   if (FUNC_0 (VAR_7[VAR_14].count) + VAR_8 > VAR_5)
     {
       int VAR_15 = FUNC_0 (VAR_7[VAR_14].first_block);



       if (VAR_10 && VAR_6)
  {
    VAR_11 = VAR_4;
    VAR_12 = VAR_8;
    FUNC_4 (VAR_13, VAR_7, sizeof (VAR_13));
  }

       return (FUNC_0 (VAR_2->sblock.first_block)
        + (VAR_15 + VAR_5 - VAR_8) * VAR_0);
     }


   VAR_8 += FUNC_0 (VAR_7[VAR_14].count);
 }


      VAR_9.first_block = FUNC_1 (VAR_8);
      VAR_10 = 1;
      FUNC_3 (VAR_2, (char *) &VAR_9, VAR_2->ext_root,
     1, (char *) &VAR_7, sizeof (VAR_7));
      if (VAR_1)
 return 0;
    }
}
