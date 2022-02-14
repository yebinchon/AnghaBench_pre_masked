
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sbuf ;
struct TYPE_4__ {scalar_t__ add; } ;
typedef TYPE_1__ SdbDiff ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,int,TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_4(const SdbDiff *VAR_0, void *VAR_1) {
 char VAR_2[512];
 int VAR_3 = FUNC_3 (VAR_2, sizeof(VAR_2), VAR_0);
 if (VAR_3 < 0) {
  return;
 }
 char *VAR_4 = VAR_2;
 char *VAR_5 = ((void*)0);
 if ((size_t)VAR_3 >= sizeof (VAR_2)) {
  VAR_5 = FUNC_1 (VAR_3 + 1);
  if (!VAR_5) {
   return;
  }
  VAR_3 = FUNC_3 (VAR_5, VAR_3 + 1, VAR_0);
  if (VAR_3 < 0) {
   goto beach;
  }
 }
 FUNC_2 ("\x1b[%sm%s\x1b[0m\n", VAR_0->add ? "32" : "31", VAR_4);
beach:
 FUNC_0 (VAR_5);
}
