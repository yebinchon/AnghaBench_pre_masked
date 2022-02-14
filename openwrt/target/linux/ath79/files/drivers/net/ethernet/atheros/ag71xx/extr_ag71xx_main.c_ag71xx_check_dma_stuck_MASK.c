
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ag71xx {int dev; } ;
struct TYPE_2__ {unsigned long trans_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ag71xx*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct ag71xx *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_2(VAR_5->dev, 0)->trans_start;
 if (FUNC_1(FUNC_4(VAR_4, VAR_6 + VAR_3/10)))
  return 0;

 if (!FUNC_3(VAR_5->dev))
  return 0;

 VAR_7 = FUNC_0(VAR_5, VAR_1);
 if ((VAR_7 & 0x7) == 0x3 && ((VAR_7 >> 4) & 0x7) == 0x6)
  return 1;

 VAR_8 = FUNC_0(VAR_5, VAR_2);
 VAR_9 = FUNC_0(VAR_5, VAR_0);
 if (((VAR_8 >> 4) & 0x7) == 0 && ((VAR_7 & 0x7) == 0) &&
     ((VAR_7 >> 4) & 0x7) == 0 && VAR_9 == 0)
  return 1;

 return 0;
}
