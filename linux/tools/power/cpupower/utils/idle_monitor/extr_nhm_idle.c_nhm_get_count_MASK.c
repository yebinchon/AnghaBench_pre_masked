
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum intel_nhm_id { ____Placeholder_intel_nhm_id } intel_nhm_id ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ FUNC_0 (unsigned int,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_1(enum intel_nhm_id VAR_5, unsigned long long *VAR_6,
   unsigned int VAR_7)
{
 int VAR_8;

 switch (VAR_5) {
 case 132:
  VAR_8 = VAR_0;
  break;
 case 131:
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 case 128:
  VAR_8 = VAR_4;
  break;
 default:
  return -1;
 };
 if (FUNC_0(VAR_7, VAR_8, VAR_6))
  return -1;

 return 0;
}
