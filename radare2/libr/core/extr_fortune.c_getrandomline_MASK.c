
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*,int*) ;
 scalar_t__ FUNC_5 (char const*,int ) ;

__attribute__((used)) static char *FUNC_6(RCore *VAR_1) {
 int VAR_2, VAR_3 = 0;
 const char *VAR_4 = (char *)FUNC_3 (VAR_1->config, "cfg.fortunes.type");
 char *VAR_5 = ((void*)0), *VAR_6;
 for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_0); VAR_2++) {
  if (FUNC_5 (VAR_4, VAR_0[VAR_2])) {
   char *VAR_7 = FUNC_2(VAR_1, VAR_0[VAR_2]);
   VAR_6 = FUNC_4 (VAR_7, &VAR_3);
   if (VAR_6 && *VAR_6) {
    FUNC_1 (VAR_5);
    VAR_5 = VAR_6;
   }
   FUNC_1 (VAR_7);
  }
 }
 return VAR_5;
}
