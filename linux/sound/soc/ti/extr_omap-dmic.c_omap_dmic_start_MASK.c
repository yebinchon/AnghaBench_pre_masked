
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_dmic {int ch_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_dmic*,int ) ;
 int FUNC_1 (struct omap_dmic*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct omap_dmic *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);


 FUNC_1(VAR_3, VAR_1,
   VAR_2);

 FUNC_1(VAR_3, VAR_0, VAR_4 | VAR_3->ch_enabled);
}
