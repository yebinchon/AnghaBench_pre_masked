
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8825 {int sar_voltage; int sar_compare_time; int sar_sampling_time; int sar_threshold_num; int sar_hysteresis; int key_debounce; int* sar_threshold; struct regmap* regmap; } ;


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
 int FUNC_0 (struct regmap*,int ,int,int) ;
 int FUNC_1 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct nau8825 *VAR_21)
{
 struct regmap *VAR_22 = VAR_21->regmap;

 FUNC_0(VAR_22, VAR_10,
  VAR_19,
  VAR_21->sar_voltage << VAR_20);
 FUNC_0(VAR_22, VAR_10,
  VAR_15,
  VAR_21->sar_compare_time << VAR_16);
 FUNC_0(VAR_22, VAR_10,
  VAR_17,
  VAR_21->sar_sampling_time << VAR_18);

 FUNC_0(VAR_22, VAR_9,
  VAR_4,
  (VAR_21->sar_threshold_num - 1) << VAR_5);
 FUNC_0(VAR_22, VAR_9,
  VAR_2,
  VAR_21->sar_hysteresis << VAR_3);
 FUNC_0(VAR_22, VAR_9,
  VAR_6,
  VAR_21->key_debounce << VAR_7);

 FUNC_1(VAR_22, VAR_11,
  (VAR_21->sar_threshold[0] << 8) | VAR_21->sar_threshold[1]);
 FUNC_1(VAR_22, VAR_12,
  (VAR_21->sar_threshold[2] << 8) | VAR_21->sar_threshold[3]);
 FUNC_1(VAR_22, VAR_13,
  (VAR_21->sar_threshold[4] << 8) | VAR_21->sar_threshold[5]);
 FUNC_1(VAR_22, VAR_14,
  (VAR_21->sar_threshold[6] << 8) | VAR_21->sar_threshold[7]);


 FUNC_0(VAR_22, VAR_8,
  VAR_1 | VAR_0,
  0);
}
