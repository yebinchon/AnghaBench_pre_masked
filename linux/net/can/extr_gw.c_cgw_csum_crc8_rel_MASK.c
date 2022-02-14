
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cgw_csum_crc8 {int from_idx; int to_idx; int result_idx; size_t init_crc_val; size_t* crctab; int profile; size_t* profile_data; size_t final_xor_val; } ;
struct canfd_frame {size_t* data; int can_id; int len; } ;





 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct canfd_frame *VAR_0,
         struct cgw_csum_crc8 *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->from_idx, VAR_0->len);
 int VAR_3 = FUNC_0(VAR_1->to_idx, VAR_0->len);
 int VAR_4 = FUNC_0(VAR_1->result_idx, VAR_0->len);
 u8 VAR_5 = VAR_1->init_crc_val;
 int VAR_6;

 if (VAR_2 < 0 || VAR_3 < 0 || VAR_4 < 0)
  return;

 if (VAR_2 <= VAR_3) {
  for (VAR_6 = VAR_1->from_idx; VAR_6 <= VAR_1->to_idx; VAR_6++)
   VAR_5 = VAR_1->crctab[VAR_5 ^ VAR_0->data[VAR_6]];
 } else {
  for (VAR_6 = VAR_1->from_idx; VAR_6 >= VAR_1->to_idx; VAR_6--)
   VAR_5 = VAR_1->crctab[VAR_5 ^ VAR_0->data[VAR_6]];
 }

 switch (VAR_1->profile) {
 case 129:
  VAR_5 = VAR_1->crctab[VAR_5 ^ VAR_1->profile_data[0]];
  break;

 case 130:
  VAR_5 = VAR_1->crctab[VAR_5 ^ VAR_1->profile_data[VAR_0->data[1] & 0xF]];
  break;

 case 128:
  VAR_5 = VAR_1->crctab[VAR_5 ^ (VAR_0->can_id & 0xFF) ^
       (VAR_0->can_id >> 8 & 0xFF)];
  break;
 }

 VAR_0->data[VAR_1->result_idx] = VAR_5 ^ VAR_1->final_xor_val;
}
