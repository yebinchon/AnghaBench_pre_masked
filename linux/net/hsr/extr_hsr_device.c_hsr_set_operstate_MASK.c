
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsr_port {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hsr_port *VAR_3, bool VAR_4)
{
 if (!FUNC_1(VAR_3->dev)) {
  FUNC_0(VAR_3->dev, VAR_0);
  return;
 }

 if (VAR_4)
  FUNC_0(VAR_3->dev, VAR_2);
 else
  FUNC_0(VAR_3->dev, VAR_1);
}
