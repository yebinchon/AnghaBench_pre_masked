
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct i2s_stream_instance {int num_pages; scalar_t__ acp3x_base; int dma_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i2s_stream_instance *VAR_26, int VAR_27)
{
 u16 VAR_28;
 u32 VAR_29, VAR_30, VAR_31, VAR_32;
 dma_addr_t VAR_33 = VAR_26->dma_addr;


 if (VAR_27 == VAR_11)
  VAR_31 = 0;
 else
  VAR_31 = VAR_26->num_pages * 8;


 FUNC_2(VAR_0 | FUNC_0(31), VAR_26->acp3x_base +
    VAR_12);
 FUNC_2(VAR_9, VAR_26->acp3x_base +
    VAR_13);

 for (VAR_28 = 0; VAR_28 < VAR_26->num_pages; VAR_28++) {

  VAR_29 = FUNC_1(VAR_33);
  VAR_30 = FUNC_3(VAR_33);

  FUNC_2(VAR_29, VAR_26->acp3x_base + VAR_25 + VAR_31);
  VAR_30 |= FUNC_0(31);
  FUNC_2(VAR_30, VAR_26->acp3x_base + VAR_25 + VAR_31
    + 4);

  VAR_31 += 8;
  VAR_33 += VAR_8;
 }

 if (VAR_27 == VAR_11) {

  FUNC_2(VAR_7, VAR_26->acp3x_base +
     VAR_22);
  FUNC_2(VAR_6, VAR_26->acp3x_base +
     VAR_23);
  FUNC_2(VAR_4, VAR_26->acp3x_base + VAR_19);


  VAR_32 = VAR_0 + (VAR_26->num_pages * 8)
    + VAR_10;
  FUNC_2(VAR_32, VAR_26->acp3x_base +
     VAR_20);
  FUNC_2(VAR_5, VAR_26->acp3x_base + VAR_21);
 } else {

  FUNC_2(VAR_7 + VAR_6, VAR_26->acp3x_base +
     VAR_17);
  FUNC_2(VAR_6, VAR_26->acp3x_base +
     VAR_18);
  FUNC_2(VAR_4, VAR_26->acp3x_base + VAR_14);


  VAR_32 = VAR_0 +
    (VAR_26->num_pages * 8) + VAR_3;
  FUNC_2(VAR_32, VAR_26->acp3x_base +
     VAR_15);
  FUNC_2(VAR_5, VAR_26->acp3x_base + VAR_16);
 }


 FUNC_2(FUNC_0(VAR_2) | FUNC_0(VAR_1),
    VAR_26->acp3x_base + VAR_24);
}
