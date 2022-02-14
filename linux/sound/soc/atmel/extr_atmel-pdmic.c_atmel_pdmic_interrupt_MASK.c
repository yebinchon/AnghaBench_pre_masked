
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_pdmic {int substream; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct atmel_pdmic *VAR_10 = (struct atmel_pdmic *)VAR_9;
 u32 VAR_11;
 irqreturn_t VAR_12 = VAR_1;

 FUNC_0(VAR_10->regmap, VAR_6, &VAR_11);

 if (VAR_11 & VAR_7) {
  FUNC_1(VAR_10->regmap, VAR_2, VAR_4,
       VAR_3 << VAR_5);

  FUNC_2(VAR_10->substream);

  VAR_12 = VAR_0;
 }

 return VAR_12;
}
