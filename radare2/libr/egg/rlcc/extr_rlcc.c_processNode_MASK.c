
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int children_num; char* tag; char* contents; struct TYPE_8__** children; } ;
typedef TYPE_1__ mpc_ast_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12 (mpc_ast_t *VAR_0) {
 if (FUNC_6(VAR_0)) {
  int VAR_1, VAR_2 = 0;
  const char *VAR_3[32];
  for (VAR_1=0 ; VAR_1<VAR_0->children_num; VAR_1++) {
   const char *VAR_4 = VAR_0->children[VAR_1]->tag;
   const char *VAR_5 = VAR_0->children[VAR_1]->contents;
   if (FUNC_9 (VAR_4, "char")) {
    FUNC_7 ("TAG (%s) = (%s)\n", VAR_4, VAR_5);
    VAR_3[VAR_2++] = VAR_5;
   }
  }
  FUNC_7 ("; CALL WITH %d ARGS\n", VAR_2);
 } else if (FUNC_4 (VAR_0)) {
  int VAR_6, VAR_7;
  const char *VAR_8 = VAR_0->children[0]->contents;
  FUNC_7 ("%s:\n", VAR_8);
  for (VAR_6=0 ; VAR_6<VAR_0->children_num; VAR_6++) {
   if (!FUNC_9 (VAR_0->children[VAR_6]->tag, "body|>")) {
    VAR_0 = VAR_0->children[VAR_6];
    for (VAR_6=0 ; VAR_6<VAR_0->children_num; VAR_6++) {
     if (!FUNC_9 (VAR_0->children[VAR_6]->tag, "stmt|>")) {
      FUNC_12 (VAR_0->children[VAR_6]);
     } else {
      FUNC_0 ("UNK %s\n", VAR_0->children[VAR_6]->tag);
     }
    }
    break;
   }
  }
 } else if (FUNC_5 (VAR_0)) {
  if (VAR_0->children_num>4) {
   const char *VAR_9 = VAR_0->children[0]->contents;
   const char *VAR_10 = VAR_0->children[2]->contents;
   const char *VAR_11 = VAR_0->children[4]->contents;
   if (!FUNC_9 (VAR_10, "alias")) {
    FUNC_7 (".equ %s,%s\n", VAR_9, VAR_11);
   } else if (!FUNC_9 (VAR_10, "syscall")) {
    FUNC_7 ("; TODO: register syscall %s number %s\n", VAR_9, VAR_11);
   } else if (!FUNC_9 (VAR_10, "global")) {
    FUNC_7 ("; TODO: global \n");
   } else {
    FUNC_7 ("; UNKNOWN EXPRESISON: NAME = '%s' ", VAR_9);
    FUNC_7 ("TYPE = '%s' ", VAR_10);
    FUNC_7 ("SIZE = '%s'\n", VAR_11);
   }
  }
 } else if (FUNC_2 (VAR_0)) {
  char *VAR_12 = FUNC_10 (VAR_0->contents + 2);
  int VAR_13 = FUNC_11 (VAR_12);
  if (VAR_0->contents[1] == '*') {
   VAR_12[VAR_13-2] = 0;
  }
  while (VAR_12) {
   char *VAR_14 = FUNC_8 (VAR_12, '\n');
   if (VAR_14) {
    *VAR_14 = 0;
    FUNC_7 ("; %s\n", VAR_12);
    VAR_12 = VAR_14 + 1;
   } else {
    FUNC_7 ("; %s\n", VAR_12);
    VAR_12 = ((void*)0);
   }
  }
  FUNC_1 (VAR_12);
 } else if (FUNC_3 (VAR_0)) {
  FUNC_7 ("%s\n", VAR_0->contents+1);
 }
}
