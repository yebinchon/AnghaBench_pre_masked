
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int RD_BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int *,int) ;
 int FUNC_1 (int *,int,int,int *,int) ;
 int FUNC_2 (int *,int,int,int *,int) ;
 int FUNC_3 (int *,int,int,int *,int) ;
 int FUNC_4 (char*,int) ;

RD_BOOL
FUNC_5(uint8 * VAR_1, int VAR_2, int VAR_3, uint8 * VAR_4, int VAR_5, int VAR_6)
{
 RD_BOOL VAR_7 = VAR_0;

 switch (VAR_6)
 {
  case 1:
   VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   break;
  case 2:
   VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   break;
  case 3:
   VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   break;
  case 4:
   VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   break;
  default:
   FUNC_4("Bpp %d\n", VAR_6);
   break;
 }
 return VAR_7;
}
