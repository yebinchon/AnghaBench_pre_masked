
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef int RStrBuf ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,char const*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 char* FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(void *VAR_3, const char *VAR_4) {
 RCore *VAR_5 = (RCore *)VAR_3;
 RStrBuf *VAR_6 = FUNC_5 (((void*)0));
 int VAR_7 = 0;
 while (VAR_2[VAR_7]) {
  const char *VAR_8 = VAR_2[VAR_7];
  FUNC_6 (VAR_6, VAR_8);
  FUNC_2 (VAR_6, ": ");
  FUNC_2 (VAR_6, FUNC_1 (VAR_5->config, VAR_8));
  if (!FUNC_7 (VAR_2[VAR_7], "scr.color")) {
   FUNC_0 (VAR_5, VAR_4, FUNC_4 (VAR_6), VAR_1);
  } else {
   FUNC_0 (VAR_5, VAR_4, FUNC_4 (VAR_6), VAR_0);
  }
  VAR_7++;
 }
 FUNC_3 (VAR_6);
}
