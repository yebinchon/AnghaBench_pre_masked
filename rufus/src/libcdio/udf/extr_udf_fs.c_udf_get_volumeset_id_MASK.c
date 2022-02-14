
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int pvd_lba; } ;
typedef TYPE_1__ udf_t ;
struct TYPE_6__ {int volset_id; } ;
typedef TYPE_2__ udf_pvd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int **,int ,int) ;

int
FUNC_2(udf_t *VAR_3, uint8_t *VAR_4,
       unsigned int VAR_5)
{
  uint8_t VAR_6[VAR_1];
  const udf_pvd_t *VAR_7 = (udf_pvd_t *) &VAR_6;


  if ( VAR_0 != FUNC_1(VAR_3, &VAR_6, VAR_3->pvd_lba, 1) )
    return 0;

  if (VAR_5 > VAR_2) {
    VAR_5 = VAR_2;
  }

  FUNC_0(VAR_4, VAR_7->volset_id, VAR_5);

  return VAR_2;
}
