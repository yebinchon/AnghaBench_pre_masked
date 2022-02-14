
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int u_joliet_level; int b_xa; } ;
typedef TYPE_1__ iso9660_t ;
struct TYPE_16__ {scalar_t__ type; size_t* secsize; int * lsn; } ;
typedef TYPE_2__ iso9660_stat_t ;
struct TYPE_17__ {int file_flags; } ;
typedef TYPE_3__ iso9660_dir_t ;
typedef int CdioList_t ;
typedef int CdioISO9660FileList_t ;
typedef int * CdioDataFree_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int,int *) ;
 int * FUNC_2 () ;
 TYPE_2__* FUNC_3 (TYPE_3__*,TYPE_2__*,int ,int ) ;
 int * FUNC_4 (int,size_t const) ;
 int FUNC_5 (char*,unsigned long) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,unsigned int*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,char const*) ;
 long FUNC_10 (TYPE_1__*,int *,int ,unsigned long) ;
 int FUNC_11 (TYPE_2__*) ;

CdioISO9660FileList_t *
FUNC_12 (iso9660_t *VAR_3, const char VAR_4[])
{
  iso9660_dir_t *VAR_5;
  iso9660_stat_t *VAR_6 = ((void*)0);
  iso9660_stat_t *VAR_7;

  if (!VAR_3) return ((void*)0);
  if (!VAR_4) return ((void*)0);

  VAR_7 = FUNC_9 (VAR_3, VAR_4);
  if (!VAR_7) return ((void*)0);

  if (VAR_7->type != VAR_2) {
    FUNC_11(VAR_7);
    return ((void*)0);
  }

  {
    long int VAR_8;
    unsigned VAR_9 = 0;
    uint8_t *VAR_10 = ((void*)0);
    CdioList_t *VAR_11 = FUNC_2 ();
    const size_t VAR_12 = VAR_7->secsize[0] * VAR_0;


    if (!VAR_12)
      {
        FUNC_5("Invalid directory buffer sector size %u", VAR_7->secsize[0]);
 FUNC_11(VAR_7);
 FUNC_1 (VAR_11, 1, ((void*)0));
        return ((void*)0);
      }

    VAR_10 = FUNC_4(1, VAR_12);
    if (!VAR_10)
      {
        FUNC_5("Couldn't calloc(1, %lu)", (unsigned long)VAR_12);
 FUNC_11(VAR_7);
 FUNC_1 (VAR_11, 1, ((void*)0));
        return ((void*)0);
      }

    VAR_8 = FUNC_10 (VAR_3, VAR_10, VAR_7->lsn[0], VAR_7->secsize[0]);
    if (VAR_8 != VAR_12) {
      FUNC_1 (VAR_11, 1, ((void*)0));
      FUNC_11(VAR_7);
      FUNC_6 (VAR_10);
      return ((void*)0);
    }

    while (VAR_9 < (VAR_12))
      {
 VAR_5 = (void *) &VAR_10[VAR_9];

 if (FUNC_7(VAR_5, &VAR_9))
   continue;

 VAR_6 = FUNC_3(VAR_5,
       VAR_6,
       VAR_3->b_xa,
       VAR_3->u_joliet_level);
 if ((VAR_6) &&
     ((VAR_5->file_flags & VAR_1) == 0))
   {
     FUNC_0(VAR_11, VAR_6);
     VAR_6 = ((void*)0);
   }

 VAR_9 += FUNC_8(VAR_5);
      }

    FUNC_6 (VAR_10);
    FUNC_11(VAR_7);

    if (VAR_9 != VAR_12) {
      FUNC_1 (VAR_11, 1, (CdioDataFree_t) FUNC_11);
      return ((void*)0);
    }

    return VAR_11;
  }
}
