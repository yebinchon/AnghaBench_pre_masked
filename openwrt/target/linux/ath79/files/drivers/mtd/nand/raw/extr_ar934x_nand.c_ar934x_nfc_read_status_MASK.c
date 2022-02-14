
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int* buf; scalar_t__ swap_dma; int ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ar934x_nfc*,int ) ;
 int FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct ar934x_nfc*,int ,int ) ;
 int FUNC_3 (struct ar934x_nfc*,int) ;
 int FUNC_4 (struct ar934x_nfc*,char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ar934x_nfc *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_5 << VAR_0;
 VAR_7 |= VAR_1;

 FUNC_2(VAR_6, VAR_3, 0);
 FUNC_2(VAR_6, VAR_2, VAR_6->ctrl_reg);

 FUNC_3(VAR_6, VAR_7);
 FUNC_1(VAR_6);

 VAR_8 = FUNC_0(VAR_6, VAR_4);

 FUNC_4(VAR_6, "read status, cmd:%08x status:%02x\n",
  VAR_7, (VAR_8 & 0xff));

 if (VAR_6->swap_dma)
  VAR_6->buf[0 ^ 3] = VAR_8;
 else
  VAR_6->buf[0] = VAR_8;
}
