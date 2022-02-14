
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct mtpav {scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct mtpav *VAR_2, u16 VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_3 == VAR_1) {
  VAR_4 = FUNC_0(VAR_2->port + VAR_1);
  VAR_4 = (VAR_4 & 0xf8);
 } else if (VAR_3 == VAR_0) {
  VAR_4 = FUNC_0(VAR_2->port + VAR_0);
  VAR_4 = (VAR_4 & 0x1c);
 }

 return VAR_4;
}
