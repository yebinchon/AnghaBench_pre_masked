
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1938 {TYPE_1__* card; int reg_lock; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,unsigned char,unsigned char) ;
 int FUNC_1 (struct es1938*,unsigned char) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct es1938 *VAR_0, unsigned char VAR_1, unsigned char VAR_2)
{
 unsigned long VAR_3;
 FUNC_2(&VAR_0->reg_lock, VAR_3);
 FUNC_1(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(&VAR_0->reg_lock, VAR_3);
 FUNC_0(VAR_0->card->dev, "Reg %02x set to %02x\n", VAR_1, VAR_2);
}
