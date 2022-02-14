
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int num_bytes; int * dbuffer; } ;
struct TYPE_4__ {int num_bytes; } ;
struct TYPE_6__ {TYPE_2__ read_data; TYPE_1__ get_data; } ;
struct msm_eeprom_cfg_data {TYPE_3__ cfg; int cfgtype; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct msm_eeprom_cfg_data*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static uint8_t* FUNC_4(int VAR_3, size_t *VAR_4) {
  int VAR_5;

  struct msm_eeprom_cfg_data VAR_6 = {0};
  VAR_6.cfgtype = VAR_0;
  VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_6);
  FUNC_0(VAR_5 >= 0);

  uint32_t VAR_7 = VAR_6.cfg.get_data.num_bytes;
  FUNC_0(VAR_7 > 100);

  uint8_t* VAR_8 = FUNC_2(VAR_7);
  FUNC_0(*VAR_8);
  FUNC_3(VAR_8, 0, VAR_7);

  VAR_6.cfgtype = VAR_1;
  VAR_6.cfg.read_data.num_bytes = VAR_7;
  VAR_6.cfg.read_data.dbuffer = VAR_8;
  VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_6);
  FUNC_0(VAR_5 >= 0);

  *VAR_4 = VAR_7;
  return VAR_8;
}
