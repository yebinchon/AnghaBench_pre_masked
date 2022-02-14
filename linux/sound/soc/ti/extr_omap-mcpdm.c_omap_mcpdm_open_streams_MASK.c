
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_mcpdm {int dn_rx_offset; TYPE_1__* config; } ;
struct TYPE_2__ {int threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (struct omap_mcpdm*,int ) ;
 int FUNC_1 (struct omap_mcpdm*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct omap_mcpdm *VAR_17)
{
 u32 VAR_18 = FUNC_0(VAR_17, VAR_6);

 FUNC_1(VAR_17, VAR_6, VAR_18 | VAR_14);

 FUNC_1(VAR_17, VAR_11,
   VAR_2 | VAR_3 |
   VAR_12 | VAR_13);


 if (VAR_17->dn_rx_offset) {
  u32 VAR_19 = VAR_17->dn_rx_offset;

  FUNC_1(VAR_17, VAR_8, VAR_19);
  VAR_19 |= (VAR_4 | VAR_5);
  FUNC_1(VAR_17, VAR_8, VAR_19);
 }

 FUNC_1(VAR_17, VAR_9,
    VAR_17->config[VAR_16].threshold);
 FUNC_1(VAR_17, VAR_10,
    VAR_17->config[VAR_15].threshold);

 FUNC_1(VAR_17, VAR_7,
   VAR_0 | VAR_1);
}
