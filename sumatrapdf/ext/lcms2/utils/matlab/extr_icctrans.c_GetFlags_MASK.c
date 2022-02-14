
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
cmsUInt32Number FUNC_1()
{
 cmsUInt32Number VAR_6 = 0;

 switch (VAR_1) {

 case 0: VAR_6 = VAR_5; break;
 case 2: VAR_6 = VAR_3; break;
 case 3: VAR_6 = VAR_4; break;
 case 1: break;

 default: FUNC_0("Unknown precalculation mode '%d'", VAR_1);
 }

 if (VAR_0)
  VAR_6 |= VAR_2;

 return VAR_6;
}
