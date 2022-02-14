
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {int dev; int xtalk_sem; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct nau8825 *VAR_0, long VAR_1)
{
 int VAR_2;

 if (VAR_1) {
  VAR_2 = FUNC_1(&VAR_0->xtalk_sem, VAR_1);
  if (VAR_2 < 0)
   FUNC_0(VAR_0->dev, "Acquire semaphore timeout\n");
 } else {
  VAR_2 = FUNC_2(&VAR_0->xtalk_sem);
  if (VAR_2)
   FUNC_0(VAR_0->dev, "Acquire semaphore fail\n");
 }

 return VAR_2;
}
