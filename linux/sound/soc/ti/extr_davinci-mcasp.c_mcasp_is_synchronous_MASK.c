
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcasp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct davinci_mcasp*,int ) ;

__attribute__((used)) static bool FUNC_1(struct davinci_mcasp *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_2);
 u32 VAR_6 = FUNC_0(VAR_4, VAR_1);

 return !(VAR_6 & VAR_3) && VAR_5 & VAR_0;
}
