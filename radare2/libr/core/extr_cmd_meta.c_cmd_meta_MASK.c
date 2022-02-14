
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int meta_spaces; } ;
struct TYPE_14__ {TYPE_2__* anal; int offset; int num; } ;
typedef int RSpaces ;
typedef TYPE_1__ RCore ;
typedef int RAnalFunction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,int *,char const*) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*,long long,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int ,int) ;
 int FUNC_11 (TYPE_2__*,int ,char const) ;
 int FUNC_12 (TYPE_2__*,int ,char const) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,int *,char const*) ;
 int FUNC_17 (int *,char const*) ;
 int FUNC_18 (int *,char const*) ;
 int FUNC_19 (int *,char const) ;

__attribute__((used)) static int FUNC_20(void *VAR_6, const char *VAR_7) {
 RCore *VAR_8 = (RCore*)VAR_6;
 RAnalFunction *VAR_9;
 RSpaces *VAR_10;
 int VAR_11;

 switch (*VAR_7) {
 case 'v':
  FUNC_7 (VAR_8, VAR_7 + 1);
  break;
 case '\0':
  FUNC_11 (VAR_8->anal, VAR_2, 0);
  break;
 case 'j':
 case '*': {
  if (!VAR_7[0] || VAR_7[1] == '.') {
   FUNC_12 (VAR_8->anal, VAR_8->offset, *VAR_7);
  } else {
   FUNC_11 (VAR_8->anal, VAR_2, *VAR_7);
  }
  break;
 }
 case '.': {
  FUNC_12 (VAR_8->anal, VAR_8->offset, 0);
  break;
 }
 case 'L':
  FUNC_1 (VAR_8, VAR_7 + 1);
  break;
 case 'C':
  FUNC_0 (VAR_8, VAR_7);
  break;
 case 't':
  FUNC_3 (VAR_8, VAR_7);
  break;
 case 'r':
 case 'h':
 case 's':
 case 'z':
 case 'd':
 case 'm':
 case 'f':
  FUNC_2 (VAR_8, VAR_7);
  break;
 case '-':
  if (VAR_7[1] != '*') {
   VAR_11 = VAR_7[1] ? FUNC_13 (VAR_8->num, VAR_7 + (VAR_7[1] == ' ' ? 2 : 1)) : 1;
   FUNC_10 (VAR_8->anal, VAR_2, VAR_8->offset, VAR_11);
  } else FUNC_9 (VAR_8->anal, 0LL, VAR_3);
  break;
 case '?':
  FUNC_8 (VAR_8, VAR_4);
  break;
 case 'F':
  VAR_9 = FUNC_5 (VAR_8->anal, VAR_8->offset,
   VAR_0|VAR_1);
  if (VAR_9) {
   FUNC_6 (VAR_8->anal, VAR_9, VAR_7 + 2);
  } else {
   FUNC_4 ("Cannot find function here\n");
  }
  break;
 case 'S':
  VAR_10 = &VAR_8->anal->meta_spaces;

  switch (VAR_7[1]) {
  case '?':
   FUNC_8 (VAR_8, VAR_5);
   break;
  case '+':
   FUNC_15 (VAR_10, VAR_7 + 2);
   break;
  case 'r':
   if (VAR_7[2] == ' ') {
    FUNC_16 (VAR_10, ((void*)0), VAR_7+2);
   } else {
    FUNC_4 ("Usage: CSr [newname]\n");
   }
   break;
  case '-':
   if (VAR_7[2]) {
    if (VAR_7[2]=='*') {
     FUNC_18 (VAR_10, ((void*)0));
    } else {
     FUNC_18 (VAR_10, VAR_7+2);
    }
   } else {
    FUNC_14 (VAR_10);
   }
   break;
  case 'j':
  case '\0':
  case '*':
   FUNC_19 (VAR_10, VAR_7[1]);
   break;
  case ' ':
   FUNC_17 (VAR_10, VAR_7 + 2);
   break;
  default:
   FUNC_19 (VAR_10, 0);
   break;
  }
  break;
 }
 return 1;
}
