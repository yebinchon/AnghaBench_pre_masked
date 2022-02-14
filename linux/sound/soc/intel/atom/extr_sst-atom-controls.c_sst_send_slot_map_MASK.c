
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; void* command_id; int dst; } ;
struct sst_param_sba_ssp_slot_map {int param_len; TYPE_1__ header; int tx_slot_map; int rx_slot_map; int ssp_index; void* param_id; } ;
struct sst_dsp_header {int dummy; } ;
struct sst_data {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct sst_data*,int ,int ,int ,int ,struct sst_param_sba_ssp_slot_map*,int) ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_3(struct sst_data *VAR_7)
{
 struct sst_param_sba_ssp_slot_map VAR_8;

 FUNC_0(VAR_8.header.dst);
 VAR_8.header.command_id = VAR_0;
 VAR_8.header.length = sizeof(struct sst_param_sba_ssp_slot_map)
    - sizeof(struct sst_dsp_header);

 VAR_8.param_id = VAR_0;
 VAR_8.param_len = sizeof(VAR_8.rx_slot_map) + sizeof(VAR_8.tx_slot_map)
     + sizeof(VAR_8.ssp_index);
 VAR_8.ssp_index = VAR_1;

 FUNC_1(VAR_8.rx_slot_map, &VAR_6[0], sizeof(VAR_8.rx_slot_map));
 FUNC_1(VAR_8.tx_slot_map, &VAR_5[0], sizeof(VAR_8.tx_slot_map));

 return FUNC_2(VAR_7, VAR_3,
   VAR_2, VAR_4, 0, &VAR_8,
         sizeof(VAR_8.header) + VAR_8.header.length);
}
