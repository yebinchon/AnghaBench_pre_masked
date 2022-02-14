
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_6__ {scalar_t__ rc; scalar_t__ pGetNode; int zTab; int zDb; } ;
typedef TYPE_1__ RtreeCheck ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int * FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static u8 *FUNC_9(RtreeCheck *VAR_3, i64 VAR_4, int *VAR_5){
  u8 *VAR_6 = 0;

  if( VAR_3->rc==VAR_1 && VAR_3->pGetNode==0 ){
    VAR_3->pGetNode = FUNC_2(VAR_3,
        "SELECT data FROM %Q.'%q_node' WHERE nodeno=?",
        VAR_3->zDb, VAR_3->zTab
    );
  }

  if( VAR_3->rc==VAR_1 ){
    FUNC_4(VAR_3->pGetNode, 1, VAR_4);
    if( FUNC_8(VAR_3->pGetNode)==VAR_2 ){
      int VAR_7 = FUNC_6(VAR_3->pGetNode, 0);
      const u8 *VAR_8 = (const u8*)FUNC_5(VAR_3->pGetNode, 0);
      VAR_6 = FUNC_7(VAR_7);
      if( VAR_6==0 ){
        VAR_3->rc = VAR_0;
      }else{
        FUNC_0(VAR_6, VAR_8, VAR_7);
        *VAR_5 = VAR_7;
      }
    }
    FUNC_3(VAR_3, VAR_3->pGetNode);
    if( VAR_3->rc==VAR_1 && VAR_6==0 ){
      FUNC_1(VAR_3, "Node %lld missing from database", VAR_4);
    }
  }

  return VAR_6;
}
