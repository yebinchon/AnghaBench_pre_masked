
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int inlinectr; char* dstvar; char* dstval; char* syscallbody; size_t ndstval; size_t ninlines; TYPE_1__* inlines; int mode; scalar_t__ slurp; } ;
struct TYPE_8__ {TYPE_2__ lang; } ;
struct TYPE_6__ {void* body; void* name; } ;
typedef TYPE_3__ REgg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(REgg *VAR_2, char VAR_3) {

 if (VAR_3 == '{') {
  FUNC_2 (VAR_2, 1);
  VAR_2->lang.inlinectr++;
  if (VAR_2->lang.inlinectr == 1) {
   return 0;
  }
 } else if (VAR_2->lang.inlinectr == 0) {
  return 0;
 }


 if (VAR_3 == '}') {
  if (VAR_0 < 2) {
   FUNC_2 (VAR_2, -1);
   VAR_2->lang.slurp = 0;
   VAR_2->lang.mode = VAR_1;
   VAR_2->lang.inlinectr = 0;
   if (!VAR_2->lang.dstvar && VAR_2->lang.dstval == VAR_2->lang.syscallbody) {
    VAR_2->lang.dstval = ((void*)0);
    return 1;
   } else
   if (VAR_2->lang.dstval && VAR_2->lang.dstvar) {
    VAR_2->lang.dstval[VAR_2->lang.ndstval] = '\0';

    VAR_2->lang.inlines[VAR_2->lang.ninlines].name = FUNC_4 (FUNC_3 (VAR_2->lang.dstvar));
    VAR_2->lang.inlines[VAR_2->lang.ninlines].body = FUNC_4 (FUNC_3 (VAR_2->lang.dstval));
    VAR_2->lang.ninlines++;
    FUNC_0 (VAR_2->lang.dstvar);
    FUNC_0 (VAR_2->lang.dstval);
    return 1;
   }
   FUNC_1 ("Parse error\n");
  }
 }
 if (VAR_2->lang.dstval) {
  VAR_2->lang.dstval[VAR_2->lang.ndstval++] = VAR_3;
  VAR_2->lang.dstval[VAR_2->lang.ndstval] = 0;
 }
 return 0;
}
