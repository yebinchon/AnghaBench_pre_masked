
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switch_dev {int dummy; } ;
struct mvsw61xx_state {TYPE_1__* ports; } ;
struct TYPE_2__ {scalar_t__ pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct mvsw61xx_state *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_5->ports[VAR_3].pvid = (u16)VAR_4;

 return 0;
}
