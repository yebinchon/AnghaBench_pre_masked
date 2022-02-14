
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef int RD_HCURSOR ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int,int,int,int,int *,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static void
FUNC_7(STREAM VAR_0, int VAR_1)
{
 uint16 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 uint16 VAR_7, VAR_8;
 uint8 *VAR_9;
 uint8 *VAR_10;
 RD_HCURSOR VAR_11;

 FUNC_2(VAR_0, VAR_4);
 FUNC_2(VAR_0, VAR_7);
 FUNC_2(VAR_0, VAR_8);
 FUNC_2(VAR_0, VAR_2);
 FUNC_2(VAR_0, VAR_3);
 FUNC_2(VAR_0, VAR_5);
 FUNC_2(VAR_0, VAR_6);
 FUNC_3(VAR_0, VAR_10, VAR_6);
 FUNC_3(VAR_0, VAR_9, VAR_5);
 if ((VAR_2 != 32) || (VAR_3 != 32))
 {
  FUNC_6("process_colour_pointer_common: " "width %d height %d\n", VAR_2, VAR_3);
 }


 VAR_7 = FUNC_0(VAR_7, VAR_2 - 1);
 VAR_8 = FUNC_0(VAR_8, VAR_3 - 1);
 VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_2, VAR_3, VAR_9, VAR_10, VAR_1);
 FUNC_5(VAR_11);
 FUNC_1(VAR_4, VAR_11);
}
