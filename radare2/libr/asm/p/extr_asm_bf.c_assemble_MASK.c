
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char ut8 ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_5(RAsm *VAR_0, RAsmOp *VAR_1, const char *VAR_2) {
 int VAR_3 = 0;
 if (VAR_2[0] && VAR_2[1] == ' ') {
  VAR_2 += 2;
 }
 const char *VAR_4 = FUNC_3 (VAR_2, ',');
 const char *VAR_5 = FUNC_3 (VAR_2, '[');
 ut8 VAR_6[32];
 if (!FUNC_4 (VAR_2, "trap", 4)) {
  if (VAR_4) {
   VAR_3 = FUNC_0 (VAR_4 + 1);
   FUNC_1 (VAR_6, 0xcc, VAR_3);
  } else {
   VAR_6[0] = 0x90;
   VAR_3 = 1;
  }
 } else if (!FUNC_4 (VAR_2, "nop", 3)) {
  if (VAR_4) {
   VAR_3 = FUNC_0 (VAR_4 + 1);
   FUNC_1 (VAR_6, 0x90, VAR_3);
  } else {
   VAR_6[0] = 0x90;
   VAR_3 = 1;
  }
 } else if (!FUNC_4 (VAR_2, "inc", 3)) {
  char VAR_7 = VAR_5? '+': '>';
  VAR_6[0] = VAR_7;
  VAR_3 = 1;
 } else if (!FUNC_4 (VAR_2, "dec", 3)) {
  char VAR_8 = VAR_5? '-': '<';
  VAR_6[0] = VAR_8;
  VAR_3 = 1;
 } else if (!FUNC_4 (VAR_2, "sub", 3)) {
  char VAR_9 = VAR_5? '-': '<';
  if (VAR_4) {
   VAR_3 = FUNC_0 (VAR_4 + 1);
   FUNC_1 (VAR_6, VAR_9, VAR_3);
  } else {
   VAR_6[0] = '<';
   VAR_3 = 1;
  }
 } else if (!FUNC_4 (VAR_2, "add", 3)) {
  char VAR_10 = VAR_5? '+': '>';
  if (VAR_4) {
   VAR_3 = FUNC_0 (VAR_4 + 1);
   FUNC_1 (VAR_6, VAR_10, VAR_3);
  } else {
   VAR_6[0] = '<';
   VAR_3 = 1;
  }
 } else if (!FUNC_4 (VAR_2, "while", 5)) {
  VAR_6[0] = '[';
  VAR_3 = 1;
 } else if (!FUNC_4 (VAR_2, "loop", 4)) {
  VAR_6[0] = ']';
  VAR_3 = 1;
 } else if (!FUNC_4 (VAR_2, "in", 4)) {
  if (VAR_4) {
   VAR_3 = FUNC_0 (VAR_4 + 1);
   FUNC_1 (VAR_6, ',', VAR_3);
  } else {
   VAR_6[0] = ',';
   VAR_3 = 1;
  }
 } else if (!FUNC_4 (VAR_2, "out", 4)) {
  if (VAR_4) {
   VAR_3 = FUNC_0 (VAR_4 + 1);
   FUNC_1 (VAR_6, '.', VAR_3);
  } else {
   VAR_6[0] = '.';
   VAR_3 = 1;
  }
 }
 FUNC_2 (&VAR_1->buf, VAR_6, VAR_3);
 return VAR_3;
}
