
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtpav {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtpav*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mtpav *VAR_2)
{
 int VAR_3 = 10000;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 while (!(VAR_4 & VAR_0) && VAR_3--) {
  VAR_4 = FUNC_0(VAR_2, VAR_1);
  FUNC_1(10);
 }
}
