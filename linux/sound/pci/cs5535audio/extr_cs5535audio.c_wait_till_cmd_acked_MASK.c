
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs5535audio {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct cs5535audio*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct cs5535audio *VAR_2, unsigned long VAR_3)
{
 unsigned int VAR_4;
 do {
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  if (!(VAR_4 & VAR_1))
   break;
  FUNC_2(1);
 } while (--VAR_3);
 if (!VAR_3)
  FUNC_1(VAR_2->card->dev,
   "Failure writing to cs5535 codec\n");
}
