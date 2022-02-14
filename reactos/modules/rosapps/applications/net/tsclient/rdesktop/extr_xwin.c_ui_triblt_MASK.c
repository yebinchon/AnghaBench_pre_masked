
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int RDPCLIENT ;
typedef int HBITMAP ;
typedef int BRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int,int,int,int,int ,int,int) ;
 int FUNC_1 (int *,int ,int,int,int,int,int *,int,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(RDPCLIENT * VAR_4, uint8 VAR_5,
              int VAR_6, int VAR_7, int VAR_8, int VAR_9,
             HBITMAP VAR_10, int VAR_11, int VAR_12,
               BRUSH * VAR_13, int VAR_14, int VAR_15)
{



 switch (VAR_5)
 {
  case 0x69:
   FUNC_0(VAR_4, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
   FUNC_1(VAR_4, VAR_2, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_14, VAR_15);
   break;

  case 0xb8:
   FUNC_1(VAR_4, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_14, VAR_15);
   FUNC_0(VAR_4, VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
   FUNC_1(VAR_4, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_14, VAR_15);
   break;

  case 0xc0:
   FUNC_0(VAR_4, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
   FUNC_1(VAR_4, VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_14, VAR_15);
   break;

  default:
   FUNC_2("triblt 0x%x\n", VAR_5);
   FUNC_0(VAR_4, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 }
}
