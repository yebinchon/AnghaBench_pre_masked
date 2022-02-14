
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {scalar_t__ type; unsigned int* secsize; int * lsn; } ;
typedef TYPE_1__ iso9660_stat_t ;
struct TYPE_17__ {int file_flags; } ;
typedef TYPE_2__ iso9660_dir_t ;
struct TYPE_18__ {int u_joliet_level; } ;
typedef TYPE_3__ generic_img_private_t ;
struct TYPE_19__ {scalar_t__ env; } ;
typedef int CdioISO9660FileList_t ;
typedef int CdioISO9660DirList_t ;
typedef TYPE_4__ CdIo_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 () ;
 TYPE_1__* FUNC_2 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int * FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *,int ,unsigned int,unsigned int) ;
 int FUNC_6 (char*,unsigned int) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,unsigned int*) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (TYPE_4__*,char const*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*) ;

CdioISO9660FileList_t *
FUNC_13 (CdIo_t *VAR_4, const char VAR_5[])
{
  generic_img_private_t *VAR_6;
  iso9660_dir_t *VAR_7;
  iso9660_stat_t *VAR_8 = ((void*)0);
  iso9660_stat_t *VAR_9;

  if (!VAR_4) return ((void*)0);
  if (!VAR_5) return ((void*)0);

  VAR_6 = (generic_img_private_t *) VAR_4->env;

  VAR_9 = FUNC_10 (VAR_4, VAR_5);
  if (!VAR_9) return ((void*)0);

  if (VAR_9->type != VAR_2) {
    FUNC_12(VAR_9);
    return ((void*)0);
  }

  {
    unsigned VAR_10 = 0;
    uint8_t *VAR_11 = ((void*)0);
    CdioISO9660DirList_t *VAR_12 = FUNC_1 ();

    VAR_11 = FUNC_3(1, VAR_9->secsize[0] * VAR_0);
    if (!VAR_11)
      {
      FUNC_6("Couldn't calloc(1, %d)", VAR_9->secsize[0] * VAR_0);
      FUNC_12(VAR_9);
      FUNC_9(VAR_12);
      return ((void*)0);
      }

    if (FUNC_5 (VAR_4, VAR_11, VAR_9->lsn[0],
    VAR_0, VAR_9->secsize[0])) {
      FUNC_12(VAR_9);
      FUNC_9(VAR_12);
      return ((void*)0);
    }

    while (VAR_10 < (VAR_9->secsize[0] * VAR_0))
      {
 VAR_7 = (void *) &VAR_11[VAR_10];

 if (FUNC_8(VAR_7, &VAR_10))
     continue;

 VAR_8 = FUNC_2(VAR_7,
       VAR_8, VAR_3,
       VAR_6->u_joliet_level);
 if ((VAR_8) &&
     ((VAR_7->file_flags & VAR_1) == 0))
   {
     FUNC_0 (VAR_12, VAR_8);
     VAR_8 = ((void*)0);
   }

 VAR_10 += FUNC_11(VAR_7);
      }

    FUNC_4 (VAR_10 == (VAR_9->secsize[0] * VAR_0));

    FUNC_7(VAR_11);
    FUNC_12(VAR_9);
    return VAR_12;
  }
}
