
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_mcbsp {int dev; } ;
typedef int s16 ;


 int FUNC_0 (struct omap_mcbsp*,int ) ;
 int FUNC_1 (struct omap_mcbsp*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct omap_mcbsp *VAR_4, s16 *VAR_5)
{
 u16 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_1);

 if (VAR_6 & VAR_3)
  FUNC_1(VAR_4, VAR_1, VAR_6 & ~(VAR_3));

 FUNC_1(VAR_4, VAR_1, VAR_6 | VAR_3);

 for (VAR_7 = 0; VAR_7 < 128; VAR_7++)
  FUNC_1(VAR_4, VAR_0, VAR_5[VAR_7]);

 VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_1);
 while (!(VAR_6 & VAR_2) && (++VAR_7 < 1000))
  VAR_6 = FUNC_0(VAR_4, VAR_1);

 FUNC_1(VAR_4, VAR_1, VAR_6 & ~(VAR_3));

 if (VAR_7 == 1000)
  FUNC_2(VAR_4->dev, "McBSP FIR load error!\n");
}
