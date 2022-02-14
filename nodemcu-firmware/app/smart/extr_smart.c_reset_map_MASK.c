
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cur_base_seq; void** flag; int addr; scalar_t__ pwd_len; scalar_t__ ssid_len; scalar_t__ base_seq_valid; int base_len; int addr_len; scalar_t__ flag_match_num; } ;
typedef TYPE_1__ smart_addr_map ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(smart_addr_map **VAR_6, size_t VAR_7){
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
  {
    VAR_6[VAR_8]->flag_match_num = 0;
    VAR_6[VAR_8]->addr_len = VAR_0;
    VAR_6[VAR_8]->base_len = VAR_1;
    VAR_6[VAR_8]->cur_base_seq = -1;
    VAR_6[VAR_8]->base_seq_valid = 0;
    VAR_6[VAR_8]->ssid_len = 0;
    VAR_6[VAR_8]->pwd_len = 0;
    FUNC_0(VAR_6[VAR_8]->addr, 0, VAR_0);
    if(VAR_3==0){
      VAR_6[VAR_8]->flag[0] = VAR_2;
      VAR_6[VAR_8]->flag[1] = VAR_4;
      VAR_6[VAR_8]->flag[2] = VAR_5;
    }
    if(VAR_3==2){
      VAR_6[VAR_8]->flag[0] = VAR_5;
      VAR_6[VAR_8]->flag[1] = 0;
      VAR_6[VAR_8]->flag[2] = VAR_2;
      VAR_6[VAR_8]->flag[3] = VAR_4;
    }
  }
}
