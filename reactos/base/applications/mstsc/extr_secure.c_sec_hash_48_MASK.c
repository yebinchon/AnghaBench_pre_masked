
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;


 int FUNC_0 (scalar_t__*,scalar_t__,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,char*) ;
 void* FUNC_3 () ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,char*,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,char*) ;
 void* FUNC_8 () ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,char*,int) ;

void
FUNC_11(uint8 * VAR_0, uint8 * VAR_1, uint8 * VAR_2, uint8 * VAR_3, uint8 VAR_4)
{
 uint8 VAR_5[20];
 uint8 VAR_6[4];
 void * VAR_7;
 void * VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
 {
  FUNC_0(VAR_6, VAR_4 + VAR_9, VAR_9 + 1);
  VAR_7 = FUNC_8();
  FUNC_6(VAR_7);
  FUNC_10(VAR_7, (char *)VAR_6, VAR_9 + 1);
  FUNC_10(VAR_7, (char *)VAR_1, 48);
  FUNC_10(VAR_7, (char *)VAR_2, 32);
  FUNC_10(VAR_7, (char *)VAR_3, 32);
  FUNC_7(VAR_7, (char *)VAR_5);
  FUNC_9(VAR_7);
  VAR_8 = FUNC_3();
  FUNC_1(VAR_8);
        FUNC_5(VAR_8, (char *)VAR_1, 48);
        FUNC_5(VAR_8, (char *)VAR_5, 20);
  FUNC_2(VAR_8, (char *)VAR_0 + VAR_9 * 16);
  FUNC_4(VAR_8);
 }
}
