
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct nau8824 {TYPE_1__* dapm; struct regmap* regmap; } ;
struct TYPE_2__ {scalar_t__ bias_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct nau8824*,int ,int ) ;
 int FUNC_1 (struct regmap*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct nau8824 *VAR_9)
{
 struct regmap *VAR_10 = VAR_9->regmap;


 FUNC_1(VAR_10, VAR_7,
  VAR_3 | VAR_2,
  VAR_2);
 FUNC_1(VAR_10, VAR_6,
  VAR_1, 0);

 if (VAR_9->dapm->bias_level < VAR_8)
  FUNC_0(VAR_9, VAR_0, 0);
 FUNC_1(VAR_10, VAR_5,
  VAR_4, 0);
}
