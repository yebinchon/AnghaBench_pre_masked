
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct omap_mcbsp {TYPE_1__* pdata; scalar_t__ st_data; } ;
struct TYPE_2__ {scalar_t__ has_ccr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_mcbsp*,int ) ;
 int FUNC_1 (struct omap_mcbsp*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct omap_mcbsp*) ;
 int FUNC_3 (struct omap_mcbsp*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct omap_mcbsp *VAR_12, int VAR_13)
{
 int VAR_14 = (VAR_13 == VAR_7);
 int VAR_15 = !VAR_14;
 int VAR_16 = 0;
 u16 VAR_17;

 if (VAR_12->st_data)
  FUNC_3(VAR_12);


 VAR_17 = FUNC_0(VAR_12, VAR_4);
 if (VAR_17 & (VAR_3 | VAR_2 | VAR_1 | VAR_0))
  VAR_16 = !((FUNC_0(VAR_12, VAR_9) |
    FUNC_0(VAR_12, VAR_8)) & 1);

 if (VAR_16) {

  VAR_17 = FUNC_0(VAR_12, VAR_9);
  FUNC_1(VAR_12, VAR_9, VAR_17 | (1 << 6));
 }


 VAR_14 &= 1;
 VAR_17 = FUNC_0(VAR_12, VAR_9);
 FUNC_1(VAR_12, VAR_9, VAR_17 | VAR_14);

 VAR_15 &= 1;
 VAR_17 = FUNC_0(VAR_12, VAR_8);
 FUNC_1(VAR_12, VAR_8, VAR_17 | VAR_15);







 FUNC_4(500);

 if (VAR_16) {

  VAR_17 = FUNC_0(VAR_12, VAR_9);
  FUNC_1(VAR_12, VAR_9, VAR_17 | (1 << 7));
 }

 if (VAR_12->pdata->has_ccr) {

  VAR_17 = FUNC_0(VAR_12, VAR_10);
  VAR_17 &= ~(VAR_14 ? VAR_11 : 0);
  FUNC_1(VAR_12, VAR_10, VAR_17);
  VAR_17 = FUNC_0(VAR_12, VAR_5);
  VAR_17 &= ~(VAR_15 ? VAR_6 : 0);
  FUNC_1(VAR_12, VAR_5, VAR_17);
 }


 FUNC_2(VAR_12);
}
