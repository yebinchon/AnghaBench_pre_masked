
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mixart_mgr {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mixart_mgr*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct mixart_mgr *VAR_9 = VAR_8;
 u32 VAR_10;

 VAR_10 = FUNC_2(FUNC_0(VAR_9, VAR_6));
 if( !(VAR_10 & VAR_3) ) {

  return VAR_0;
 }


 FUNC_4(VAR_2, FUNC_0(VAR_9, VAR_5));


 VAR_10 = FUNC_1(FUNC_0(VAR_9, VAR_4));
 FUNC_3(VAR_10, FUNC_0(VAR_9, VAR_4));


 FUNC_4( VAR_3, FUNC_0(VAR_9, VAR_6) );

 return VAR_1;
}
