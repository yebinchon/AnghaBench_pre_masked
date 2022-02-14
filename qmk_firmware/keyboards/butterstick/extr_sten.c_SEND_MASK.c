
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int * VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,size_t) ;

void FUNC_2(uint8_t VAR_5) {

 if (VAR_4 == VAR_2 && VAR_1 < VAR_3) {

  FUNC_1("CMD LEN: %d BUF: %d\n", VAR_1, VAR_3);

  VAR_0[VAR_1] = VAR_5;
  VAR_1++;
 }

 if (VAR_4 != VAR_2) FUNC_0(VAR_5);
 return;
}
