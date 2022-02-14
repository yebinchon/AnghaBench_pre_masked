
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_14__ {int offset; } ;
struct TYPE_13__ {TYPE_1__* model; } ;
struct TYPE_12__ {char* cmd; int rotate; int addr; int cache; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 size_t FUNC_0 (char**) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 char* FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,char*) ;
 char** VAR_0 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 char* FUNC_7 (char*,char const*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char) ;
 char* FUNC_10 (char*,int) ;

void FUNC_11(void *VAR_1, void *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_1;
 RPanel *VAR_4 = (RPanel *)VAR_2;
 char *VAR_5 = FUNC_2 (VAR_3, VAR_4);
 if (!VAR_5) {
  ut64 VAR_6 = VAR_3->offset;
  if (!VAR_4->model->cache) {
   VAR_3->offset = VAR_4->model->addr;
   FUNC_6 (VAR_3, VAR_3->offset, 1);
   FUNC_5 (VAR_3);
  }
  char *VAR_7 = VAR_0[FUNC_1(VAR_4->model->rotate) % FUNC_0 (VAR_0)];
  char *VAR_8 = FUNC_8 ("%s ", VAR_7);
  int VAR_9 = FUNC_9 (VAR_4->model->cmd, ' ');
  int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   const char *VAR_11 = FUNC_10 (VAR_4->model->cmd, VAR_10);
   if (!VAR_10) {
    continue;
   }
   VAR_8 = FUNC_7 (VAR_8, VAR_11);
  }
  VAR_4->model->cmd = VAR_8;
  VAR_5 = FUNC_3 (VAR_3, VAR_4, 0);
  VAR_3->offset = VAR_6;
 }
 FUNC_4 (VAR_3, VAR_4, VAR_5);
}
