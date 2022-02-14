
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Fts3auxColstats {int dummy; } ;
struct TYPE_3__ {int nStat; struct Fts3auxColstats* aStat; } ;
typedef TYPE_1__ Fts3auxCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Fts3auxColstats*,int ,int) ;
 scalar_t__ FUNC_1 (struct Fts3auxColstats*,int) ;

__attribute__((used)) static int FUNC_2(Fts3auxCursor *VAR_2, int VAR_3){
  if( VAR_3>VAR_2->nStat ){
    struct Fts3auxColstats *VAR_4;
    VAR_4 = (struct Fts3auxColstats *)FUNC_1(VAR_2->aStat,
        sizeof(struct Fts3auxColstats) * VAR_3
    );
    if( VAR_4==0 ) return VAR_0;
    FUNC_0(&VAR_4[VAR_2->nStat], 0,
        sizeof(struct Fts3auxColstats) * (VAR_3 - VAR_2->nStat)
    );
    VAR_2->aStat = VAR_4;
    VAR_2->nStat = VAR_3;
  }
  return VAR_1;
}
