
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct fsl_esai {scalar_t__* channels; int regmap; int rx_mask; int tx_mask; int slots; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static void FUNC_11(struct fsl_esai *VAR_9, bool VAR_10)
{
 u8 VAR_11, VAR_12 = VAR_9->channels[VAR_10];
 u32 VAR_13 = FUNC_0(VAR_12, VAR_9->slots);
 u32 VAR_14;

 FUNC_9(VAR_9->regmap, FUNC_6(VAR_10),
      VAR_5, VAR_4);


 for (VAR_11 = 0; VAR_10 && VAR_11 < VAR_12; VAR_11++)
  FUNC_10(VAR_9->regmap, VAR_8, 0x0);
 FUNC_9(VAR_9->regmap, FUNC_5(VAR_10),
      VAR_10 ? VAR_1 : VAR_0,
      VAR_10 ? FUNC_2(VAR_13) : FUNC_1(VAR_13));
 VAR_14 = VAR_10 ? VAR_9->tx_mask : VAR_9->rx_mask;

 FUNC_9(VAR_9->regmap, FUNC_8(VAR_10),
      VAR_7, FUNC_4(VAR_14));
 FUNC_9(VAR_9->regmap, FUNC_7(VAR_10),
      VAR_6, FUNC_3(VAR_14));


 FUNC_9(VAR_9->regmap, FUNC_5(VAR_10),
      VAR_3, VAR_2);
}
