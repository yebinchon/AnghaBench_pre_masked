
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel8x0 {scalar_t__ device_type; unsigned int bdbars_count; TYPE_2__* ichd; TYPE_1__* card; } ;
struct TYPE_4__ {int bdbar_addr; scalar_t__ reg_offset; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct intel8x0*,int ) ;
 int FUNC_2 (struct intel8x0*,scalar_t__) ;
 int FUNC_3 (struct intel8x0*,scalar_t__,int) ;
 int FUNC_4 (struct intel8x0*,scalar_t__,int ) ;
 int FUNC_5 (struct intel8x0*,int) ;
 int FUNC_6 (struct intel8x0*,int) ;

__attribute__((used)) static int FUNC_7(struct intel8x0 *VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 if (VAR_4->device_type != VAR_0) {
  if ((VAR_8 = FUNC_6(VAR_4, VAR_5)) < 0)
   return VAR_8;
  FUNC_1(VAR_4, 0);
 } else {
  if ((VAR_8 = FUNC_5(VAR_4, VAR_5)) < 0)
   return VAR_8;
 }


 for (VAR_6 = 0; VAR_6 < VAR_4->bdbars_count; VAR_6++)
  FUNC_3(VAR_4, VAR_2 + VAR_4->ichd[VAR_6].reg_offset, 0x00);

 for (VAR_6 = 0; VAR_6 < VAR_4->bdbars_count; VAR_6++)
  FUNC_3(VAR_4, VAR_2 + VAR_4->ichd[VAR_6].reg_offset, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_4->bdbars_count; VAR_6++) {
         VAR_7 = 100000;
         while (--VAR_7 != 0) {
          if ((FUNC_2(VAR_4, VAR_2 + VAR_4->ichd[VAR_6].reg_offset) & VAR_3) == 0)
                  break;
                }
                if (VAR_7 == 0)
   FUNC_0(VAR_4->card->dev, "reset of registers failed?\n");
        }

 for (VAR_6 = 0; VAR_6 < VAR_4->bdbars_count; VAR_6++)
  FUNC_4(VAR_4, VAR_1 + VAR_4->ichd[VAR_6].reg_offset,
     VAR_4->ichd[VAR_6].bdbar_addr);
 return 0;
}
