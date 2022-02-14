
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum intel_snb_id { ____Placeholder_intel_snb_id } intel_snb_id ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (unsigned int,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_1(enum intel_snb_id VAR_4, unsigned long long *VAR_5,
   unsigned int VAR_6)
{
 int VAR_7;

 switch (VAR_4) {
 case 131:
  VAR_7 = VAR_0;
  break;
 case 130:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_3;
  break;
 default:
  return -1;
 };
 if (FUNC_0(VAR_6, VAR_7, VAR_5))
  return -1;
 return 0;
}
