
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__** aHash; TYPE_2__* pFirst; } ;
typedef TYPE_1__ TmGlobal ;
struct TYPE_7__ {scalar_t__ nByte; struct TYPE_7__* pNext; } ;
typedef TYPE_2__ TmBlockHdr ;
struct TYPE_8__ {int nOutAlloc; int nOutByte; int nByte; int nAlloc; int * aFrame; struct TYPE_8__* pNext; } ;
typedef TYPE_3__ TmAgg ;
typedef int FILE ;


 int FUNC_0 (TYPE_3__**) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void FUNC_2(
  TmGlobal *VAR_1,
  int *VAR_2,
  int *VAR_3,
  FILE *VAR_4
){
  TmBlockHdr *VAR_5;
  int VAR_6 = 0;
  int VAR_7 = 0;

  if( VAR_1==0 ) return;

  for(VAR_5=VAR_1->pFirst; VAR_5; VAR_5=VAR_5->pNext){
    VAR_6++;
    VAR_7 += VAR_5->nByte;
  }
  if( VAR_2 ) *VAR_2 = VAR_6;
  if( VAR_3 ) *VAR_3 = VAR_7;
  (void)VAR_4;

}
