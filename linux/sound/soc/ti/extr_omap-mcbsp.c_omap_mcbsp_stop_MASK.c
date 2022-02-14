
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct omap_mcbsp {scalar_t__ st_data; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ has_ccr; } ;


 int FUNC_0 (struct omap_mcbsp*,int ) ;
 int FUNC_1 (struct omap_mcbsp*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct omap_mcbsp*) ;

__attribute__((used)) static void FUNC_3(struct omap_mcbsp *VAR_7, int VAR_8)
{
 int VAR_9 = (VAR_8 == VAR_2);
 int VAR_10 = !VAR_9;
 int VAR_11;
 u16 VAR_12;


 VAR_9 &= 1;
 if (VAR_7->pdata->has_ccr) {
  VAR_12 = FUNC_0(VAR_7, VAR_5);
  VAR_12 |= (VAR_9 ? VAR_6 : 0);
  FUNC_1(VAR_7, VAR_5, VAR_12);
 }
 VAR_12 = FUNC_0(VAR_7, VAR_4);
 FUNC_1(VAR_7, VAR_4, VAR_12 & ~VAR_9);


 VAR_10 &= 1;
 if (VAR_7->pdata->has_ccr) {
  VAR_12 = FUNC_0(VAR_7, VAR_0);
  VAR_12 |= (VAR_10 ? VAR_1 : 0);
  FUNC_1(VAR_7, VAR_0, VAR_12);
 }
 VAR_12 = FUNC_0(VAR_7, VAR_3);
 FUNC_1(VAR_7, VAR_3, VAR_12 & ~VAR_10);

 VAR_11 = !((FUNC_0(VAR_7, VAR_4) |
   FUNC_0(VAR_7, VAR_3)) & 1);

 if (VAR_11) {

  VAR_12 = FUNC_0(VAR_7, VAR_4);
  FUNC_1(VAR_7, VAR_4, VAR_12 & ~(1 << 6));
 }

 if (VAR_7->st_data)
  FUNC_2(VAR_7);
}
