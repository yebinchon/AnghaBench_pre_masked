
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef scalar_t__ ut16 ;
typedef int RBuffer ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 ut16 VAR_1, VAR_2;
 ut64 VAR_3 = FUNC_1 (VAR_0);





 if (VAR_3 < 0x8000) {
  return 0;
 }

 VAR_1 = FUNC_0 (VAR_0, 0x7fdc);
 VAR_2 = FUNC_0 (VAR_0, 0x7fde);

 if (VAR_1 == (ut16)~VAR_2) {
  return 1;
 }
 if (VAR_3 < 0xffee) {
  return 0;
 }
 VAR_1 = FUNC_0 (VAR_0, 0xffdc);
 VAR_2 = FUNC_0 (VAR_0, 0xffde);
 return (VAR_1 == (ut16)~VAR_2);
}
