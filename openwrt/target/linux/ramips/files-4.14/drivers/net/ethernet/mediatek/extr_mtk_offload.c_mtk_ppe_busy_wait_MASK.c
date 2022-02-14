
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int rst_ppe; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct mtk_eth*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct mtk_eth *VAR_5)
{
 unsigned long VAR_6 = VAR_4;
 u32 VAR_7 = 0;

 while (1) {
  VAR_7 = FUNC_1(VAR_5, VAR_3);
  if (!(VAR_7 & VAR_2))
   return 0;
  if (FUNC_3(VAR_4, VAR_6 + VAR_1))
   break;
  FUNC_4(10, 20);
 }

 FUNC_0(VAR_5->dev, "ppe: table busy timeout - resetting\n");
 FUNC_2(VAR_5->rst_ppe);

 return -VAR_0;
}
