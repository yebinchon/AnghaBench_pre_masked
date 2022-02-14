
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct hdac_bus*,int ) ;
 int FUNC_2 (struct hdac_bus*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct hdac_bus *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(VAR_3, VAR_1, VAR_0, VAR_0);

 VAR_4 = VAR_2 + FUNC_0(100);
 while (!FUNC_1(VAR_3, VAR_1) && FUNC_3(VAR_2, VAR_4))
  FUNC_4(500, 1000);
}
