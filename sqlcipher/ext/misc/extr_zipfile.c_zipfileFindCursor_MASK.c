
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_5__ {TYPE_2__* pCsrList; } ;
typedef TYPE_1__ ZipfileTab ;
struct TYPE_6__ {scalar_t__ iId; struct TYPE_6__* pCsrNext; } ;
typedef TYPE_2__ ZipfileCsr ;



__attribute__((used)) static ZipfileCsr *FUNC_0(ZipfileTab *VAR_0, i64 VAR_1){
  ZipfileCsr *VAR_2;
  for(VAR_2=VAR_0->pCsrList; VAR_2; VAR_2=VAR_2->pCsrNext){
    if( VAR_1==VAR_2->iId ) break;
  }
  return VAR_2;
}
