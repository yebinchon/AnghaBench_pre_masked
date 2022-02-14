
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;
typedef scalar_t__ HBITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int,int,int *) ;
 int * FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,char*) ;

void FUNC_15()
{
 HDC VAR_5, VAR_6;
 HBITMAP VAR_7, VAR_8;


 FUNC_13(VAR_4);
 FUNC_14(FUNC_12(0, FUNC_9(0,0,0)) == VAR_1, "\n");
 FUNC_14(FUNC_4() == VAR_3, "\n");


 VAR_5 = FUNC_3(((void*)0));
 FUNC_14(VAR_5 != 0, "GetDC failed, skipping tests\n");
 if (VAR_5 == ((void*)0)) return;


 FUNC_12(VAR_5, FUNC_9(1,2,3));
 FUNC_14(FUNC_12(VAR_5, FUNC_9(4,5,6)) == FUNC_9(1,2,3), "\n");


 VAR_6 = FUNC_1(VAR_5);
 FUNC_10(0, VAR_5);
 FUNC_14(VAR_6 != 0, "CreateCompatibleDC failed, skipping tests\n");
 if (!VAR_6) return;


 FUNC_11(VAR_6, FUNC_6(VAR_2));
 FUNC_14(FUNC_11(VAR_6, FUNC_6(VAR_0)) == FUNC_6(VAR_2), "\n");


 FUNC_12(VAR_6, 0x21123456);
 FUNC_14(FUNC_12(VAR_6, FUNC_9(0,0,0)) == 0x21123456, "\n");


 FUNC_12(VAR_6, VAR_1);
 FUNC_14(FUNC_12(VAR_6, FUNC_9(0,0,0)) == VAR_1, "\n");

 VAR_7 = FUNC_0(10, 10, 1, 32, ((void*)0));
 FUNC_14(VAR_7 != 0, "CreateBitmap failed, skipping tests\n");
 if (!VAR_7) return;
 VAR_8 = FUNC_11(VAR_6, VAR_7);
 FUNC_11(VAR_6, VAR_8);
 FUNC_2(VAR_6);
}
