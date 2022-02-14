
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nFirst; int nLast; int nStep; char** azCksum; } ;
typedef TYPE_1__ CksumDb ;


 int FUNC_0 (int) ;

char *FUNC_1(CksumDb *VAR_0, int VAR_1){
  int VAR_2;
  FUNC_0( VAR_1>=VAR_0->nFirst );
  FUNC_0( VAR_1<=VAR_0->nLast );
  FUNC_0( ((VAR_1-VAR_0->nFirst) % VAR_0->nStep)==0 );

  VAR_2 = (VAR_1 - VAR_0->nFirst) / VAR_0->nStep;
  return VAR_0->azCksum[VAR_2];
}
