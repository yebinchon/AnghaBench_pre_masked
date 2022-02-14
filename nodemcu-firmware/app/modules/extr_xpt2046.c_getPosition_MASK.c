
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2 (uint16_t *VAR_7, uint16_t *VAR_8) {
  if (FUNC_1() == 0) {
    *VAR_7 = *VAR_8 = 0xffff;
    return;
  }
  uint16_t VAR_9, VAR_10;

  FUNC_0(&VAR_9, &VAR_10);


  *VAR_7 = (uint16_t)(VAR_3 * (VAR_10 - VAR_6) / VAR_2 + VAR_0);
  if (*VAR_7 > 0x7fff) *VAR_7 = 0;
  *VAR_8 = (uint16_t)(VAR_4 * (VAR_9 - VAR_5) / VAR_1 + VAR_0);
  if (*VAR_8 > 0x7fff) *VAR_8 = 0;
}
