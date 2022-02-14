
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {int (* xDelete ) (TYPE_2__*,TYPE_3__*,int ) ;} ;
typedef TYPE_2__ sqlite3_vfs ;
struct TYPE_15__ {TYPE_1__* pMethods; } ;
typedef TYPE_3__ sqlite3_file ;
struct TYPE_16__ {TYPE_11__* aReal; } ;
typedef TYPE_4__ multiplexGroup ;
struct TYPE_13__ {int (* xClose ) (TYPE_3__*) ;} ;
struct TYPE_12__ {TYPE_3__* z; TYPE_3__* p; } ;


 int FUNC_0 (TYPE_11__*,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(
  multiplexGroup *VAR_0,
  int VAR_1,
  sqlite3_vfs *VAR_2
){
  sqlite3_file *VAR_3 = VAR_0->aReal[VAR_1].p;
  if( VAR_3 ){
    VAR_3->pMethods->xClose(VAR_3);
    if( VAR_2 && VAR_0->aReal[VAR_1].z ){
      VAR_2->xDelete(VAR_2, VAR_0->aReal[VAR_1].z, 0);
    }
    FUNC_1(VAR_0->aReal[VAR_1].p);
  }
  FUNC_1(VAR_0->aReal[VAR_1].z);
  FUNC_0(&VAR_0->aReal[VAR_1], 0, sizeof(VAR_0->aReal[VAR_1]));
}
