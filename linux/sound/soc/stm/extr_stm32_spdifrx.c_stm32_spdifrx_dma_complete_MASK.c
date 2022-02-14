
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef short u16 ;
struct stm32_spdifrx_data {unsigned char* cs; int cs_completion; TYPE_1__* dmab; int regmap; scalar_t__ ub; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ area; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_5(void *VAR_4)
{
 struct stm32_spdifrx_data *VAR_5 = (struct stm32_spdifrx_data *)VAR_4;
 struct platform_device *VAR_6 = VAR_5->pdev;
 u32 *VAR_7 = (u32 *)VAR_5->dmab->area;
 u32 *VAR_8 = VAR_7 + (2 * VAR_2) - 1;
 u32 *VAR_9 = VAR_7;
 u16 *VAR_10 = (short *)VAR_5->ub;
 int VAR_11 = 0;

 FUNC_4(VAR_5->regmap, VAR_3,
      VAR_0,
      (unsigned int)~VAR_0);

 if (!VAR_5->dmab->area)
  return;

 while (VAR_9 <= VAR_8) {
  if (*VAR_9 & VAR_1)
   break;
  VAR_9++;
 }

 if (VAR_9 > VAR_8) {
  FUNC_3(&VAR_6->dev, "Start of S/PDIF block not found\n");
  return;
 }

 while (VAR_11 < VAR_2) {
  VAR_5->cs[VAR_11] = (unsigned char)FUNC_0(*VAR_9);
  *VAR_10++ = FUNC_1(*VAR_9++);
  if (VAR_9 > VAR_8) {
   FUNC_3(&VAR_6->dev, "Failed to get channel status\n");
   return;
  }
  VAR_11++;
 }

 FUNC_2(&VAR_5->cs_completion);
}
