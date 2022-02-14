
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char varxs; int varsize; } ;
struct TYPE_13__ {TYPE_1__ lang; TYPE_2__* remit; } ;
struct TYPE_12__ {char const* (* regs ) (TYPE_3__*,int ) ;int (* mathop ) (TYPE_3__*,char,int ,char,char*,char*) ;int (* load_ptr ) (TYPE_3__*,char*) ;int (* load ) (TYPE_3__*,char*,int ) ;} ;
typedef TYPE_2__ REggEmit ;
typedef TYPE_3__ REgg ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_3__*,char*,char*,int ) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_3__*,char*,int ) ;
 char const* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 char const* FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,char,int ,char,char*,char*) ;

__attribute__((used)) static void FUNC_11(REgg *VAR_0, const char *VAR_1, char *VAR_2, char VAR_3) {
 char *VAR_4, *VAR_5, *VAR_6;
 char VAR_7 = ' ';
 char VAR_8[64];
 VAR_6 = VAR_4 = VAR_5 = FUNC_5 (VAR_1);
 if (FUNC_1 (&VAR_5)) {
  *VAR_5 = '\x00';
 }
 REggEmit *VAR_9 = VAR_0->remit;
 while (*VAR_4 && FUNC_2 (*VAR_4)) {
  VAR_4++;
 }
 if (FUNC_3 (VAR_4)) {
  VAR_4 = FUNC_4 (VAR_0, VAR_8, VAR_4, 0);
  if (VAR_0->lang.varxs == '*') {
   VAR_9->load (VAR_0, VAR_4, VAR_0->lang.varsize);
   FUNC_0 (VAR_6);
   VAR_6 = VAR_4 = FUNC_5 (VAR_9->regs (VAR_0, 0));


  } else if (VAR_0->lang.varxs == '&') {
   VAR_9->load_ptr (VAR_0, VAR_4);
   FUNC_0 (VAR_6);
   VAR_6 = VAR_4 = FUNC_5 (VAR_9->regs (VAR_0, 0));
  }
  VAR_7 = ' ';
 } else {
  VAR_7 = '$';
 }
 if (*VAR_4) {
  VAR_9->mathop (VAR_0, VAR_3, VAR_0->lang.varsize, VAR_7, VAR_4, VAR_2);
 }
 if (VAR_4 != VAR_6) {
  FUNC_0 (VAR_4);
 }
 FUNC_0 (VAR_6);
 FUNC_0 (VAR_2);
}
