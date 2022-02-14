
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* dstvar; char* setenviron; char* syscallbody; char* dstval; char* includefile; void* mode; scalar_t__ ndstval; scalar_t__ slurp; int callname; } ;
struct TYPE_11__ {TYPE_1__ lang; TYPE_2__* remit; } ;
struct TYPE_10__ {int (* call ) (TYPE_3__*,char const*,int ) ;int (* comment ) (TYPE_3__*,char*,scalar_t__,int ) ;} ;
typedef TYPE_2__ REggEmit ;
typedef TYPE_3__ REgg ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (char*) ;
 void* VAR_8 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,char*,char const*,...) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*,char*) ;
 void* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (TYPE_3__*,char*,scalar_t__,int ) ;
 int FUNC_13 (TYPE_3__*,char const*,int ) ;

__attribute__((used)) static void FUNC_14(REgg *VAR_9, const char *VAR_10) {
 char *VAR_11, *VAR_12;
 REggEmit *VAR_13 = VAR_9->remit;
 VAR_10 = FUNC_7 (VAR_10);
 if (VAR_1) {
  VAR_11 = FUNC_8 (VAR_10, '=');
  if (VAR_11) {
   *VAR_11++ = '\0';
   FUNC_2 (VAR_9->lang.dstvar);
   VAR_9->lang.dstvar = FUNC_10 (FUNC_7 (VAR_10));
   VAR_12 = (char *) FUNC_7 (VAR_11);
   if (*VAR_12) {
    FUNC_6 (VAR_9, FUNC_7 (VAR_11));
   }
  } else {
   VAR_10 = FUNC_7 (VAR_10);
   FUNC_6 (VAR_9, FUNC_7 (VAR_10));
   VAR_9->remit->comment (VAR_9, "rcc_fun %d (%s)",
    VAR_1, VAR_9->lang.callname);
  }
 } else {
  VAR_11 = FUNC_8 (VAR_10, '@');
  if (VAR_11) {
   *VAR_11++ = '\0';
   VAR_9->lang.mode = VAR_7;
   if (FUNC_11 (VAR_11, "env")) {

    FUNC_2 (VAR_9->lang.setenviron);
    VAR_9->lang.setenviron = FUNC_10 (FUNC_7 (VAR_10));
    VAR_9->lang.slurp = 0;
   } else if (FUNC_11 (VAR_11, "fastcall")) {

   } else if (FUNC_11 (VAR_11, "syscall")) {
    if (*VAR_10) {
     VAR_9->lang.mode = VAR_8;
     VAR_9->lang.dstvar = FUNC_10 (FUNC_7 (VAR_10));
    } else {
     VAR_9->lang.mode = VAR_5;
     FUNC_2 (VAR_9->lang.syscallbody);
     VAR_9->lang.syscallbody = FUNC_4 (4096);
     VAR_9->lang.dstval = VAR_9->lang.syscallbody;
     FUNC_0 (VAR_9->lang.dstvar);
     VAR_9->lang.ndstval = 0;
     *VAR_9->lang.syscallbody = '\0';
    }
   } else if (FUNC_11 (VAR_11, "include")) {
    VAR_9->lang.mode = VAR_4;
    FUNC_2 (VAR_9->lang.includefile);
    VAR_9->lang.includefile = FUNC_10 (FUNC_7 (VAR_10));


   } else if (FUNC_11 (VAR_11, "alias")) {
    VAR_9->lang.mode = VAR_0;
    VAR_12 = VAR_9->lang.dstvar = FUNC_10 (FUNC_7 (VAR_10));
    while (*VAR_12 && !FUNC_3 (*VAR_12)) {
     VAR_12++;
    }
    *VAR_12 = '\x00';

   } else if (FUNC_11 (VAR_11, "data")) {
    VAR_9->lang.mode = VAR_2;
    VAR_9->lang.ndstval = 0;
    VAR_9->lang.dstvar = FUNC_10 (FUNC_7 (VAR_10));
    VAR_9->lang.dstval = FUNC_4 (4096);
   } else if (FUNC_11 (VAR_11, "naked")) {
    VAR_9->lang.mode = VAR_6;






    FUNC_5 (VAR_9, "%s:\n", VAR_10);
   } else if (FUNC_11 (VAR_11, "inline")) {
    VAR_9->lang.mode = VAR_5;
    FUNC_2 (VAR_9->lang.dstvar);
    VAR_9->lang.dstvar = FUNC_10 (FUNC_7 (VAR_10));
    VAR_9->lang.dstval = FUNC_4 (4096);
    VAR_9->lang.ndstval = 0;
   } else {

    if (*VAR_11) {
     FUNC_5 (VAR_9, "\n.%s %s\n", VAR_11, VAR_10);
    }
    FUNC_5 (VAR_9, "%s:\n", VAR_10);
   }
  } else {

   if (VAR_1 > 0) {

    FUNC_1 ("LABEL %d\n", VAR_1);
    FUNC_5 (VAR_9, "\n%s:\n", VAR_10);
   } else {
    if (!FUNC_9 (VAR_10, "goto")) {
     VAR_9->lang.mode = VAR_3;
    } else {

     VAR_13->call (VAR_9, VAR_10, 0);
    }
   }
  }
 }
}
