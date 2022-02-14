
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_10__ {int * pVdbe; TYPE_3__* db; } ;
struct TYPE_8__ {TYPE_1__* pSchema; } ;
struct TYPE_7__ {scalar_t__ schema_cookie; } ;
typedef TYPE_4__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (int *,int ,int,int ,int) ;

void FUNC_3(Parse *VAR_2, int VAR_3){
  sqlite3 *VAR_4 = VAR_2->db;
  Vdbe *VAR_5 = VAR_2->pVdbe;
  FUNC_0( FUNC_1(VAR_4, VAR_3, 0) );
  FUNC_2(VAR_5, VAR_1, VAR_3, VAR_0,
                   (int)(1+(unsigned)VAR_4->aDb[VAR_3].pSchema->schema_cookie));
}
