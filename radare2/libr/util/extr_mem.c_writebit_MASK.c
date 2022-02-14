
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2 (ut8 *VAR_0, int VAR_1, bool VAR_2) {
 int VAR_3 = VAR_1 / 8;
 int VAR_4 = (VAR_1 % 8);

VAR_0 += VAR_3;
 if (VAR_2) {

  FUNC_0 (VAR_0 , VAR_4);
 } else {

  FUNC_1 (VAR_0 , VAR_4);
 }
}
