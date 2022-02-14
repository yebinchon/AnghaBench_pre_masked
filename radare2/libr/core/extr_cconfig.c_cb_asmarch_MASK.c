
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_13__ ;


typedef int asmparser ;
struct TYPE_23__ {char* value; } ;
struct TYPE_22__ {TYPE_16__* anal; int config; TYPE_13__* assembler; TYPE_2__* print; int bin; int dbg; int egg; } ;
struct TYPE_21__ {int big_endian; } ;
struct TYPE_20__ {char* cpus; int bits; } ;
struct TYPE_19__ {int bits; int sdb_types; int syscall; } ;
struct TYPE_18__ {int bits; TYPE_1__* cur; } ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RConfigNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_16__*,int ) ;
 int FUNC_5 (TYPE_13__*,int) ;
 int FUNC_6 (TYPE_13__*,char*) ;
 int FUNC_7 (TYPE_13__*,char*) ;
 int FUNC_8 (int ) ;
 char const* FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 TYPE_4__* FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (int ,char*,int,int ,int ) ;
 int FUNC_18 (int ,char const*,int,char const*,char const*) ;
 int FUNC_19 (TYPE_3__*,int *,char) ;
 int FUNC_20 (char*,int,char*,char*) ;
 char* FUNC_21 (char*,char) ;
 char* FUNC_22 (char const*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_26 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static bool FUNC_27(void *VAR_3, void *VAR_4) {
 char VAR_5[32];
 RCore *VAR_6 = (RCore *) VAR_3;
 RConfigNode *VAR_7 = (RConfigNode *) VAR_4;
 const char *VAR_8 = ((void*)0);
 int VAR_9 = VAR_1;
 if (!*VAR_7->value || !VAR_6 || !VAR_6->assembler) {
  return 0;
 }
 VAR_8 = FUNC_9 (VAR_6->config, "asm.os");
 if (VAR_6 && VAR_6->anal && VAR_6->anal->bits) {
  VAR_9 = VAR_6->anal->bits;
 }
 if (VAR_7->value[0] == '?') {
  FUNC_25 (VAR_6, VAR_7);
  if (FUNC_23 (VAR_7->value) > 1 && VAR_7->value[1] == '?') {

   FUNC_19 (VAR_6, ((void*)0), VAR_7->value[1]);
   return 0;
  } else {
   FUNC_3 (VAR_7);
   return 0;
  }
 }
 FUNC_17 (VAR_6->egg, VAR_7->value, VAR_9, 0, VAR_2);

 if (!FUNC_7 (VAR_6->assembler, VAR_7->value)) {
  FUNC_1 ("asm.arch: cannot find (%s)\n", VAR_7->value);
  return 0;
 }


 char *VAR_10 = FUNC_22 (FUNC_9 (VAR_6->config, "asm.cpu"));
 if (VAR_6->assembler->cur) {
  const char *VAR_11 = VAR_6->assembler->cur->cpus;
  if (VAR_11) {
   if (*VAR_11) {
    char *VAR_12 = FUNC_22 (VAR_11);
    char *VAR_13 = FUNC_21 (VAR_12, ',');
    if (VAR_13) {
     if (!*VAR_10 || (*VAR_10 && !FUNC_24(VAR_12, VAR_10))) {
      *VAR_13 = 0;
      FUNC_12 (VAR_6->config, "asm.cpu", VAR_12);
     }
    }
    FUNC_2 (VAR_12);
   } else {
    FUNC_12 (VAR_6->config, "asm.cpu", "");
   }
  }
  VAR_9 = VAR_6->assembler->cur->bits;
  if (8 & VAR_9) {
   VAR_9 = 8;
  } else if (16 & VAR_9) {
   VAR_9 = 16;
  } else if (32 & VAR_9) {
   VAR_9 = 32;
  } else {
   VAR_9 = 64;
  }
 }
 FUNC_20 (VAR_5, sizeof (VAR_5), "%s.pseudo", VAR_7->value);
 FUNC_12 (VAR_6->config, "asm.parser", VAR_5);
 if (VAR_6->assembler->cur && VAR_6->anal &&
     !(VAR_6->assembler->cur->bits & VAR_6->anal->bits)) {
  FUNC_13 (VAR_6->config, "asm.bits", VAR_9);
 }


 FUNC_16 (VAR_6->dbg, VAR_7->value, VAR_9);
 if (!FUNC_12 (VAR_6->config, "anal.arch", VAR_7->value)) {
  char *VAR_14, *VAR_15 = FUNC_22 (VAR_7->value);
  if (VAR_15) {
   VAR_14 = FUNC_21 (VAR_15, '.');
   if (VAR_14) {
    *VAR_14 = 0;
   }
   if (!FUNC_12 (VAR_6->config, "anal.arch", VAR_15)) {

    FUNC_12 (VAR_6->config, "anal.arch", "null");
   }
   FUNC_2 (VAR_15);
  }
 }

 if (VAR_6->anal) {
  const char *VAR_16 = FUNC_9 (VAR_6->config, "asm.cpu");
  if (!FUNC_18 (VAR_6->anal->syscall, VAR_7->value, VAR_6->anal->bits, VAR_16, VAR_8)) {


  }
 }


 FUNC_0 (VAR_6->config, VAR_7->value, VAR_6->assembler->bits);


 int VAR_17 = FUNC_8 (VAR_6->bin);
 if (VAR_17 == -1 ) {
  VAR_17 = FUNC_10 (VAR_6->config, "cfg.bigendian");
 }


 FUNC_5 (VAR_6->assembler, VAR_17);

 VAR_6->print->big_endian = VAR_17;

 FUNC_6 (VAR_6->assembler, VAR_10);
 FUNC_2 (VAR_10);
 RConfigNode *VAR_18 = FUNC_11 (VAR_6->config, "asm.cpu");
 if (VAR_18) {
  FUNC_26 (VAR_6, VAR_18);
 }
 {
  int VAR_19 = FUNC_4 (VAR_6->anal, VAR_0);
  if (VAR_19 != -1) {
   FUNC_13 (VAR_6->config, "asm.pcalign", VAR_19);
  } else {
   FUNC_13 (VAR_6->config, "asm.pcalign", 0);
  }
 }





 if (!VAR_6->anal || !VAR_6->anal->sdb_types) {
  FUNC_15 (VAR_6);
 }
 FUNC_14 (VAR_6);
 return 1;
}
