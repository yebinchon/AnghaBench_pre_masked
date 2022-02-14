
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int mcast_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u8
FUNC_0(bool VAR_5, void *VAR_6, u16 VAR_7)
{
 u8 VAR_8 = VAR_4;

 if (VAR_5 && VAR_6 && VAR_7 >= sizeof(VAR_8))
  VAR_8 = *(u8 *)VAR_6;

 if (!VAR_5) {
  VAR_8 |= VAR_0;
  VAR_8 |= VAR_1;
 }


 if (VAR_8 & VAR_0)
  VAR_8 |= VAR_2;

 if (VAR_8 & VAR_1)
  VAR_8 |= VAR_3;

 return VAR_8;
}
