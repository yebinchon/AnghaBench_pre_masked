
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int buf; int ctrl_reg; scalar_t__ small_page; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ar934x_nfc*,int,int,int,int,int ,int) ;
 int FUNC_1 (struct ar934x_nfc*,char*,int,int,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ar934x_nfc *VAR_6, unsigned VAR_7,
    int VAR_8, int VAR_9, int VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 FUNC_1(VAR_6, "read, column=%d page=%d len=%d\n",
  VAR_8, VAR_9, VAR_10);

 VAR_11 = (VAR_7 & VAR_0) << VAR_1;

 if (VAR_6->small_page) {
  VAR_11 |= VAR_3;
 } else {
  VAR_11 |= VAR_5 << VAR_2;
  VAR_11 |= VAR_4;
 }

 VAR_12 = FUNC_0(VAR_6, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_6->ctrl_reg, 0);

 FUNC_2("[data] ", VAR_6->buf, VAR_10);

 return VAR_12;
}
