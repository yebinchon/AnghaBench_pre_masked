
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cgw_csum_crc8 {size_t init_crc_val; int from_idx; int to_idx; size_t* crctab; int profile; size_t* profile_data; size_t result_idx; size_t final_xor_val; } ;
struct canfd_frame {size_t* data; int can_id; } ;






__attribute__((used)) static void FUNC_0(struct canfd_frame *VAR_0,
         struct cgw_csum_crc8 *VAR_1)
{
 u8 VAR_2 = VAR_1->init_crc_val;
 int VAR_3;

 for (VAR_3 = VAR_1->from_idx; VAR_3 >= VAR_1->to_idx; VAR_3--)
  VAR_2 = VAR_1->crctab[VAR_2 ^ VAR_0->data[VAR_3]];

 switch (VAR_1->profile) {
 case 129:
  VAR_2 = VAR_1->crctab[VAR_2 ^ VAR_1->profile_data[0]];
  break;

 case 130:
  VAR_2 = VAR_1->crctab[VAR_2 ^ VAR_1->profile_data[VAR_0->data[1] & 0xF]];
  break;

 case 128:
  VAR_2 = VAR_1->crctab[VAR_2 ^ (VAR_0->can_id & 0xFF) ^
       (VAR_0->can_id >> 8 & 0xFF)];
  break;
 }

 VAR_0->data[VAR_1->result_idx] = VAR_2 ^ VAR_1->final_xor_val;
}
