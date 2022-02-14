
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ magic; scalar_t__ pc; int nVar; int expmask; int expired; scalar_t__ isPrepareV2; TYPE_6__* db; TYPE_2__* aVar; int zSql; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_9__ {int mutex; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(Vdbe *VAR_6, int VAR_7){
  Mem *VAR_8;
  if( FUNC_6(VAR_6) ){
    return VAR_2;
  }
  FUNC_4(VAR_6->db->mutex);
  if( VAR_6->magic!=VAR_5 || VAR_6->pc>=0 ){
    FUNC_1(VAR_6->db, VAR_1);
    FUNC_5(VAR_6->db->mutex);
    FUNC_3(VAR_1,
        "bind on a busy prepared statement: [%s]", VAR_6->zSql);
    return VAR_2;
  }
  if( VAR_7<1 || VAR_7>VAR_6->nVar ){
    FUNC_1(VAR_6->db, VAR_4);
    FUNC_5(VAR_6->db->mutex);
    return VAR_4;
  }
  VAR_7--;
  VAR_8 = &VAR_6->aVar[VAR_7];
  FUNC_2(VAR_8);
  VAR_8->flags = VAR_0;
  FUNC_1(VAR_6->db, VAR_3);
  FUNC_0( VAR_6->isPrepareV2 || VAR_6->expmask==0 );
  if( VAR_6->expmask!=0 && (VAR_6->expmask & (VAR_7>=31 ? 0x80000000 : (u32)1<<VAR_7))!=0 ){
    VAR_6->expired = 1;
  }
  return VAR_3;
}
