
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int HBITMAP ;
typedef int BRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int,int,int ,int,int) ;
 int FUNC_1 (int ,int,int,int,int,int *,int,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(uint8 VAR_4,
              int VAR_5, int VAR_6, int VAR_7, int VAR_8,
             HBITMAP VAR_9, int VAR_10, int VAR_11,
               BRUSH * VAR_12, int VAR_13, int VAR_14)
{



 switch (VAR_4)
 {
  case 0x69:
   FUNC_0(VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
   FUNC_1(VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, VAR_12, VAR_13, VAR_14);
   break;

  case 0xb8:
   FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, VAR_12, VAR_13, VAR_14);
   FUNC_0(VAR_0, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
   FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, VAR_12, VAR_13, VAR_14);
   break;

  default:
   FUNC_2("ui_triblt 1x%x\n", VAR_4);
   FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 }

}
