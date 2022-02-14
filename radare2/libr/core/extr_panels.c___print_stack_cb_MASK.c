
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int config; } ;
struct TYPE_8__ {TYPE_1__* model; } ;
struct TYPE_7__ {char* cmd; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,char const*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (TYPE_3__*,char*) ;
 char* FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,int) ;

void FUNC_8(void *VAR_1, void *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_1;
 RPanel *VAR_4 = (RPanel *)VAR_2;
 const int VAR_5 = FUNC_2 (VAR_3->config, "stack.delta");
 const int VAR_6 = FUNC_2 (VAR_3->config, "asm.bits");
 const char VAR_7 = (VAR_5 < 0)? '+': '-';
 const int VAR_8 = FUNC_0 (VAR_5);
 char *VAR_9 = FUNC_5 ("%s%s ", VAR_0, VAR_6 == 32 ? "w" : "q");
 int VAR_10 = FUNC_6 (VAR_4->model->cmd, ' ');
 int VAR_11;
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  const char *VAR_12 = FUNC_7 (VAR_4->model->cmd, VAR_11);
  if (!VAR_11) {
   continue;
  }
  VAR_9 = FUNC_4 (VAR_9, VAR_12);
 }
 VAR_4->model->cmd = VAR_9;
 const char *VAR_13 = FUNC_3 (VAR_3, FUNC_5 ("%s%c%d", VAR_9, VAR_7, VAR_8));
 FUNC_1 (VAR_3, VAR_4, VAR_13);
}
