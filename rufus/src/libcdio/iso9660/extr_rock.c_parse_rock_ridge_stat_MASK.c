
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_rock_offset; scalar_t__ b3_rock; } ;
struct TYPE_6__ {TYPE_1__ rr; } ;
typedef TYPE_2__ iso9660_stat_t ;
typedef int iso9660_dir_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;

int
FUNC_1(iso9660_dir_t *VAR_1,
                iso9660_stat_t *VAR_2)
{
  int VAR_3;

  if (!VAR_2) return 0;

  VAR_3 = FUNC_0(VAR_1, VAR_2, 0);


  if (0xFF == VAR_2->rr.s_rock_offset && VAR_0 != VAR_2->rr.b3_rock) {
    VAR_3 = FUNC_0(VAR_1, VAR_2, 14);
  }
  return VAR_3;
}
