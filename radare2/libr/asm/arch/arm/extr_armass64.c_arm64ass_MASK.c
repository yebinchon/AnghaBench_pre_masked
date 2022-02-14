
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_19__ {int member_0; } ;
typedef TYPE_1__ ArmOp ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int*,char const*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (char const*,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (char const*,char*) ;
 int FUNC_19 (char const*,char*,int) ;

bool FUNC_20(const char *VAR_1, ut64 VAR_2, ut32 *VAR_3) {
 ArmOp VAR_4 = {0};
 if (!FUNC_14 (VAR_1, &VAR_4)) {
  return 0;
 }

 if (!FUNC_19 (VAR_1, "mov", 3)) {
  *VAR_3 = FUNC_10 (&VAR_4);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "cmp", 3)) {
  *VAR_3 = FUNC_6 (&VAR_4);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldrb", 4)) {
  *VAR_3 = FUNC_5 (&VAR_4, 0x00004039);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldrh", 4)) {
  *VAR_3 = FUNC_5 (&VAR_4, 0x00004078);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldrsh", 5)) {
  *VAR_3 = FUNC_5 (&VAR_4, 0x0000c078);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldrsw", 5)) {
  *VAR_3 = FUNC_5 (&VAR_4, 0x000080b8);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldrsb", 5)) {
  *VAR_3 = FUNC_5 (&VAR_4, 0x0000c039);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "strb", 4)) {
  *VAR_3 = FUNC_5 (&VAR_4, 0x00000039);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "strh", 4)) {
  *VAR_3 = FUNC_5 (&VAR_4, 0x00000078);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldr", 3)) {
  *VAR_3 = FUNC_15 (&VAR_4, 0x000040f8);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "stur", 4)) {
  *VAR_3 = FUNC_16 (&VAR_4, 0x000000f8);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldur", 4)) {
  *VAR_3 = FUNC_16 (&VAR_4, 0x000040f8);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "str", 3)) {
  *VAR_3 = FUNC_15 (&VAR_4, 0x000000f8);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "stp", 3)) {
  *VAR_3 = FUNC_17 (&VAR_4, 0x000000a9);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "ldp", 3)) {
  *VAR_3 = FUNC_17 (&VAR_4, 0x000040a9);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "sub", 3)) {
  *VAR_3 = FUNC_2 (&VAR_4, 0xd1);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "add x", 5)) {
  *VAR_3 = FUNC_2 (&VAR_4, 0x91);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "add w", 5)) {
  *VAR_3 = FUNC_2 (&VAR_4, 0x11);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "adr x", 5)) {
  *VAR_3 = FUNC_0 (&VAR_4, VAR_2);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "adrp x", 6)) {
  *VAR_3 = FUNC_1 (&VAR_4, VAR_2, 0x00000090);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "neg", 3)) {
  *VAR_3 = FUNC_12 (&VAR_4);
  return *VAR_3 != -1;
 }
 if (!FUNC_18 (VAR_1, "isb")) {
  *VAR_3 = 0xdf3f03d5;
  return *VAR_3 != -1;
 }

 if (FUNC_8 (VAR_3, VAR_1)) {
  return 1;
 }
 if (!FUNC_18 (VAR_1, "nop")) {
  *VAR_3 = 0x1f2003d5;
  return *VAR_3 != -1;
 }
 if (!FUNC_18 (VAR_1, "ret")) {
  *VAR_3 = 0xc0035fd6;
  return 1;
 }
 if (!FUNC_19 (VAR_1, "msr ", 4)) {
  *VAR_3 = FUNC_11 (&VAR_4, 0);
  if (*VAR_3 != VAR_0) {
   return 1;
  }
 }
 if (!FUNC_19 (VAR_1, "mrs ", 4)) {
  *VAR_3 = FUNC_11 (&VAR_4, 1);
  if (*VAR_3 != VAR_0) {
   return 1;
  }
 }
 if (!FUNC_19 (VAR_1, "orr ", 4)) {
  *VAR_3 = FUNC_13 (&VAR_4, VAR_2);
  return *VAR_3 != VAR_0;
 }
 if (!FUNC_19 (VAR_1, "svc ", 4)) {
  *VAR_3 = FUNC_7 (&VAR_4, 0x010000d4);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "hvc ", 4)) {
  *VAR_3 = FUNC_7 (&VAR_4, 0x020000d4);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "smc ", 4)) {
  *VAR_3 = FUNC_7 (&VAR_4, 0x030000d4);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "brk ", 4)) {
  *VAR_3 = FUNC_7 (&VAR_4, 0x000020d4);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "hlt ", 4)) {
  *VAR_3 = FUNC_7 (&VAR_4, 0x000040d4);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "b ", 2)) {
  *VAR_3 = FUNC_4 (&VAR_4, VAR_2, 0x14);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "b.eq ", 5)) {
  *VAR_3 = FUNC_3 (&VAR_4, VAR_2, 0x00000054);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "b.hs ", 5)) {
  *VAR_3 = FUNC_3 (&VAR_4, VAR_2, 0x02000054);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "bl ", 3)) {
  *VAR_3 = FUNC_4 (&VAR_4, VAR_2, 0x94);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "br x", 4)) {
  *VAR_3 = FUNC_4 (&VAR_4, VAR_2, 0x1fd6);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "blr x", 5)) {
  *VAR_3 = FUNC_4 (&VAR_4, VAR_2, 0x3fd6);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "dmb ", 4)) {
  *VAR_3 = FUNC_9 (&VAR_4, VAR_2, 0xbf3003d5);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "dsb ", 4)) {
  *VAR_3 = FUNC_9 (&VAR_4, VAR_2, 0x9f3003d5);
  return *VAR_3 != -1;
 }
 if (!FUNC_19 (VAR_1, "isb", 3)) {
  *VAR_3 = FUNC_9 (&VAR_4, VAR_2, 0xdf3f03d5);
  return *VAR_3 != -1;
 }
 return 0;
}
