
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iPos; int iColumn; int iOffset; TYPE_1__* dlw; } ;
struct TYPE_4__ {scalar_t__ iType; int b; } ;
typedef TYPE_2__ PLWriter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(PLWriter *VAR_5, int VAR_6, int VAR_7,
                   int VAR_8, int VAR_9){



  char VAR_10[5*VAR_4];
  int VAR_11 = 0;


  FUNC_0( VAR_5->iPos!=-1 );

  if( VAR_5->dlw->iType==VAR_0 ) return;

  if( VAR_6!=VAR_5->iColumn ){
    VAR_11 += FUNC_2(VAR_10+VAR_11, VAR_3);
    VAR_11 += FUNC_2(VAR_10+VAR_11, VAR_6);
    VAR_5->iColumn = VAR_6;
    VAR_5->iPos = 0;
    VAR_5->iOffset = 0;
  }
  FUNC_0( VAR_7>=VAR_5->iPos );
  VAR_11 += FUNC_2(VAR_10+VAR_11, VAR_2+(VAR_7-VAR_5->iPos));
  VAR_5->iPos = VAR_7;
  if( VAR_5->dlw->iType==VAR_1 ){
    FUNC_0( VAR_8>=VAR_5->iOffset );
    VAR_11 += FUNC_2(VAR_10+VAR_11, VAR_8-VAR_5->iOffset);
    VAR_5->iOffset = VAR_8;
    FUNC_0( VAR_9>=VAR_8 );
    VAR_11 += FUNC_2(VAR_10+VAR_11, VAR_9-VAR_8);
  }
  FUNC_1(VAR_5->dlw->b, VAR_10, VAR_11);
}
