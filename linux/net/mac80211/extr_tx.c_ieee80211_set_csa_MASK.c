
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct probe_resp {size_t* csa_counter_offsets; int * data; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_4__ {int probe_resp; } ;
struct TYPE_5__ {TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; TYPE_2__ u; } ;
struct beacon_data {size_t tail_len; size_t head_len; size_t* csa_counter_offsets; int * head; int * tail; int csa_current_counter; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int) ;
 struct probe_resp* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_1,
         struct beacon_data *VAR_2)
{
 struct probe_resp *VAR_3;
 u8 *VAR_4;
 size_t VAR_5;
 int VAR_6;
 u8 VAR_7 = VAR_2->csa_current_counter;

 switch (VAR_1->vif.type) {
 case 129:
  VAR_4 = VAR_2->tail;
  VAR_5 = VAR_2->tail_len;
  break;
 case 130:
  VAR_4 = VAR_2->head;
  VAR_5 = VAR_2->head_len;
  break;
 case 128:
  VAR_4 = VAR_2->head;
  VAR_5 = VAR_2->head_len;
  break;
 default:
  return;
 }

 FUNC_2();
 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  VAR_3 = FUNC_1(VAR_1->u.ap.probe_resp);

  if (VAR_2->csa_counter_offsets[VAR_6]) {
   if (FUNC_0(VAR_2->csa_counter_offsets[VAR_6] >=
      VAR_5)) {
    FUNC_3();
    return;
   }

   VAR_4[VAR_2->csa_counter_offsets[VAR_6]] = VAR_7;
  }

  if (VAR_1->vif.type == 129 && VAR_3)
   VAR_3->data[VAR_3->csa_counter_offsets[VAR_6]] = VAR_7;
 }
 FUNC_3();
}
