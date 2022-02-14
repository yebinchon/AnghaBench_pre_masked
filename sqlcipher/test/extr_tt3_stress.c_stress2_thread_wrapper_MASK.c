
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ rc; int member_0; } ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_13__ {int (* xProc ) (TYPE_3__*,TYPE_2__*,int) ;int zDb; } ;
typedef TYPE_1__ Stress2Ctx ;
typedef TYPE_2__ Sqlite ;
typedef TYPE_3__ Error ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 char* FUNC_4 (char*,int,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static char *FUNC_7(int VAR_3, void *VAR_4){
  Stress2Ctx *VAR_5 = (Stress2Ctx*)VAR_4;
  Error VAR_6 = {0};
  Sqlite VAR_7 = {0};
  int VAR_8 = 0;
  int VAR_9 = 0;

  while( !FUNC_6(&VAR_6) ){
    int VAR_10;
    FUNC_2(&VAR_6, &VAR_7, VAR_5->zDb, 0);
    for(VAR_10=0; VAR_6.rc==VAR_1 && VAR_10<VAR_2; VAR_10++){
      VAR_5->xProc(&VAR_6, &VAR_7, VAR_8);
      VAR_9 += (VAR_6.rc==VAR_1);
      FUNC_0(&VAR_6, VAR_0);
      VAR_8++;
    }
    FUNC_1(&VAR_6, &VAR_7);
  }

  FUNC_3(&VAR_6);
  return FUNC_4("ok %d/%d", VAR_9, VAR_8);
}
