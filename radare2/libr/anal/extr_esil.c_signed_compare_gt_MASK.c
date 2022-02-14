
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int st8 ;
typedef int st64 ;
typedef int st32 ;
typedef int st16 ;



__attribute__((used)) static int FUNC_0(ut64 VAR_0, ut64 VAR_1, ut64 VAR_2) {
 int VAR_3;
 switch (VAR_2) {
 case 1: VAR_3 = (VAR_0 & 1) > (VAR_1 & 1);
  break;
 case 8: VAR_3 = (st8) VAR_0 > (st8) VAR_1;
  break;
 case 16: VAR_3 = (st16) VAR_0 > (st16) VAR_1;
  break;
 case 32: VAR_3 = (st32) VAR_0 > (st32) VAR_1;
  break;
 case 64:
 default: VAR_3 = (st64) VAR_0 > (st64) VAR_1;
  break;
 }
 return VAR_3;
}
