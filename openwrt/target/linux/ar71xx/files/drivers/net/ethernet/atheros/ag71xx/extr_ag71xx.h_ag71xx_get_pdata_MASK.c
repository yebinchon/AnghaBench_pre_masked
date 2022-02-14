
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ag71xx_platform_data {int dummy; } ;
struct ag71xx {TYPE_2__* pdev; } ;
struct TYPE_3__ {struct ag71xx_platform_data* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;



__attribute__((used)) static inline struct ag71xx_platform_data *FUNC_0(struct ag71xx *VAR_0)
{
 return VAR_0->pdev->dev.platform_data;
}
