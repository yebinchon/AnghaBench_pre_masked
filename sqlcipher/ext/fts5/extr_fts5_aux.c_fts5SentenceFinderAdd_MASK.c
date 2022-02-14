
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nFirstAlloc; int nFirst; int* aFirst; } ;
typedef TYPE_1__ Fts5SFinder ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(Fts5SFinder *VAR_2, int VAR_3){
  if( VAR_2->nFirstAlloc==VAR_2->nFirst ){
    int VAR_4 = VAR_2->nFirstAlloc ? VAR_2->nFirstAlloc*2 : 64;
    int *VAR_5;

    VAR_5 = (int*)FUNC_0(VAR_2->aFirst, VAR_4*sizeof(int));
    if( VAR_5==0 ) return VAR_0;
    VAR_2->aFirst = VAR_5;
    VAR_2->nFirstAlloc = VAR_4;
  }
  VAR_2->aFirst[VAR_2->nFirst++] = VAR_3;
  return VAR_1;
}
