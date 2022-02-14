
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {char* type; int name; int isarg; int size; int kind; int delta; } ;
typedef int RStrBuf ;
typedef TYPE_1__ RAnalVar ;
typedef int RAnal ;


 int FUNC_0 (int *,int ,int,int ,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,char*,...) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (char const*,char*) ;

__attribute__((used)) static void FUNC_13(RAnal *VAR_0, RAnalVar *VAR_1, const char *VAR_2, char *VAR_3, ut64 VAR_4, bool VAR_5, bool VAR_6) {
 if (!VAR_3 || !VAR_1) {
  return;
 }
 char *VAR_7 = VAR_3;
 FUNC_3 (VAR_7);
 if (!*VAR_7) {
  return;
 }
 bool VAR_8 = (VAR_2 && *VAR_2 == '*')? 1: 0;
 if (!FUNC_11 (VAR_7, "int", 3) || (!VAR_8 && !FUNC_10 (VAR_7, "void"))) {

  return;
 }
 const char *VAR_9 = VAR_1->type;
 if (!FUNC_10(VAR_1->type, "int32_t")) {
  VAR_9 = "int";
 } else if (!FUNC_10(VAR_1->type, "uint32_t")) {
  VAR_9 = "unsigned int";
 } else if (!FUNC_10(VAR_1->type, "uint64_t")) {
  VAR_9 = "unsigned long long";
 }
 const char *VAR_10 = FUNC_12 (VAR_9, "int");
 bool VAR_11 = VAR_10? 1: 0;
 if (!VAR_11 && FUNC_11 (VAR_1->type, "void", 4)) {


  return;
 }
 RStrBuf *VAR_12 = FUNC_7 ("");
 if (VAR_6) {
  if (VAR_11 && FUNC_11 (VAR_1->type, "signed", 6)) {
   FUNC_9 (VAR_12, "%s %s", VAR_3, VAR_10);
  } else {
   FUNC_5 (VAR_12);
   return;
  }
 } else {
  FUNC_8 (VAR_12, VAR_7);
 }
 if (!FUNC_11 (FUNC_6 (VAR_12), "const ", 6)) {


  FUNC_9 (VAR_12, "%s", VAR_3 + 6);
 }
 if (VAR_8) {

  FUNC_4 (VAR_12, " *");
 }
 if (VAR_5) {
  if (FUNC_1 (FUNC_6 (VAR_12), "*")) {
   FUNC_4 (VAR_12, "*");
  } else {
   FUNC_4 (VAR_12, " *");
  }
 }

 char* VAR_13 = FUNC_6 (VAR_12);
 if (FUNC_2 (VAR_13, "unsigned long long")) {
  FUNC_8 (VAR_12, "uint64_t");
 } else if (FUNC_2 (VAR_13, "unsigned")) {
  FUNC_8 (VAR_12, "uint32_t");
 } else if (FUNC_2 (VAR_13, "int")) {
  FUNC_8 (VAR_12, "int32_t");
 }
 FUNC_0 (VAR_0, VAR_4, 1, VAR_1->delta, VAR_1->kind, FUNC_6 (VAR_12), VAR_1->size, VAR_1->isarg, VAR_1->name);
 FUNC_5 (VAR_12);
}
