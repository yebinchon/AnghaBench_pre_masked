
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_7__ {int nDim; scalar_t__ bInt; } ;
struct TYPE_6__ {scalar_t__ i; scalar_t__ f; } ;
typedef TYPE_1__ RtreeCoord ;
typedef TYPE_2__ RtreeCheck ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(
  RtreeCheck *VAR_0,
  i64 VAR_1,
  int VAR_2,
  u8 *VAR_3,
  u8 *VAR_4
){
  RtreeCoord VAR_5, VAR_6;
  RtreeCoord VAR_7, VAR_8;
  int VAR_9;

  for(VAR_9=0; VAR_9<VAR_0->nDim; VAR_9++){
    FUNC_0(&VAR_3[4*2*VAR_9], &VAR_5);
    FUNC_0(&VAR_3[4*(2*VAR_9 + 1)], &VAR_6);


    if( VAR_0->bInt ? VAR_5>VAR_6 : VAR_5>VAR_6 ){
      FUNC_1(VAR_0,
          "Dimension %d of cell %d on node %lld is corrupt", VAR_9, VAR_2, VAR_1
      );
    }

    if( VAR_4 ){
      FUNC_0(&VAR_4[4*2*VAR_9], &VAR_7);
      FUNC_0(&VAR_4[4*(2*VAR_9 + 1)], &VAR_8);

      if( (VAR_0->bInt ? VAR_5<VAR_7 : VAR_5<VAR_7)
       || (VAR_0->bInt ? VAR_6>VAR_8 : VAR_6>VAR_8)
      ){
        FUNC_1(VAR_0,
            "Dimension %d of cell %d on node %lld is corrupt relative to parent"
            , VAR_9, VAR_2, VAR_1
        );
      }
    }
  }
}
