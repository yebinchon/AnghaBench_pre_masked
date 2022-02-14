
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {scalar_t__ rc; int nWorkUnit; TYPE_1__* pConfig; } ;
struct TYPE_9__ {int nWriteCounter; int nLevel; } ;
struct TYPE_8__ {scalar_t__ nAutomerge; } ;
typedef TYPE_2__ Fts5Structure ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__**,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(
  Fts5Index *VAR_1,
  Fts5Structure **VAR_2,
  int VAR_3
){
  if( VAR_1->rc==VAR_0 && VAR_1->pConfig->nAutomerge>0 ){
    Fts5Structure *VAR_4 = *VAR_2;
    u64 VAR_5;
    int VAR_6;
    int VAR_7;


    VAR_5 = VAR_4->nWriteCounter;
    VAR_6 = (int)(((VAR_5 + VAR_3) / VAR_1->nWorkUnit) - (VAR_5 / VAR_1->nWorkUnit));
    VAR_4->nWriteCounter += VAR_3;
    VAR_7 = (int)(VAR_1->nWorkUnit * VAR_6 * VAR_4->nLevel);

    FUNC_0(VAR_1, VAR_2, VAR_7, VAR_1->pConfig->nAutomerge);
  }
}
