
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* dstval; int inlinectr; int ndstval; int stackframe; char* dstvar; int mode; scalar_t__ slurp; } ;
struct TYPE_10__ {TYPE_2__ lang; TYPE_1__* remit; } ;
struct TYPE_8__ {int (* comment ) (TYPE_3__*,char*,char*,char*,int) ;} ;
typedef TYPE_3__ REgg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_6(REgg *VAR_2, char VAR_3) {
 char *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_2->lang.dstval) {
  return 0;
 }

 if (VAR_3 == '{') {
  FUNC_4 (VAR_2, 1);
  if (++(VAR_2->lang.inlinectr) == 1) {
   return VAR_2->lang.ndstval = 0;
  }
 } else if (VAR_2->lang.inlinectr == 0) {

  if (VAR_3 == ')') {
   VAR_2->lang.stackframe = FUNC_1 (VAR_2->lang.dstval);
   VAR_2->lang.ndstval = 0;
  } else {
   VAR_2->lang.dstval[VAR_2->lang.ndstval++] = VAR_3;
  }
  return 0;
 }

 if (VAR_3 == '}') {
  if (VAR_0 < 2) {
   VAR_2->lang.inlinectr = 0;
   FUNC_4 (VAR_2, -1);
   VAR_2->lang.slurp = 0;
   VAR_2->lang.mode = VAR_1;

   if (VAR_2->lang.dstval && VAR_2->lang.dstvar) {
    VAR_2->lang.dstval[VAR_2->lang.ndstval] = '\0';
    VAR_2->remit->comment (VAR_2, "data (%s)(%s)size=(%d)\n",
     VAR_2->lang.dstvar, VAR_2->lang.dstval, VAR_2->lang.stackframe);
    FUNC_3 (VAR_2, ".data\n");
    for (VAR_4 = VAR_2->lang.dstval; FUNC_2 (*VAR_4); VAR_4++) {
     ;
    }
    VAR_6 = (VAR_2->lang.stackframe)? VAR_2->lang.stackframe: 1;

    FUNC_3 (VAR_2, "%s:\n", VAR_2->lang.dstvar);
    for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5++) {
     if (*VAR_4 == '"') {
      FUNC_3 (VAR_2, ".ascii %s%s\n", VAR_2->lang.dstval, (VAR_5 == VAR_6)? "\"\\x00\"": "");
     } else {
      FUNC_3 (VAR_2, ".long %s\n", VAR_2->lang.dstval);
     }
    }
    FUNC_3 (VAR_2, ".text\n");
    FUNC_0 (VAR_2->lang.dstvar);
    FUNC_0 (VAR_2->lang.dstval);
    VAR_2->lang.ndstval = 0;
    VAR_0 = 0;
    return 1;
   }
  }
 }
 if (VAR_2->lang.dstval) {
  VAR_2->lang.dstval[VAR_2->lang.ndstval++] = VAR_3;
 }
 return 0;
}
