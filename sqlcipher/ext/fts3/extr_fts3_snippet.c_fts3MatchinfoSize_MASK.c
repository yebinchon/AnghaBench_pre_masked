
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nCol; size_t nPhrase; } ;
typedef TYPE_1__ MatchInfo ;



 char VAR_0 ;







 int FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(MatchInfo *VAR_1, char VAR_2){
  size_t VAR_3;

  switch( VAR_2 ){
    case 129:
    case 128:
    case 130:
      VAR_3 = 1;
      break;

    case 135:
    case 133:
    case 134:
      VAR_3 = VAR_1->nCol;
      break;

    case 132:
      VAR_3 = VAR_1->nCol * VAR_1->nPhrase;
      break;

    case 131:
      VAR_3 = VAR_1->nPhrase * ((VAR_1->nCol + 31) / 32);
      break;

    default:
      FUNC_0( VAR_2==VAR_0 );
      VAR_3 = VAR_1->nCol * VAR_1->nPhrase * 3;
      break;
  }

  return VAR_3;
}
