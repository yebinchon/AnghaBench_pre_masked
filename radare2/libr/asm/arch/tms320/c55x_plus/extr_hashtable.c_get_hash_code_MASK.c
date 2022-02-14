
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut32 ;
typedef int st32 ;
struct TYPE_2__ {int code; int (* hash_func ) (int,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,...) ;

st32 FUNC_3(ut32 VAR_2) {
 ut32 VAR_3, VAR_4;
 ut32 VAR_5, VAR_6;
 st32 (*VAR_7)(st32 VAR_8, st32 VAR_9);
 ut32 VAR_10;
 st32 VAR_11, VAR_12, VAR_13;

 VAR_4 = 0;
 VAR_12 = 0;

 VAR_5 = FUNC_1(VAR_2, 1);
 VAR_10 = FUNC_0(VAR_5);

 if (VAR_0) {
  FUNC_2("opcode: 0x%x part: %d\n", VAR_5, VAR_2);
  FUNC_2("ins_len: 0x%x\n", VAR_10);
 }

 if (VAR_10 > 1 ) {
  VAR_3 = VAR_10 - 1;
  if (VAR_3 >= 4) {
   VAR_3 = 4;
  }

  VAR_4 = FUNC_1(VAR_2 + 1, VAR_3) << (8 * (4 - VAR_3));
  VAR_12 = 0;
  if (VAR_10 > 5) {
   VAR_12 = FUNC_1 (VAR_2 + 5, 1);
  }
 }

 VAR_6 = (2 * VAR_5 | (VAR_4 >> 31));

 VAR_11 = VAR_1[VAR_6].code;

 VAR_12 >>= 7;
 VAR_12 |= (VAR_4 * 2);


 VAR_7 = VAR_1[VAR_6].hash_func;

 if (VAR_0) {
  FUNC_2("hashfunc => %p 0x%x\n", VAR_7, VAR_6);
  FUNC_2("hashargs => 0x%x 0x%x 0x%x\n", (ut32)VAR_11, VAR_4, VAR_12);
 }

 VAR_13 = VAR_7(VAR_11, VAR_12);
 if (VAR_0) {
  FUNC_2 ("ret hashcode: 0x%x\n", VAR_13);
 }

 return VAR_13;
}
