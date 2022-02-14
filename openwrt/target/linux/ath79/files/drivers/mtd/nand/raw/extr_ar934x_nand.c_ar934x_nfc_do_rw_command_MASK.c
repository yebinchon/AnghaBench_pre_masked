
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int buf_size; int buf_dma; int ecc_ctrl_reg; int ecc_offset_reg; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ar934x_nfc*,int,int,int*,int*) ;
 int FUNC_2 (struct ar934x_nfc*) ;
 int FUNC_3 (struct ar934x_nfc*,int ) ;
 scalar_t__ FUNC_4 (struct ar934x_nfc*) ;
 int FUNC_5 (struct ar934x_nfc*) ;
 int FUNC_6 (struct ar934x_nfc*,int ,int) ;
 int FUNC_7 (struct ar934x_nfc*,int) ;
 int FUNC_8 (int ,char*,char*,int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct ar934x_nfc*,char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_11(struct ar934x_nfc *VAR_23, int VAR_24,
        int VAR_25, int VAR_26, u32 VAR_27,
        u32 VAR_28, bool VAR_29)
{
 u32 VAR_30, VAR_31;
 u32 VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35 = 0;

 FUNC_0(VAR_26 & 3);

 if (FUNC_0(VAR_26 > VAR_23->buf_size))
  FUNC_9(VAR_23->parent, "len=%d > buf_size=%d", VAR_26,
   VAR_23->buf_size);

 if (VAR_29) {
  VAR_32 = VAR_6;
  VAR_33 = VAR_22;
 } else {
  VAR_32 = VAR_5;
  VAR_33 = VAR_21;
 }

 FUNC_1(VAR_23, VAR_24, VAR_25, &VAR_30, &VAR_31);

 VAR_32 |= VAR_7 |
      (VAR_3 <<
       VAR_4);

 VAR_27 |= VAR_1 | VAR_0;
 VAR_28 |= VAR_2;

 FUNC_10(VAR_23, "%s a0:%08x a1:%08x len:%x cmd:%08x dma:%08x ctrl:%08x\n",
  (VAR_29) ? "write" : "read",
  VAR_30, VAR_31, VAR_26, VAR_27, VAR_32, VAR_28);

retry:
 FUNC_6(VAR_23, VAR_20, 0);
 FUNC_6(VAR_23, VAR_10, VAR_30);
 FUNC_6(VAR_23, VAR_11, VAR_31);
 FUNC_6(VAR_23, VAR_14, VAR_23->buf_dma);
 FUNC_6(VAR_23, VAR_15, VAR_26);
 FUNC_6(VAR_23, VAR_13, VAR_26);
 FUNC_6(VAR_23, VAR_12, VAR_28);
 FUNC_6(VAR_23, VAR_16, VAR_32);
 FUNC_6(VAR_23, VAR_17, VAR_23->ecc_ctrl_reg);
 FUNC_6(VAR_23, VAR_18, VAR_23->ecc_offset_reg);

 if (FUNC_4(VAR_23)) {
  FUNC_6(VAR_23, VAR_19,
         VAR_9);

  FUNC_3(VAR_23, VAR_19);
 }

 FUNC_7(VAR_23, VAR_27);
 VAR_34 = FUNC_5(VAR_23);
 if (VAR_34) {
  FUNC_8(VAR_23->parent, "%s operation stuck at page %d\n",
   (VAR_29) ? "write" : "read", VAR_25);

  FUNC_2(VAR_23);
  if (VAR_35++ < VAR_8)
   goto retry;

  FUNC_9(VAR_23->parent, "%s operation failed on page %d\n",
   (VAR_29) ? "write" : "read", VAR_25);
 }

 return VAR_34;
}
