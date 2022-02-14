
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int (* write ) (struct mii_bus*,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mii_bus*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mii_bus *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
  VAR_4->write(VAR_4, VAR_5, VAR_3,
      (VAR_1 | VAR_0 | VAR_2));

 FUNC_0(1000);
}
