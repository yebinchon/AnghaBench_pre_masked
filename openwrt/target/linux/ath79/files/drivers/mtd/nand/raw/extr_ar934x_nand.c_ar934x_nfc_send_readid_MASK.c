
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ar934x_nfc {int buf; int ctrl_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ar934x_nfc*,int,int,int ,unsigned int,int ,int) ;
 int FUNC_1 (struct ar934x_nfc*,char*,unsigned int) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ar934x_nfc *VAR_4, unsigned VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 FUNC_1(VAR_4, "readid, cmd:%02x\n", VAR_5);

 VAR_6 = VAR_2;
 VAR_6 |= (VAR_5 & VAR_0) << VAR_1;

 VAR_7 = FUNC_0(VAR_4, -1, -1, VAR_3,
           VAR_6, VAR_4->ctrl_reg, 0);

 FUNC_2("[id] ", VAR_4->buf, VAR_3);

 return VAR_7;
}
