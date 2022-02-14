
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_mcbsp_st_data {int ch1gain; int ch0gain; } ;
struct omap_mcbsp {struct omap_mcbsp_st_data* st_data; } ;


 int FUNC_0 (struct omap_mcbsp*,int ) ;
 int FUNC_1 (struct omap_mcbsp*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct omap_mcbsp *VAR_2)
{
 u16 VAR_3;
 struct omap_mcbsp_st_data *VAR_4 = VAR_2->st_data;

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_2, VAR_0, FUNC_2(VAR_4->ch0gain) |
         FUNC_3(VAR_4->ch1gain));
}
