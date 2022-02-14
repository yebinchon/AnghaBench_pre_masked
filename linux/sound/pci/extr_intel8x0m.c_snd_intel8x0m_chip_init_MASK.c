
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0m {unsigned int bdbars_count; TYPE_1__* ichd; } ;
struct TYPE_2__ {int bdbar_addr; scalar_t__ reg_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel8x0m*,int ) ;
 int FUNC_1 (struct intel8x0m*,scalar_t__,int) ;
 int FUNC_2 (struct intel8x0m*,scalar_t__,int ) ;
 int FUNC_3 (struct intel8x0m*,int) ;

__attribute__((used)) static int FUNC_4(struct intel8x0m *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_3(VAR_3, VAR_4)) < 0)
  return VAR_6;
 FUNC_0(VAR_3, 0);


 for (VAR_5 = 0; VAR_5 < VAR_3->bdbars_count; VAR_5++)
  FUNC_1(VAR_3, VAR_1 + VAR_3->ichd[VAR_5].reg_offset, 0x00);

 for (VAR_5 = 0; VAR_5 < VAR_3->bdbars_count; VAR_5++)
  FUNC_1(VAR_3, VAR_1 + VAR_3->ichd[VAR_5].reg_offset, VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_3->bdbars_count; VAR_5++)
  FUNC_2(VAR_3, VAR_0 + VAR_3->ichd[VAR_5].reg_offset, VAR_3->ichd[VAR_5].bdbar_addr);
 return 0;
}
