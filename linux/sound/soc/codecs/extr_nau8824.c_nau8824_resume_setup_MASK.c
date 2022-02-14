
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8824 {int regmap; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nau8824*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct nau8824 *VAR_9)
{
 FUNC_0(VAR_9, VAR_0, 0);
 if (VAR_9->irq) {

  FUNC_1(VAR_9->regmap);



  FUNC_2(VAR_9->regmap, VAR_6,
   VAR_5, VAR_5);
  FUNC_2(VAR_9->regmap,
   VAR_8,
   VAR_2 | VAR_4,
   VAR_2 | VAR_4);
  FUNC_2(VAR_9->regmap,
   VAR_7,
   VAR_1 | VAR_3, 0);
 }
}
