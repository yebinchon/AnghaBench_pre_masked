
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int b3_rock; } ;
struct TYPE_13__ {scalar_t__ type; int* secsize; TYPE_1__ rr; int * lsn; } ;
typedef TYPE_2__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_14__ {int u_joliet_level; int b_xa; } ;
typedef TYPE_3__ iso9660_t ;
typedef TYPE_2__ iso9660_stat_t ;
typedef int iso9660_dir_t ;
typedef int bool_3way_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int *,int ,int ) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,unsigned int*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char*) ;
 int VAR_5 ;

__attribute__((used)) static bool_3way_t
FUNC_9 (iso9660_t *VAR_6, const iso9660_stat_t *VAR_7,
        char **VAR_8, uint64_t *VAR_9)
{
  unsigned VAR_10 = 0;
  uint8_t *VAR_11 = ((void*)0);
  int VAR_12;
  bool_3way_t VAR_13 = VAR_4;

  if (!VAR_8[0]) return 0;

  if (VAR_7->type == VAR_2) return VAR_4;
  if (*VAR_9 == 0) return VAR_3;

  FUNC_2 (VAR_7->type == VAR_1);

  VAR_11 = FUNC_1(1, VAR_7->secsize[0] * VAR_0);
  if (!VAR_11)
    {
    FUNC_3("Couldn't calloc(1, %d)", VAR_7->secsize[0] * VAR_0);
    return VAR_3;
    }

  VAR_12 = FUNC_7 (VAR_6, VAR_11, VAR_7->lsn[0], VAR_7->secsize[0]);
  if (VAR_12!=VAR_0*VAR_7->secsize[0]) {
    FUNC_4(VAR_11);
    return 0;
  }

  while (VAR_10 < (VAR_7->secsize[0] * VAR_0))
    {
      iso9660_dir_t *VAR_14 = (void *) &VAR_11[VAR_10];
      iso9660_stat_t *VAR_15;
      unsigned int VAR_16 = 1;

      if (FUNC_5(VAR_14, &VAR_10))
        continue;

      VAR_15 = FUNC_0 (VAR_14, ((void*)0), VAR_6->b_xa,
     VAR_6->u_joliet_level);
      VAR_13 = VAR_15->rr.b3_rock;
      if ( VAR_13 != VAR_5) {
        if (FUNC_8(VAR_8[0]) == 0)
          VAR_13 = 0;
        else
          VAR_13 = FUNC_9 (VAR_6, VAR_15, &VAR_8[VAR_16],
       VAR_9);
      }
      FUNC_4(VAR_15);
      if (VAR_13 != VAR_4) {
        FUNC_4 (VAR_11);
        return VAR_13;
      }

      VAR_10 += FUNC_6(VAR_14);
      *VAR_9 = (*VAR_9)-1;
      if ((*VAR_9) == 0) {
        FUNC_4 (VAR_11);
        return VAR_3;
      }
    }

  FUNC_2 (VAR_10 == (VAR_7->secsize[0] * VAR_0));


  FUNC_4 (VAR_11);
  return VAR_4;
}
