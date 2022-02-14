
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_7__ {int* aMI; struct TYPE_7__* pRight; struct TYPE_7__* pLeft; TYPE_2__* pPhrase; } ;
struct TYPE_5__ {char* pList; } ;
struct TYPE_6__ {TYPE_1__ doclist; } ;
typedef TYPE_2__ Fts3Phrase ;
typedef TYPE_3__ Fts3Expr ;


 int FUNC_0 (char*,int*) ;

__attribute__((used)) static void FUNC_1(Fts3Expr *VAR_0, int VAR_1){
  if( VAR_0 ){
    Fts3Phrase *VAR_2 = VAR_0->pPhrase;
    if( VAR_2 && VAR_2->doclist.pList ){
      int VAR_3 = 0;
      char *VAR_4 = VAR_2->doclist.pList;

      do{
        u8 VAR_5 = 0;
        int VAR_6 = 0;
        while( 0xFE & (*VAR_4 | VAR_5) ){
          if( (VAR_5&0x80)==0 ) VAR_6++;
          VAR_5 = *VAR_4++ & 0x80;
        }




        VAR_0->aMI[VAR_3*3 + 1] += VAR_6;
        VAR_0->aMI[VAR_3*3 + 2] += (VAR_6>0);
        if( *VAR_4==0x00 ) break;
        VAR_4++;
        VAR_4 += FUNC_0(VAR_4, &VAR_3);
      }while( VAR_3<VAR_1 );
    }

    FUNC_1(VAR_0->pLeft, VAR_1);
    FUNC_1(VAR_0->pRight, VAR_1);
  }
}
