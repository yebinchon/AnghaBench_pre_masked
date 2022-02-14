
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mchp_i2s_mcc_dev {int tx_rdy; int rx_rdy; int regmap; int wq_rxrdy; int channels; int wq_txrdy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct mchp_i2s_mcc_dev *VAR_9 = VAR_8;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 irqreturn_t VAR_17 = VAR_1;

 FUNC_2(VAR_9->regmap, VAR_3, &VAR_11);
 FUNC_2(VAR_9->regmap, VAR_5, &VAR_10);
 VAR_14 = VAR_11 & VAR_10;

 FUNC_2(VAR_9->regmap, VAR_4, &VAR_13);
 FUNC_2(VAR_9->regmap, VAR_6, &VAR_12);
 VAR_15 = VAR_13 & VAR_12;

 if (!VAR_14 && !VAR_15)
  return VAR_1;





 VAR_16 |= VAR_14 & (FUNC_1(VAR_9->channels) |
       FUNC_0(VAR_9->channels));
 if (VAR_16)
  VAR_17 = VAR_0;

 if ((VAR_11 & FUNC_1(VAR_9->channels)) &&
     (VAR_11 & FUNC_1(VAR_9->channels)) ==
     (VAR_16 & FUNC_1(VAR_9->channels))) {
  VAR_9->tx_rdy = 1;
  FUNC_4(&VAR_9->wq_txrdy);
 }
 if ((VAR_11 & FUNC_0(VAR_9->channels)) &&
     (VAR_11 & FUNC_0(VAR_9->channels)) ==
     (VAR_16 & FUNC_0(VAR_9->channels))) {
  VAR_9->rx_rdy = 1;
  FUNC_4(&VAR_9->wq_rxrdy);
 }
 FUNC_3(VAR_9->regmap, VAR_2, VAR_16);

 return VAR_17;
}
