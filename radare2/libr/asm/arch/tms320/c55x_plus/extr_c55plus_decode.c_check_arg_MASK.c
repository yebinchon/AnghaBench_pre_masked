
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(ut32 VAR_1, int *VAR_2) {
 bool VAR_3 = 0;

 if ((VAR_1 <= 31) | (VAR_1 >= 128 && VAR_1 < 160)) {
  VAR_3 = 1;
 } else if (VAR_1 >= 32 && VAR_1 <= 252) {
  VAR_3 = 0;
 } else {
  FUNC_0(VAR_0, "Invalid arg: %u\n", VAR_1);
  *VAR_2 = -1;
 }

 return VAR_3;
}
