
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arizona*,int ,char*,int ,struct arizona*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct arizona *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1,
      "Thermal warning", VAR_3,
      VAR_4);
 if (VAR_5 != 0)
  FUNC_1(VAR_4->dev,
   "Failed to get thermal warning IRQ: %d\n",
   VAR_5);

 VAR_5 = FUNC_0(VAR_4, VAR_0,
      "Thermal shutdown", VAR_2,
      VAR_4);
 if (VAR_5 != 0)
  FUNC_1(VAR_4->dev,
   "Failed to get thermal shutdown IRQ: %d\n",
   VAR_5);

 return 0;
}
