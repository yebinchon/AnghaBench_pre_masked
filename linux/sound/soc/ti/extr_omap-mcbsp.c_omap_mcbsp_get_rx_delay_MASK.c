
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct omap_mcbsp {int dummy; } ;


 scalar_t__ FUNC_0 (struct omap_mcbsp*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u16 FUNC_1(struct omap_mcbsp *VAR_2)
{
 u16 VAR_3, VAR_4;


 VAR_3 = FUNC_0(VAR_2, VAR_0);

 VAR_4 = FUNC_0(VAR_2, VAR_1);


 if (VAR_4 <= VAR_3)
  return 0;
 else
  return VAR_4 - VAR_3;
}
