
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rc; } ;
struct TYPE_6__ {int iSegid; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5Index ;
typedef int Fts5Data ;


 void* VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  Fts5Index *VAR_2,
  Fts5StructureSegment *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6
){
  int VAR_7;



  for(VAR_7=VAR_4; VAR_2->rc==VAR_1 && VAR_7<=VAR_6; VAR_7++){
    Fts5Data *VAR_8 = FUNC_1(VAR_2, FUNC_0(VAR_3->iSegid, VAR_7));
    if( VAR_8 ){
      if( !FUNC_4(VAR_8) ) VAR_2->rc = VAR_0;
      if( VAR_7>=VAR_5 && 0!=FUNC_3(VAR_8) ) VAR_2->rc = VAR_0;
    }
    FUNC_2(VAR_8);
  }
}
