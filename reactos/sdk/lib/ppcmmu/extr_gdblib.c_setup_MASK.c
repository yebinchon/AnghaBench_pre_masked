
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ paddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 () ;

void FUNC_2(char *VAR_3, int VAR_4) {
 int VAR_5 = 115200 / VAR_4;
 FUNC_0((paddr_t)VAR_3+VAR_2, 128);
 FUNC_1();
 FUNC_0((paddr_t)VAR_3+VAR_1, VAR_5 & 255);
 FUNC_1();
 FUNC_0((paddr_t)VAR_3+VAR_0, VAR_5 >> 8);
 FUNC_1();
 FUNC_0((paddr_t)VAR_3+VAR_2, 3);
 FUNC_1();
}
