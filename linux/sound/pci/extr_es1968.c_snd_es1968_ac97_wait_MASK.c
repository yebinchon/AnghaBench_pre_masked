
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1968 {TYPE_1__* card; scalar_t__ io_port; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct es1968 *VAR_1)
{
 int VAR_2 = 100000;

 while (VAR_2-- > 0) {
  if (!(FUNC_2(VAR_1->io_port + VAR_0) & 1))
   return 0;
  FUNC_0();
 }
 FUNC_1(VAR_1->card->dev, "ac97 timeout\n");
 return 1;
}
