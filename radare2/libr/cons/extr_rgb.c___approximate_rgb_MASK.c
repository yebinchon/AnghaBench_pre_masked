
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 void* FUNC_0 (int,int ,int) ;

__attribute__((used)) static ut32 FUNC_1(int VAR_0, int VAR_1, int VAR_2) {
 bool VAR_3 = (VAR_0 > 0 && VAR_0 < 255 && VAR_0 == VAR_1 && VAR_0 == VAR_2);
 if (VAR_3) {
  return 232 + (int)((double)VAR_0 / (255 / 24.1));
 }
 const int VAR_4 = (256.0 / 6);
 VAR_0 = FUNC_0 (VAR_0 / VAR_4, 0, 6);
 VAR_1 = FUNC_0 (VAR_1 / VAR_4, 0, 6);
 VAR_2 = FUNC_0 (VAR_2 / VAR_4, 0, 6);
 return 16 + (VAR_0 * 36) + (VAR_1 * 6) + VAR_2;

}
