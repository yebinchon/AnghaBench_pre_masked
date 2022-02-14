
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1938 {TYPE_1__* card; int reg_lock; } ;
struct TYPE_2__ {int dev; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned char) ;
 unsigned char FUNC_1 (struct es1938*) ;
 int FUNC_2 (struct es1938*,unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_5(struct es1938 *VAR_1, unsigned char VAR_2)
{
 unsigned char VAR_3;
 unsigned long VAR_4;
 FUNC_3(&VAR_1->reg_lock, VAR_4);
 FUNC_2(VAR_1, VAR_0);
 FUNC_2(VAR_1, VAR_2);
 VAR_3 = FUNC_1(VAR_1);
 FUNC_4(&VAR_1->reg_lock, VAR_4);
 FUNC_0(VAR_1->card->dev, "Reg %02x now is %02x\n", VAR_2, VAR_3);
 return VAR_3;
}
