
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_6__ {int bits; scalar_t__ big_endian; int pc; } ;
struct TYPE_5__ {int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (char const*,int ,int const) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(RAsm *VAR_2, RAsmOp *VAR_3, const char *VAR_4) {
 const bool VAR_5 = (VAR_2->bits == 16);
 int VAR_6;
 ut32 VAR_7;
 if (VAR_2->bits == 64) {
  if (!FUNC_0 (VAR_4, VAR_2->pc, &VAR_7)) {
   return -1;
  }
 } else {
  VAR_7 = FUNC_1 (VAR_4, VAR_2->pc, VAR_5);
  if (VAR_2->bits != 32 && VAR_2->bits != 16) {
   FUNC_2 ("Error: ARM assembler only supports 16 or 32 bits\n");
   return -1;
  }
 }
 if (VAR_7 == VAR_1) {
  return -1;
 }
 ut8 VAR_8[4];
 if (VAR_5) {
  const int VAR_9 = VAR_7 >> 16;
  VAR_6 = VAR_9 > 0? 4: 2;
  if (VAR_6 == 4) {
   if (VAR_2->big_endian) {
    FUNC_6 (VAR_8, VAR_7 >> 16);
    FUNC_6 (VAR_8 + 2, VAR_7 & VAR_0);
   } else {
    FUNC_5 (VAR_8, VAR_7);
   }
  } else if (VAR_6 == 2) {
   if (VAR_2->big_endian) {
    FUNC_6 (VAR_8, VAR_7 & VAR_0);
   } else {
    FUNC_4 (VAR_8, VAR_7 & VAR_0);
   }
  }
 } else {
  VAR_6 = 4;
  if (VAR_2->big_endian) {
   FUNC_7 (VAR_8, VAR_7);
  } else {
   FUNC_5 (VAR_8, VAR_7);
  }
 }
 FUNC_3 (&VAR_3->buf, VAR_8, VAR_6);

 return VAR_6;
}
