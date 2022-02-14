
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_6__ {int zName; int zDb; } ;
struct TYPE_5__ {scalar_t__ rc; scalar_t__ pWriter; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__,int,int const*,int,int ) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(Fts5Index *VAR_2, i64 VAR_3, const u8 *VAR_4, int VAR_5){
  if( VAR_2->rc!=VAR_0 ) return;

  if( VAR_2->pWriter==0 ){
    Fts5Config *VAR_6 = VAR_2->pConfig;
    FUNC_0(VAR_2, &VAR_2->pWriter, FUNC_4(
          "REPLACE INTO '%q'.'%q_data'(id, block) VALUES(?,?)",
          VAR_6->zDb, VAR_6->zName
    ));
    if( VAR_2->rc ) return;
  }

  FUNC_2(VAR_2->pWriter, 1, VAR_3);
  FUNC_1(VAR_2->pWriter, 2, VAR_4, VAR_5, VAR_1);
  FUNC_6(VAR_2->pWriter);
  VAR_2->rc = FUNC_5(VAR_2->pWriter);
  FUNC_3(VAR_2->pWriter, 2);
}
