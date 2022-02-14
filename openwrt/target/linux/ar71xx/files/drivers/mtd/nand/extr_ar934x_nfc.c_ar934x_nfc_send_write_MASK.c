
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ar934x_nfc {int ctrl_reg; int buf; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct ar934x_nfc*,int,int,int,unsigned int,int ,int) ;
 int FUNC_1 (struct ar934x_nfc*,char*,int,int,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ar934x_nfc *VAR_4, unsigned VAR_5, int VAR_6,
       int VAR_7, int VAR_8)
{
 u32 VAR_9;

 FUNC_1(VAR_4, "write, column=%d page=%d len=%d\n",
  VAR_6, VAR_7, VAR_8);

 FUNC_2("[data] ", VAR_4->buf, VAR_8);

 VAR_9 = VAR_3 << VAR_0;
 VAR_9 |= VAR_5 << VAR_1;
 VAR_9 |= VAR_2;

 return FUNC_0(VAR_4, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_4->ctrl_reg, 1);
}
