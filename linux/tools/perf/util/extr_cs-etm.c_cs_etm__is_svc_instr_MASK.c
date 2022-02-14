
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet {int isa; } ;
typedef int instr32 ;
typedef int instr16 ;






 int FUNC_0 (struct cs_etm_queue*,int ,int ,int,int *) ;

__attribute__((used)) static bool FUNC_1(struct cs_etm_queue *VAR_0, u8 VAR_1,
     struct cs_etm_packet *VAR_2,
     u64 VAR_3)
{

 u16 VAR_4 = 0;
 u32 VAR_5 = 0;
 u64 VAR_6;

 switch (VAR_2->isa) {
 case 129:
  VAR_6 = VAR_3 - 2;
  FUNC_0(VAR_0, VAR_1, VAR_6,
       sizeof(VAR_4), (u8 *)&VAR_4);
  if ((VAR_4 & 0xFF00) == 0xDF00)
   return 1;

  break;
 case 131:
  VAR_6 = VAR_3 - 4;
  FUNC_0(VAR_0, VAR_1, VAR_6,
       sizeof(VAR_5), (u8 *)&VAR_5);
  if ((VAR_5 & 0x0F000000) == 0x0F000000 &&
      (VAR_5 & 0xF0000000) != 0xF0000000)
   return 1;

  break;
 case 130:
  VAR_6 = VAR_3 - 4;
  FUNC_0(VAR_0, VAR_1, VAR_6,
       sizeof(VAR_5), (u8 *)&VAR_5);
  if ((VAR_5 & 0xFFE0001F) == 0xd4000001)
   return 1;

  break;
 case 128:
 default:
  break;
 }

 return 0;
}
