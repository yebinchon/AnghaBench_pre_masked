
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pCompress; } ;
struct TYPE_7__ {scalar_t__ iLastPg; } ;
typedef TYPE_1__ Segment ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(
  FileSystem *VAR_1,
  Segment *VAR_2,
  LsmPgno VAR_3,
  int VAR_4,
  LsmPgno *VAR_5
){
  LsmPgno VAR_6;
  int VAR_7;

  FUNC_0( VAR_1->pCompress );

  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4-1, &VAR_6);
  if( VAR_2 && VAR_6==VAR_2->iLastPg ){
    VAR_6 = 0;
  }else if( VAR_7==VAR_0 ){
    VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_6, 1, &VAR_6);
  }

  *VAR_5 = VAR_6;
  return VAR_7;
}
