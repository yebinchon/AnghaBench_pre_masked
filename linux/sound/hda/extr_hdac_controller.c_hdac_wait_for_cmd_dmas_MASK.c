
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct hdac_bus*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hdac_bus *VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = VAR_4 + FUNC_0(100);
 while ((FUNC_1(VAR_5, VAR_3) & VAR_1)
  && FUNC_2(VAR_4, VAR_6))
  FUNC_3(10);

 VAR_6 = VAR_4 + FUNC_0(100);
 while ((FUNC_1(VAR_5, VAR_2) & VAR_0)
  && FUNC_2(VAR_4, VAR_6))
  FUNC_3(10);
}
