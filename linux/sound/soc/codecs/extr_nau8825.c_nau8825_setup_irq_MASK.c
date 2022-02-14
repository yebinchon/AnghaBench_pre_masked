
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int *,int ,int,char*,struct nau8825*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct nau8825 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->dev, VAR_3->irq, ((void*)0),
  VAR_2, VAR_1 | VAR_0,
  "nau8825", VAR_3);

 if (VAR_4) {
  FUNC_0(VAR_3->dev, "Cannot request irq %d (%d)\n",
   VAR_3->irq, VAR_4);
  return VAR_4;
 }

 return 0;
}
