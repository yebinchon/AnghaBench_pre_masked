
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct lx6464es {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct lx6464es*,int*) ;

__attribute__((used)) static int FUNC_2(struct lx6464es *VAR_3, u32 VAR_4,
         int *VAR_5,
         u64 *VAR_6,
         u64 *VAR_7)
{
 int VAR_8;
 u32 VAR_9[9];
 int VAR_10 = (VAR_4 & VAR_1) ? 1 : 0;
 int VAR_11 = (VAR_4 & VAR_0) ? 1 : 0;

 *VAR_5 = (VAR_4 & VAR_2) ? 1 : 0;

 VAR_8 = FUNC_1(VAR_3, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_11) {
  *VAR_6 = ((u64)VAR_9[3] << 32)
   + VAR_9[4];
  FUNC_0(VAR_3->card->dev, "interrupt: EOBI pending %llx\n",
       *VAR_6);
 }
 if (VAR_10) {
  *VAR_7 = ((u64)VAR_9[1] << 32)
   + VAR_9[2];
  FUNC_0(VAR_3->card->dev, "interrupt: EOBO pending %llx\n",
       *VAR_7);
 }



 return VAR_8;
}
