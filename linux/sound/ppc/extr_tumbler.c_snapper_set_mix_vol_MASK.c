
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; } ;
struct pmac_tumbler {TYPE_1__ i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pmac_tumbler*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pmac_tumbler *VAR_4, int VAR_5)
{
 if (! VAR_4->i2c.client)
  return -VAR_1;
 if (FUNC_0(VAR_4, VAR_5, 0, VAR_2) < 0 ||
     FUNC_0(VAR_4, VAR_5, 1, VAR_3) < 0)
  return -VAR_0;
 return 0;
}
