
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spdifrx_data {int lock; int regmap; scalar_t__ refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct stm32_spdifrx_data *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;

 FUNC_3(&VAR_10->lock);

 if (--VAR_10->refcount) {
  FUNC_4(&VAR_10->lock);
  return;
 }

 VAR_11 = FUNC_0(VAR_2);
 VAR_12 = VAR_1 | VAR_0;

 FUNC_2(VAR_10->regmap, VAR_5, VAR_12, VAR_11);

 FUNC_2(VAR_10->regmap, VAR_9,
      VAR_4, 0);

 FUNC_2(VAR_10->regmap, VAR_8,
      VAR_3, VAR_3);


 FUNC_1(VAR_10->regmap, VAR_7, &VAR_13);
 FUNC_1(VAR_10->regmap, VAR_6, &VAR_13);

 FUNC_4(&VAR_10->lock);
}
