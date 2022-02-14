
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct scarlett2_usb_packet {scalar_t__ pad; scalar_t__ error; void* seq; void* size; int cmd; } ;
struct scarlett2_mixer_data {int scarlett2_seq; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct scarlett2_mixer_data *VAR_0,
       struct scarlett2_usb_packet *VAR_1,
       u32 VAR_2, u16 VAR_3)
{

 u16 VAR_4 = VAR_0->scarlett2_seq++;

 VAR_1->cmd = FUNC_1(VAR_2);
 VAR_1->size = FUNC_0(VAR_3);
 VAR_1->seq = FUNC_0(VAR_4);
 VAR_1->error = 0;
 VAR_1->pad = 0;
}
