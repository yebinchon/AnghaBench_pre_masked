
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int ctrl_reg; int addr_count0; scalar_t__ small_page; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ar934x_nfc*,int,int,int*,int*) ;
 int FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct ar934x_nfc*,int ,int) ;
 int FUNC_3 (struct ar934x_nfc*,int) ;
 int FUNC_4 (struct ar934x_nfc*,char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct ar934x_nfc *VAR_13, unsigned VAR_14,
      int VAR_15, int VAR_16)
{
 u32 VAR_17, VAR_18;
 u32 VAR_19;
 u32 VAR_20;

 FUNC_0(VAR_13, VAR_15, VAR_16, &VAR_17, &VAR_18);

 VAR_19 = VAR_13->ctrl_reg;
 if (VAR_13->small_page) {

  VAR_19 &= ~(VAR_3 <<
         VAR_4);
  VAR_19 &= ~(VAR_5 <<
         VAR_6);
  VAR_19 &= ~(VAR_7);
  VAR_19 |= (VAR_13->addr_count0 + 1) <<
       VAR_4;
 }

 VAR_20 = VAR_12 << VAR_0;
 VAR_20 |= VAR_14 << VAR_1;
 VAR_20 |= VAR_2;

 FUNC_4(VAR_13, "erase page %d, a0:%08x a1:%08x cmd:%08x ctrl:%08x\n",
  VAR_16, VAR_17, VAR_18, VAR_20, VAR_19);

 FUNC_2(VAR_13, VAR_11, 0);
 FUNC_2(VAR_13, VAR_10, VAR_19);
 FUNC_2(VAR_13, VAR_8, VAR_17);
 FUNC_2(VAR_13, VAR_9, VAR_18);

 FUNC_3(VAR_13, VAR_20);
 FUNC_1(VAR_13);
}
