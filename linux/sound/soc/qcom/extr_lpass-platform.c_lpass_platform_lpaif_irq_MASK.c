
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpass_variant {int dummy; } ;
struct lpass_data {scalar_t__* substream; int lpaif_map; struct lpass_variant* variant; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpass_variant*,int ) ;
 unsigned int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,struct lpass_data*,int,unsigned int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct lpass_data *VAR_6 = VAR_5;
 struct lpass_variant *VAR_7 = VAR_6->variant;
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_4(VAR_6->lpaif_map,
   FUNC_0(VAR_7, VAR_2), &VAR_8);
 if (VAR_9) {
  FUNC_3("error reading from irqstat reg: %d\n", VAR_9);
  return VAR_1;
 }


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_8 & FUNC_1(VAR_10) && VAR_6->substream[VAR_10]) {
   VAR_9 = FUNC_2(
      VAR_6->substream[VAR_10],
      VAR_6, VAR_10, VAR_8);
   if (VAR_9 != VAR_0)
    return VAR_9;
  }
 }

 return VAR_0;
}
