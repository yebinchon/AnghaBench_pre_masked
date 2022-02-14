
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int lvd_lba; } ;
typedef TYPE_1__ udf_t ;
struct TYPE_7__ {int * logvol_id; } ;
typedef TYPE_2__ logical_vol_desc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int ,int) ;
 char* FUNC_5 (int *,int ) ;

int
FUNC_6(udf_t *VAR_2, char *VAR_3, unsigned int VAR_4)
{
  uint8_t VAR_5[VAR_1];
  logical_vol_desc_t *VAR_6 = (logical_vol_desc_t *) &VAR_5;
  char* VAR_7;
  int VAR_8;


  if (VAR_3 != ((void*)0))
    VAR_3[0] = 0;

  if (VAR_0 != FUNC_4 (VAR_2, VAR_6, VAR_2->lvd_lba, 1) )
    return 0;

  VAR_7 = FUNC_5((uint8_t *) VAR_6->logvol_id, VAR_6->logvol_id[127]);
  if (VAR_7 == ((void*)0))
    return 0;

  VAR_8 = FUNC_2(VAR_7)+1;
  if (VAR_3 != ((void*)0)) {
    FUNC_3(VAR_3, VAR_7, FUNC_0(VAR_8, VAR_4));
    VAR_3[VAR_4-1] = 0;
  }
  FUNC_1(VAR_7);

  return VAR_8;
}
