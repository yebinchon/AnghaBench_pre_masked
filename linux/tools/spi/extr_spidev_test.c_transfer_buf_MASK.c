
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,char*) ;
 int * FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (int,int *,int *,int) ;

__attribute__((used)) static void FUNC_9(int VAR_5, int VAR_6)
{
 uint8_t *VAR_7;
 uint8_t *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_6);
 if (!VAR_7)
  FUNC_6("can't allocate tx buffer");
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_7[VAR_9] = FUNC_7();

 VAR_8 = FUNC_4(VAR_6);
 if (!VAR_8)
  FUNC_6("can't allocate rx buffer");

 FUNC_8(VAR_5, VAR_7, VAR_8, VAR_6);

 VAR_2 += VAR_6;
 VAR_1 += VAR_6;

 if (VAR_3 & VAR_0) {
  if (FUNC_5(VAR_7, VAR_8, VAR_6)) {
   FUNC_1(VAR_4, "transfer error !\n");
   FUNC_3(VAR_7, VAR_6, 32, "TX");
   FUNC_3(VAR_8, VAR_6, 32, "RX");
   FUNC_0(1);
  }
 }

 FUNC_2(VAR_8);
 FUNC_2(VAR_7);
}
