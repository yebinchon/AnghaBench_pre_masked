
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hpi_adapter_obj {int dummy; } ;


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
 int FUNC_0 (int ,char*,int,int) ;
 long VAR_17 ;
 long VAR_18 ;
 long VAR_19 ;
 long VAR_20 ;
 long VAR_21 ;
 long VAR_22 ;
 long VAR_23 ;
 int FUNC_1 (struct hpi_adapter_obj*,int,int) ;
 int FUNC_2 (struct hpi_adapter_obj*,int,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(struct hpi_adapter_obj *VAR_24, int VAR_25)
{
 if (VAR_25 == 0) {
  u32 VAR_26;
  FUNC_2(VAR_24, VAR_25, 0x01800000, 0x3779);
  VAR_26 = 0x00000030;
  FUNC_2(VAR_24, VAR_25, 0x01800008, VAR_26);
  if (VAR_26 != FUNC_1(VAR_24, VAR_25,
    0x01800008))
   return VAR_9;





  VAR_26 =
   (1L << 28) | (63L << 22) | (1L << 20) |
   (1L << 16) | (63L << 8) | (1L << 0) |
   (2L << 4);
  FUNC_2(VAR_24, VAR_25, 0x01800004, VAR_26);
  if (VAR_26 != FUNC_1(VAR_24, VAR_25,
    0x01800004))
   return VAR_10;




  VAR_26 =
   (1L << 28) | (28L << 22) | (1L << 20) |
   (1L << 16) | (63L << 8) | (1L << 0) |
   (2L << 4);
  FUNC_2(VAR_24, VAR_25, 0x01800010, VAR_26);
  if (VAR_26 != FUNC_1(VAR_24, VAR_25,
    0x01800010))
   return VAR_11;



  VAR_26 =
   (1L << 28) | (10L << 22) | (1L << 20) |
   (1L << 16) | (10L << 8) | (1L << 0) |
   (2L << 4);
  FUNC_2(VAR_24, VAR_25, 0x01800014, VAR_26);
  if (VAR_26 != FUNC_1(VAR_24, VAR_25,
    0x01800014))
   return VAR_12;



  FUNC_2(VAR_24, VAR_25, 0x01800018,
   0x07117000);



  FUNC_2(VAR_24, VAR_25, 0x0180001C,
   0x00000410);

 } else if (VAR_25 == 1) {

  u32 VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;


  VAR_27 = 1;
  FUNC_2(VAR_24, 0, VAR_16, VAR_27);
  FUNC_2(VAR_24, 0, VAR_15, VAR_27);

  VAR_28 =
   0xFFF7 & FUNC_1(VAR_24, 0, VAR_16);
  if (VAR_27 != VAR_28) {
   FUNC_0(VAR_5, "HPICL %x %x\n", VAR_27,
    VAR_28);
   return VAR_7;
  }

  VAR_27 = 1;
  for (VAR_29 = 0; VAR_29 < 32; VAR_29++) {
   FUNC_2(VAR_24, 0, VAR_14,
    VAR_27);
   FUNC_2(VAR_24, 0, VAR_13,
    (VAR_27 >> 16));
   VAR_28 =
    0xFFFF & FUNC_1(VAR_24, 0,
    VAR_14);
   VAR_28 =
    VAR_28 | ((0xFFFF &
     FUNC_1(VAR_24, 0,
      VAR_13))
    << 16);
   if (VAR_28 != VAR_27) {
    FUNC_0(VAR_5, "HPIA %x %x\n",
     VAR_27, VAR_28);
    return VAR_6;
   }
   VAR_27 = VAR_27 << 1;
  }
  FUNC_2(VAR_24, VAR_25, 0x01B7C100, 0x0000);
  FUNC_3(1000);

  FUNC_2(VAR_24, VAR_25, 0x01B7C120, 0x8002);

  FUNC_2(VAR_24, VAR_25, 0x01B7C11C, 0x8001);

  FUNC_2(VAR_24, VAR_25, 0x01B7C118, 0x8000);
  FUNC_3(1000);



  FUNC_2(VAR_24, 0, (0x018C0024L), 0x00002A0A);

  FUNC_2(VAR_24, VAR_25, 0x01B7C100, 0x0001);
  FUNC_3(1000);

  FUNC_2(VAR_24, 0, (0x018C0024L), 0x00002A02);



  FUNC_2(VAR_24, 0, 0x01800004,
   (1L << 28) | (8L << 22) | (1L << 20) |
   (1L << 16) | (12L << 8) | (1L << 0) |
   (2L << 4));

  FUNC_3(1000);



  if ((FUNC_1(VAR_24, VAR_25, 0x01B7C100) & 0xF)
   != 0x0001) {
   return VAR_8;
  }


  FUNC_2(VAR_24, VAR_25, VAR_1,
   0x000034A8);
  FUNC_2(VAR_24, VAR_25, VAR_0,
   0x00000030);
  FUNC_2(VAR_24, VAR_25, VAR_3,
   0x001BDF29);
  FUNC_2(VAR_24, VAR_25, VAR_2,
   0x47116000);




  FUNC_2(VAR_24, VAR_25,
   VAR_4, 0x00000410);

  FUNC_3(1000);
 } else if (VAR_25 == 2) {

 }

 return 0;
}
