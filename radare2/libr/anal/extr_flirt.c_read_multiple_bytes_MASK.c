
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int RBuffer ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ut32 FUNC_3(RBuffer *VAR_0) {
 ut32 VAR_1 = FUNC_0 (VAR_0);
 if ((VAR_1 & 0x80) != 0x80) {
  return VAR_1;
 }
 if ((VAR_1 & 0xc0) != 0xc0) {
  return ((VAR_1 & 0x7f) << 8) + FUNC_0 (VAR_0);
 }
 if ((VAR_1 & 0xe0) != 0xe0) {
  VAR_1 = ((VAR_1 & 0x3f) << 24) + (FUNC_0 (VAR_0) << 16);
  VAR_1 += FUNC_1 (VAR_0);
  return VAR_1;
 }
 return FUNC_2 (VAR_0);
}
