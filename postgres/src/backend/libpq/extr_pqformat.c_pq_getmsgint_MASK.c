
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;
typedef int StringInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

unsigned int
FUNC_4(StringInfo VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 unsigned char VAR_4;
 uint16 VAR_5;
 uint32 VAR_6;

 switch (VAR_2)
 {
  case 1:
   FUNC_3(VAR_1, (char *) &VAR_4, 1);
   VAR_3 = VAR_4;
   break;
  case 2:
   FUNC_3(VAR_1, (char *) &VAR_5, 2);
   VAR_3 = FUNC_1(VAR_5);
   break;
  case 4:
   FUNC_3(VAR_1, (char *) &VAR_6, 4);
   VAR_3 = FUNC_2(VAR_6);
   break;
  default:
   FUNC_0(VAR_0, "unsupported integer size %d", VAR_2);
   VAR_3 = 0;
   break;
 }
 return VAR_3;
}
