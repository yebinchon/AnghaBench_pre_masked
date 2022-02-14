
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cc; int nbbs; int edges; int ebbs; void* bbsum; } ;
typedef TYPE_1__ RSignGraph ;


 void* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,int) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0, int VAR_1, RSignGraph *VAR_2) {
 const char *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 VAR_2->cc = -1;
 VAR_2->nbbs = -1;
 VAR_2->edges = -1;
 VAR_2->ebbs = -1;
 VAR_2->bbsum = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = FUNC_2 (VAR_0, VAR_4);
  if (FUNC_1 (VAR_3, "cc=")) {
   VAR_2->cc = FUNC_0 (VAR_3 + 3);
  } else if (FUNC_1 (VAR_3, "nbbs=")) {
   VAR_2->nbbs = FUNC_0 (VAR_3 + 5);
  } else if (FUNC_1 (VAR_3, "edges=")) {
   VAR_2->edges = FUNC_0 (VAR_3 + 6);
  } else if (FUNC_1 (VAR_3, "ebbs=")) {
   VAR_2->ebbs = FUNC_0 (VAR_3 + 5);
  } else if (FUNC_1 (VAR_3, "bbsum=")) {
   VAR_2->bbsum = FUNC_0 (VAR_3 + 6);
  } else {
   return 0;
  }
 }
 return 1;
}
